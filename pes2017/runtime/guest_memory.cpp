#include "guest_memory.h"
#include <initializer_list>
#include "log.h"
#include <ppc_config.h>

#ifdef _WIN32
#  error "the shared-bank memory model is not implemented for Windows"
#  define WIN32_LEAN_AND_MEAN
#  include <windows.h>
// The placeholder flags, for headers that predate them.
#  ifndef MEM_RESERVE_PLACEHOLDER
#    define MEM_RESERVE_PLACEHOLDER 0x00040000
#  endif
#  ifndef MEM_REPLACE_PLACEHOLDER
#    define MEM_REPLACE_PLACEHOLDER 0x00004000
#  endif
#  ifndef MEM_PRESERVE_PLACEHOLDER
#    define MEM_PRESERVE_PLACEHOLDER 0x00000002
#  endif
#elif defined(__SWITCH__)
extern "C"
{
#  include <switch/result.h>
#  include <switch/kernel/svc.h>
#  include <switch/kernel/virtmem.h>
}
#else
#  include <sys/mman.h>
#  include <unistd.h>
#  include <sys/syscall.h>
#  include <fcntl.h>
#  include <string>
#  ifdef PES17_ANDROID
#    include "android/android.h"
#  endif
#endif

namespace
{
    uint8_t* g_base = nullptr;
    constexpr uint64_t kSpace = 0x100000000ull;   // full 32-bit guest space
#ifdef __SWITCH__
    VirtmemReservation* g_reservation = nullptr;
    Handle g_physicalBank = INVALID_HANDLE;

    constexpr bool SwitchCommitPageRange(uint32_t address, uint32_t size,
                                         uint64_t& begin, uint64_t& end)
    {
        if (!size) return false;
        constexpr uint64_t kPage = 0x1000;
        const uint64_t requestBegin = uint64_t(address);
        const uint64_t requestEnd = requestBegin + uint64_t(size);
        if (requestEnd > kSpace) return false;
        begin = requestBegin & ~(kPage - 1);
        end = (requestEnd + kPage - 1) & ~(kPage - 1);
        return end <= kSpace;
    }

    constexpr bool kLastPageRangeValid = [] {
        uint64_t begin = 0, end = 0;
        return SwitchCommitPageRange(0xFFFFFFF0u, 0x10u, begin, end) &&
               begin == 0xFFFFF000ull && end == kSpace;
    }();
    constexpr bool kPastGuestEndRejected = [] {
        uint64_t begin = 0, end = 0;
        return !SwitchCommitPageRange(0xFFFFFFF0u, 0x11u, begin, end);
    }();
    static_assert(kLastPageRangeValid, "last guest page must remain committable");
    static_assert(kPastGuestEndRejected, "guest commit must reject requests past 4 GiB");
#endif
}

uint8_t* guest::Base() { return g_base; }

bool guest::Commit(uint32_t address, uint32_t size)
{
#ifdef _WIN32
    return VirtualAlloc(g_base + address, size, MEM_COMMIT, PAGE_READWRITE) != nullptr;
#elif defined(__SWITCH__)
    if (!g_base || !size) return false;
    uint64_t begin = 0, end = 0;
    // Guest pointers are 32-bit offsets into exactly one 4 GiB reservation.
    // Reject out-of-range requests before deriving a host pointer.
    if (!SwitchCommitPageRange(address, size, begin, end))
    {
        LOGE("guest: Switch commit %08X + %08X exceeds the 4 GiB guest address space",
             address, size);
        return false;
    }
    const uint64_t bankSize = uint64_t(guest::kPhysicalEnd - guest::kPhysicalBase);
    for (uint32_t window : { guest::kCachedBase, guest::kPhysicalBase, guest::kApertureBase })
    {
        const uint64_t windowBegin = window;
        const uint64_t windowEnd = windowBegin + bankSize;
        if (begin >= windowBegin && end <= windowEnd) return true;
        if (begin < windowEnd && end > windowBegin)
        {
            LOGE("guest: Switch commit %08llX..%08llX overlaps physical bank window %08X",
                 (unsigned long long)begin, (unsigned long long)end, window);
            return false;
        }
    }
    const Result rc = svcMapPhysicalMemory(g_base + begin, end - begin);
    if (R_FAILED(rc))
    {
        LOGE("guest: svcMapPhysicalMemory(%08llX, %llu) failed: 0x%08X",
             (unsigned long long)begin, (unsigned long long)(end - begin), unsigned(rc));
        return false;
    }
    return true;
#else
    // The reservation is already mapped read/write; pages are backed on touch.
    (void)address; (void)size;
    return true;
#endif
}

