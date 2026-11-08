#include "memory_alias_probe.h"

extern "C"
{
#include <switch/result.h>
#include <switch/kernel/svc.h>
#include <switch/kernel/virtmem.h>
}

#include <cstdint>

switch_memory_probe::ResultInfo switch_memory_probe::Run()
{
    ResultInfo out{};
    constexpr uint64_t kGuestSpace = 0x100000000ull;
    constexpr size_t kProbeSize = 0x1000;
    constexpr uint32_t kCommitProbeAddress = 0x10000000u;
    const uint32_t windows[] = { 0x80000000u, 0xA0000000u, 0xC0000000u };

    // Mirror the runtime's exact reservation strategy and guest-window offsets.
    virtmemLock();
    void* base = virtmemFindAslr(size_t(kGuestSpace), 0x1000);
    VirtmemReservation* reservation =
        base ? virtmemAddReservation(base, size_t(kGuestSpace)) : nullptr;
    virtmemUnlock();
    if (!base || !reservation)
    {
        out.reserve = 0xFFFFFFFEu;
        return out;
    }
    out.reserve = 0;

    Handle bank = INVALID_HANDLE;
    out.create = svcCreateSharedMemory(&bank, kProbeSize, Perm_Rw, Perm_DontCare);
    if (R_FAILED(out.create)) goto cleanup_reservation;

    {
        size_t mapped = 0;
        for (uint32_t i = 0; i < 3; ++i)
        {
            out.map[i] = svcMapSharedMemory(
                bank, static_cast<uint8_t*>(base) + windows[i], kProbeSize, Perm_Rw);
            if (R_FAILED(out.map[i])) break;
            ++mapped;
        }

        if (mapped == 3)
        {
            auto* first = reinterpret_cast<volatile uint32_t*>(
                static_cast<uint8_t*>(base) + windows[0]);
            auto* second = reinterpret_cast<volatile uint32_t*>(
                static_cast<uint8_t*>(base) + windows[1]);
            auto* third = reinterpret_cast<volatile uint32_t*>(
                static_cast<uint8_t*>(base) + windows[2]);
            *first = 0x50455331u;
            out.coherent = (*second == 0x50455331u) && (*third == 0x50455331u);

            // The runtime also commits non-bank pages in the reserved guest
            // range (for example its function table); test that exact SVC path.
            out.commit = svcMapPhysicalMemory(
                static_cast<uint8_t*>(base) + kCommitProbeAddress, kProbeSize);
            if (R_SUCCEEDED(out.commit))
                svcUnmapPhysicalMemory(
                    static_cast<uint8_t*>(base) + kCommitProbeAddress, kProbeSize);
        }

        while (mapped)
        {
            --mapped;
            svcUnmapSharedMemory(bank,
                static_cast<uint8_t*>(base) + windows[mapped], kProbeSize);
        }
    }

    svcCloseHandle(bank);
cleanup_reservation:
    virtmemLock();
    virtmemRemoveReservation(reservation);
    virtmemUnlock();

    out.available = out.coherent && R_SUCCEEDED(out.commit) &&
                    R_SUCCEEDED(out.map[0]) && R_SUCCEEDED(out.map[1]) &&
                    R_SUCCEEDED(out.map[2]) && R_SUCCEEDED(out.create);
    return out;
}
