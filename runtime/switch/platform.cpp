#include "../platform.h"

#include "../../switch/source/input.h"

#include <switch.h>

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <new>

#include <sys/stat.h>
#include <unistd.h>

// NXVK requires a full Application applet (not the Album applet) so Horizon
// grants the process the GPU/memory budget needed to create its device.
// Keep the default libnx heap sizing policy: it sizes the heap from the
// process memory budget rather than reserving an arbitrary fixed amount.
extern "C"
{
    u32 __nx_applet_type = AppletType_Application;
    size_t __nx_heap_size = 0;
}

// libnx does not expose POSIX thread names, backtraces, or dlopen-compatible
// process services. Keep those operations explicit rather than importing the
// desktop implementation's Linux headers into the Switch target.

namespace
{
    u64 g_mainThreadId = 0;

    struct ThreadControl
    {
        Thread thread{};
        void (*body)(void*) = nullptr;
        void* argument = nullptr;
        char name[16]{};
        };

    // libnx requires the Thread object and its backing stack/TLS to remain
    // alive until the kernel thread has exited and threadClose has run.
    // The current runtime API is detached and has no join/reap operation, so
    // controls are retained for the process lifetime. This is bounded by the
    // number of runtime worker threads and avoids use-after-free on exit.

    void ThreadEntry(void* raw)
    {
        auto* control = static_cast<ThreadControl*>(raw);
        control->body(control->argument);
    }

    u32 CurrentThreadId()
    {
        u64 id = 0;
        if (R_FAILED(svcGetThreadId(&id, CUR_THREAD_HANDLE))) return 0;
        return static_cast<u32>(id);
    }
}

void platform::Initialise()
{
    g_mainThreadId = CurrentThreadId();

    // The runtime's player install layout lives on SD. Mount it before
    // settings, install discovery, or any game files are opened.
    const Result mounted = fsdevMountSdmc();
    if (R_FAILED(mounted))
    {
        constexpr char message[] = "[PES17] failed to mount SD card filesystem\\n";
        svcOutputDebugString(message, sizeof(message) - 1);
    }
    else
    {
        mkdir("sdmc:/switch", 0777);
        mkdir("sdmc:/switch/PES2017", 0777);
        if (chdir("sdmc:/switch/PES2017") != 0)
        {
            constexpr char message[] = "[PES17] failed to enter sdmc:/switch/PES2017\\n";
            svcOutputDebugString(message, sizeof(message) - 1);
        }
    }

    // Input remains usable even when the SD card is absent or cannot mount.
    switch_input::Initialize();
}

uint32_t platform::ThreadId()
{
    return CurrentThreadId();
}

bool platform::IsMainThread()
{
    return g_mainThreadId != 0 && CurrentThreadId() == g_mainThreadId;
}

void platform::SetThreadName(const char* name)
{
    // Horizon does not provide a public thread-name service through libnx.
    (void)name;
}

void platform::LowerThreadPriority()
{
    // 0x3B is libnx's documented preemptive-multithreading priority.
    svcSetThreadPriority(threadGetCurHandle(), 0x3B);
}

void platform::IdleThreadPriority()
{
    // 0x3F is the lowest priority in the libnx thread priority range.
    svcSetThreadPriority(threadGetCurHandle(), 0x3F);
}

void platform::SetThreadAffinity(ThreadAffinityRole role)
{
    // Core topology and permitted masks vary by application/process type.
    // Keep the system scheduler in control until runtime measurements justify
    // a specific Switch core policy.
    (void)role;
}

void platform::PrintBacktrace(const char* why)
{
    const char* message = why ? why : "unspecified";
    constexpr char prefix[] = "[PES17] backtrace unavailable on Switch: ";
    svcOutputDebugString(prefix, sizeof(prefix) - 1);
    svcOutputDebugString(message, std::strlen(message));
    svcOutputDebugString("\n", 1);
}

bool platform::StartThread(void (*body)(void*), void* argument, size_t stackBytes,
                           const char* name)
{
    if (!body) return false;

    auto* control = new (std::nothrow) ThreadControl{};
    if (!control) return false;

    control->body = body;
    control->argument = argument;
    if (name) std::snprintf(control->name, sizeof(control->name), "%s", name);

    // libnx allocates stack/TLS storage when stack_mem is NULL. Round the
    // requested guest-worker stack up to a page boundary.
    constexpr size_t kPageSize = 0x1000;
    stackBytes = std::max(stackBytes, size_t(0x4000));
    stackBytes = (stackBytes + kPageSize - 1) & ~(kPageSize - 1);

    Result rc = threadCreate(&control->thread, ThreadEntry, control, nullptr,
                             stackBytes, 0x3B, -2);
    if (R_FAILED(rc))
    {
        delete control;
        return false;
    }

    rc = threadStart(&control->thread);
    if (R_FAILED(rc))
    {
        threadClose(&control->thread);
        delete control;
        return false;
    }

    // The control remains allocated because the runtime's detached-thread API
    // has no join/reap callback with which to safely release libnx resources.
    return true;
}

platform::ThreadHandle platform::StartJoinableThread(void (*body)(void*), void* argument,
                                                      size_t stackBytes, const char* name)
{
    if (!body) return nullptr;
    auto* control = new (std::nothrow) ThreadControl{};
    if (!control) return nullptr;
    control->body = body;
    control->argument = argument;
    if (name) std::snprintf(control->name, sizeof(control->name), "%s", name);

    constexpr size_t kPageSize = 0x1000;
    stackBytes = std::max(stackBytes, size_t(0x4000));
    stackBytes = (stackBytes + kPageSize - 1) & ~(kPageSize - 1);
    Result rc = threadCreate(&control->thread, ThreadEntry, control, nullptr,
                             stackBytes, 0x3B, -2);
    if (R_FAILED(rc)) { delete control; return nullptr; }
    rc = threadStart(&control->thread);
    if (R_FAILED(rc))
    {
        threadClose(&control->thread);
        delete control;
        return nullptr;
    }
    return control;
}

void platform::JoinThread(ThreadHandle handle)
{
    auto* control = static_cast<ThreadControl*>(handle);
    if (!control) return;
    threadWaitForExit(&control->thread);
    threadClose(&control->thread);
    delete control;
}

void* platform::OpenLibrary(const char* path)
{
    (void)path;
    return nullptr;
}

void* platform::LoadedLibrary(const char* name)
{
    (void)name;
    return nullptr;
}

void* platform::Symbol(void* library, const char* name)
{
    (void)library;
    (void)name;
    return nullptr;
}