// On Linux the whole space is mapped read/write and a page is backed the first
// time it is touched, wherever it is. Windows only backs what is committed, so
// the fault handler commits a reserved page the guest touches: the same
// memory, zeroed, on first use.
//
// That includes the first pages. A read through a null guest pointer returns
// zero where the console faults, so a title function whose only hazard is a
// null base needs no guard here: G_GetClientScore (sub_82231F10 in the
// multiplayer) reads level.clients[index].score with level.clients null while
// no game is loaded, which iw4x guards on the PC, and returns 0 on both systems.
bool guest::CommitOnTouch(const void* address)
{
#ifdef _WIN32
    const auto* at = static_cast<const uint8_t*>(address);
    if (!g_base || at < g_base || at >= g_base + kSpace) return false;
    MEMORY_BASIC_INFORMATION info;
    if (!VirtualQuery(at, &info, sizeof(info)) || info.State != MEM_RESERVE) return false;
    constexpr uintptr_t kChunk = 0x10000;
    auto* chunk = reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(at) & ~(kChunk - 1));
    return VirtualAlloc(chunk, kChunk, MEM_COMMIT, PAGE_READWRITE) != nullptr;
#else
    (void)address;
    return false;
#endif
}

namespace
{
    // The physical bank, seen through both of the windows the console gives it.
    //
    // D3D9 forms an address for the command processor as
    // (address & 0x1FFFFFFF) - 0x40000000 -- the same offset in the 0xC0000000
    // window -- and stores it in structures it later reads back itself, the chunk
    // list of a recorded command buffer among them. Here the two windows have to
    // be one piece of memory, or the second is a silent 512 MB of zeroes: the
    // reads succeed, return nothing, and the failure surfaces somewhere else
    // entirely as a count of zero or a null pointer.
    //
    // A shared memory object placed over the reservation twice. Nothing else has
    // to know: a guest pointer through either window is dereferenced as an
    // offset from the base and lands on the same page.
#ifdef _WIN32
    // Windows places a view only over a placeholder of exactly its size
    // (Windows 10 1803 and later), so the space is reserved as placeholders,
    // split at the two windows, the bank mapped into both, and the rest turned
    // into an ordinary reservation.
    using VirtualAlloc2Fn = PVOID(WINAPI*)(HANDLE, PVOID, SIZE_T, ULONG, ULONG, void*, ULONG);
    using MapViewOfFile3Fn = PVOID(WINAPI*)(HANDLE, HANDLE, PVOID, ULONG64, SIZE_T, ULONG, ULONG, void*, ULONG);
    VirtualAlloc2Fn g_virtualAlloc2 = nullptr;
    MapViewOfFile3Fn g_mapViewOfFile3 = nullptr;

    bool ReserveSpace()
    {
        HMODULE kernelBase = GetModuleHandleW(L"kernelbase.dll");
        g_virtualAlloc2 = reinterpret_cast<VirtualAlloc2Fn>(
            reinterpret_cast<void*>(GetProcAddress(kernelBase, "VirtualAlloc2")));
        g_mapViewOfFile3 = reinterpret_cast<MapViewOfFile3Fn>(
            reinterpret_cast<void*>(GetProcAddress(kernelBase, "MapViewOfFile3")));
        if (!g_virtualAlloc2 || !g_mapViewOfFile3)
        {
            LOGE("this version of Windows cannot map memory twice (Windows 10 1803 or later is needed)");
            return false;
        }
        g_base = static_cast<uint8_t*>(g_virtualAlloc2(nullptr, nullptr, kSpace, MEM_RESERVE | MEM_RESERVE_PLACEHOLDER,
                                                       PAGE_NOACCESS, nullptr, 0));
        return g_base != nullptr;
    }

