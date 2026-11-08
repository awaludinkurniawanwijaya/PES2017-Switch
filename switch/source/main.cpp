#include <switch.h>
#include <cstdio>
#include <chrono>
#include <condition_variable>
#include <mutex>
#include <shared_mutex>

#include "input.h"
#include "platform.h"
#include "settings.h"
#include "memory_alias_probe.h"

namespace {
    std::mutex g_probeMutex;
    std::condition_variable g_probeCondition;
    std::shared_mutex g_probeSharedMutex;
    std::once_flag g_probeOnce;
    unsigned g_probeOnceCount = 0;
    bool g_probeReady = false;

    void SyncProbeWorker(void*) {
        std::call_once(g_probeOnce, [] { ++g_probeOnceCount; });
        {
            std::lock_guard lock(g_probeMutex);
            g_probeReady = true;
        }
        g_probeCondition.notify_one();
    }

    bool RunSyncProbe() {
        g_probeReady = false;
        auto worker = platform::StartJoinableThread(
            SyncProbeWorker, nullptr, 256 * 1024, "C++ sync probe");
        if (!worker) return false;
        bool ready = false;
        {
            std::unique_lock lock(g_probeMutex);
            ready = g_probeCondition.wait_for(lock, std::chrono::seconds(3),
                                              [] { return g_probeReady; });
        }
        platform::JoinThread(worker);
        std::call_once(g_probeOnce, [] { ++g_probeOnceCount; });
        {
            std::unique_lock lock(g_probeSharedMutex);
        }
        {
            std::shared_lock lock(g_probeSharedMutex);
        }
        return ready && g_probeOnceCount == 1;
    }
}

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

    consoleInit(nullptr);

    // Load the same independent controller switches as the full runtime so
    // this diagnostic NRO can verify the physical button mapping on hardware.
    const Result sdResult = fsdevMountSdmc();
    const bool sdMounted = R_SUCCEEDED(sdResult);
    std::string loadedSettings;
    if (sdMounted)
        loadedSettings = settings::Load("sdmc:/switch/PES2017/.env");

    switch_input::Initialize();
    const bool syncOk = RunSyncProbe();
    const auto memoryProbe = switch_memory_probe::Run();

    std::printf("PES 2017 - Nintendo Switch port\n");
    std::printf("--------------------------------\n");
    std::printf("Native libnx bootstrap is running.\n");
    std::printf("C++ thread/synchronization probe: %s\n", syncOk ? "passed" : "FAILED");
    std::printf("Guest RAM alias probe: %s\\n", memoryProbe.available ? "passed (3 mappings coherent)" : "not available");
    std::printf("  shared-memory create: 0x%08X\\n", unsigned(memoryProbe.create));
    std::printf("  map results: 0x%08X / 0x%08X / 0x%08X\\n",
                unsigned(memoryProbe.map[0]), unsigned(memoryProbe.map[1]), unsigned(memoryProbe.map[2]));
    std::printf("Joy-Con / Pro Controller input test\n");
    std::printf("Buttons: A/B/X/Y, D-pad, L/R, ZL/ZR\n");
    std::printf("Sticks: left and right analog\n");
    std::printf("Settings: %s\n", loadedSettings.empty() ? "defaults" : loadedSettings.c_str());
    std::printf("Config: sdmc:/switch/PES2017/.env\n");
    std::printf("Press + to exit.\n\n");

    while (switch_input::MainLoop()) {
        const switch_input::State pad = switch_input::Poll();
        std::printf("\x1b[8;1H");
        std::printf("Controller: %s       \n", pad.connected ? "connected" : "not detected");
        std::printf("Buttons:    %04X      \n", pad.buttons);
        std::printf("Left stick: %6d %6d  \n", pad.left_x, pad.left_y);
        std::printf("Right stick:%6d %6d  \n", pad.right_x, pad.right_y);
        std::printf("Triggers:   %3u %3u    \n", pad.left_trigger, pad.right_trigger);

        if (pad.buttons && (pad.buttons & 0x0010)) break;
        consoleUpdate(nullptr);
    }

    if (sdMounted) fsdevUnmountDevice("sdmc");
    consoleExit(nullptr);
    return 0;
}