    bool MapPhysicalAperture()
    {
        const size_t size = size_t(guest::kPhysicalEnd - guest::kPhysicalBase);
        HANDLE bank = CreateFileMappingW(INVALID_HANDLE_VALUE, nullptr, PAGE_READWRITE,
                                         DWORD(uint64_t(size) >> 32), DWORD(size), nullptr);
        if (!bank) { LOGE("CreateFileMapping failed (%lu)", GetLastError()); return false; }
        bool ok = true;
        for (uint32_t window : { guest::kCachedBase, guest::kPhysicalBase, guest::kApertureBase })
        {
            ok = ok && VirtualFree(g_base + window, size, MEM_RELEASE | MEM_PRESERVE_PLACEHOLDER);
            ok = ok && g_mapViewOfFile3(bank, GetCurrentProcess(), g_base + window, 0, size,
                                        MEM_REPLACE_PLACEHOLDER, PAGE_READWRITE, nullptr, 0);
        }
        // The views keep the memory alive; the handle is not needed.
        CloseHandle(bank);
        if (!ok) { LOGE("mapping the physical bank failed (%lu)", GetLastError()); return false; }
        // What is left of the placeholder, below the bank and above the second
        // window, becomes an ordinary reservation to commit from.
        const uint32_t apertureEnd = guest::kApertureBase + uint32_t(size);
        return g_virtualAlloc2(nullptr, g_base, guest::kPhysicalBase, MEM_RESERVE | MEM_REPLACE_PLACEHOLDER,
                               PAGE_NOACCESS, nullptr, 0) &&
               g_virtualAlloc2(nullptr, g_base + apertureEnd, size_t(kSpace - apertureEnd),
                               MEM_RESERVE | MEM_REPLACE_PLACEHOLDER, PAGE_NOACCESS, nullptr, 0);
    }
#elif defined(__SWITCH__)
    bool ReserveSpace()
    {
        // Reserve one contiguous 4 GiB guest address range in Horizon's ASLR
        // region. virtmemAddReservation keeps libnx's own random mappings out
        // of the range; the individual guest pages are mapped on Commit().
        virtmemLock();
        void* address = virtmemFindAslr(size_t(kSpace), 0x1000);
        if (address) g_reservation = virtmemAddReservation(address, size_t(kSpace));
        virtmemUnlock();
        if (!address || !g_reservation)
        {
            LOGE("guest: could not reserve a contiguous 4 GiB Switch address range");
            return false;
        }
        g_base = static_cast<uint8_t*>(address);
        return true;
    }

    bool MapPhysicalAperture()
    {
        const size_t size = size_t(guest::kPhysicalEnd - guest::kPhysicalBase);

        // svcMapPhysicalMemory has an additional NPDM requirement: the
        // process must have a non-zero SystemResourceSize. This is separate
        // from the ordinary Horizon memory resource limit and cannot be fixed
        // merely by shrinking the libnx heap.
        u64 systemResourceSize = 0;
        u64 systemResourceUsed = 0;
        const Result systemResourceSizeResult = svcGetInfo(
            &systemResourceSize, InfoType_SystemResourceSizeTotal, 0, 0);
        const Result systemResourceUsedResult = svcGetInfo(
            &systemResourceUsed, InfoType_SystemResourceSizeUsed, 0, 0);
        LOGI("guest: Horizon system resource size=%llu used=%llu bytes, query rc=%08X/%08X",
             (unsigned long long)systemResourceSize,
             (unsigned long long)systemResourceUsed,
             unsigned(systemResourceSizeResult), unsigned(systemResourceUsedResult));
        if (R_SUCCEEDED(systemResourceSizeResult) && systemResourceSize == 0)
        {
            LOGE("guest: this process has SystemResourceSize=0; svcMapPhysicalMemory requires a non-zero NPDM SystemResourceSize");
        }

        // Capture Horizon's actual process memory budget before requesting the
        // 512 MiB Xbox 360 physical bank. This distinguishes a process resource
        // limit from an address-space reservation or alias-mapping failure.
        u64 resourceLimitValue = 0;
        const Result limitHandleResult = svcGetInfo(
            &resourceLimitValue, InfoType_ResourceLimit, 0, 0);
        if (R_SUCCEEDED(limitHandleResult))
        {
            const Handle resourceLimit = static_cast<Handle>(resourceLimitValue);
            s64 memoryCurrent = -1;
            s64 memoryLimit = -1;
            s64 memoryPeak = -1;
            const Result currentResult = svcGetResourceLimitCurrentValue(
                &memoryCurrent, resourceLimit, LimitableResource_Memory);
            const Result maximumResult = svcGetResourceLimitLimitValue(
                &memoryLimit, resourceLimit, LimitableResource_Memory);
            const Result peakResult = svcGetResourceLimitPeakValue(
                &memoryPeak, resourceLimit, LimitableResource_Memory);
            LOGI("guest: Horizon memory resource current=%lld limit=%lld peak=%lld (MiB), query rc=%08X/%08X/%08X",
                 (long long)(memoryCurrent < 0 ? -1 : memoryCurrent / 1048576),
                 (long long)(memoryLimit < 0 ? -1 : memoryLimit / 1048576),
                 (long long)(memoryPeak < 0 ? -1 : memoryPeak / 1048576),
                 unsigned(currentResult), unsigned(maximumResult), unsigned(peakResult));
        }
        else
        {
            LOGW("guest: could not query Horizon resource-limit handle: 0x%08X",
                 unsigned(limitHandleResult));
        }

        Result rc = svcCreateSharedMemory(&g_physicalBank, size, Perm_Rw, Perm_DontCare);
        if (R_FAILED(rc))
        {
            LOGE("guest: svcCreateSharedMemory(%zu) failed: 0x%08X",
                 size, unsigned(rc));
            g_physicalBank = INVALID_HANDLE;
            return false;
        }

        const uint32_t windows[] = {
            guest::kCachedBase, guest::kPhysicalBase, guest::kApertureBase
        };
        size_t mapped = 0;
        for (uint32_t window : windows)
        {
            rc = svcMapSharedMemory(g_physicalBank, g_base + window, size, Perm_Rw);
            if (R_FAILED(rc))
            {
                LOGE("guest: mapping 512 MiB bank at %08X failed: 0x%08X",
                     window, unsigned(rc));
                while (mapped)
                {
                    --mapped;
                    svcUnmapSharedMemory(g_physicalBank, g_base + windows[mapped], size);
                }
                svcCloseHandle(g_physicalBank);
                g_physicalBank = INVALID_HANDLE;
                return false;
            }
            ++mapped;
        }
        LOGI("guest: Switch shared 512 MiB bank mapped at cached/physical/aperture windows");
        return true;
    }
#else
    bool ReserveSpace()
    {
        // MAP_NORESERVE: address space only, pages allocated on touch.
        g_base = (uint8_t*)mmap(nullptr, kSpace, PROT_READ | PROT_WRITE,
                                MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
        if (g_base == MAP_FAILED) g_base = nullptr;
        return g_base != nullptr;
    }

    // A file descriptor for the physical bank. memfd_create everywhere it is
    // allowed; on an Android device whose seccomp policy refuses it, an
    // unlinked file in the app's own cache does the same job -- what the two
    // windows need is a descriptor two mappings can share, not a memfd.
    int OpenBankDescriptor()
    {
        const int fd = int(syscall(SYS_memfd_create, "pes17-physical", 0));
        if (fd >= 0) return fd;
#ifdef PES17_ANDROID
        const std::string path = android::Paths().cache + "/physical.bank";
        const int file = open(path.c_str(), O_RDWR | O_CREAT | O_TRUNC, 0600);
        if (file >= 0)
        {
            // Unlinked at once: the mappings keep it, and nothing is left on
            // disk if the process dies.
            unlink(path.c_str());
            LOGW("memfd_create refused; the physical bank is an unlinked cache file");
            return file;
        }
#endif
        return -1;
    }

    bool MapPhysicalAperture()
    {
        const size_t size = size_t(guest::kPhysicalEnd - guest::kPhysicalBase);
        const int fd = OpenBankDescriptor();
        if (fd < 0) { LOGE("no descriptor for the physical bank"); return false; }
        bool ok = ftruncate(fd, off_t(size)) == 0;
        // All three windows, as on Windows: the heap hands out cached-window
        // addresses (kernel.cpp kWindowDelta) that the GPU and DMA reach by
        // their physical address, so the cached window must be the bank too.
        for (uint32_t window : { guest::kCachedBase, guest::kPhysicalBase, guest::kApertureBase })
        {
            if (!ok) break;
            ok = mmap(g_base + window, size, PROT_READ | PROT_WRITE,
                      MAP_SHARED | MAP_FIXED | MAP_NORESERVE, fd, 0) != MAP_FAILED;
        }
        // The mappings keep the memory alive; the descriptor is not needed.
        close(fd);
        return ok;
    }
#endif
}

uint8_t* guest::Initialise()
{
#if defined(__SWITCH__)
    // Horizon's guest mappings and svcMapPhysicalMemory are page-granular at
    // 4 KiB. Do not route this native path through the POSIX sysconf API.
    LOGI("host pages are %u bytes", 0x1000u);
#elif !defined(_WIN32)
    // Worth a line: an Android 15 device has 16 KB pages, everything else
    // has 4 KB, and the difference decides whether memory protection can
    // work at the granularity the renderer wants (gpu/memory_watch.h).
    LOGI("host pages are %ld bytes", sysconf(_SC_PAGESIZE));
#endif
    if (!ReserveSpace())
    {
        LOGE("could not reserve %llu bytes of address space", (unsigned long long)kSpace);
        return nullptr;
    }
    // The bank first: on Windows the rest of the space is only reserved once
    // the views are in place.
    if (!MapPhysicalAperture())
    {
        LOGE("could not alias the physical aperture at %08X", kApertureBase);
        return nullptr;
    }

    const uint32_t funcTableBase = kFuncTableBase;
    const uint32_t funcTableSize = uint32_t(PPC_CODE_SIZE * 2);

    static_assert(PPC_IMAGE_BASE + PPC_IMAGE_SIZE <= kHeapBase,
                  "the heap must start above the image");
    static_assert(kFuncTableBase + PPC_CODE_SIZE * 2 <= kFarBase,
                  "the function lookup table must end below the far heap");

    // The physical bank is a mapping, committed whole already.
    if (!Commit(uint32_t(PPC_IMAGE_BASE), uint32_t(PPC_IMAGE_SIZE)) ||
        !Commit(funcTableBase, funcTableSize) ||
        !Commit(kHeapBase, kHeapEnd - kHeapBase))
    {
        LOGE("failed to commit guest regions");
        return nullptr;
    }

    LOGI("guest space at host %p", (void*)g_base);
    LOGI("  image      %08X..%08X  (%.1f MB)", uint32_t(PPC_IMAGE_BASE), uint32_t(PPC_IMAGE_BASE + PPC_IMAGE_SIZE), PPC_IMAGE_SIZE / 1048576.0);
    LOGI("  func table %08X..%08X  (%.1f MB)", funcTableBase, funcTableBase + funcTableSize, funcTableSize / 1048576.0);
    LOGI("  heap       %08X..%08X  (%.1f MB; the same bank as the physical window)", kHeapBase, kHeapEnd, (kHeapEnd - kHeapBase) / 1048576.0);
    LOGI("  far heap   %08X..%08X  (%.1f MB of address space, backed on touch)", kFarBase, kFarEnd, (kFarEnd - kFarBase) / 1048576.0);
    LOGI("  physical   %08X..%08X  (%.1f MB)", kPhysicalBase, kPhysicalEnd, (kPhysicalEnd - kPhysicalBase) / 1048576.0);
    LOGI("  aperture   %08X..%08X  (the same memory, second window)",
         kApertureBase, uint32_t(kApertureBase + (kPhysicalEnd - kPhysicalBase)));
    return g_base;
}
