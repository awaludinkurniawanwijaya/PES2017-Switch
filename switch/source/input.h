#pragma once

#include <cstdint>

namespace switch_input
{
    struct State
    {
        bool connected = false;
        uint16_t buttons = 0; // XInput-compatible button bits
        int16_t left_x = 0, left_y = 0, right_x = 0, right_y = 0;
        uint8_t left_trigger = 0, right_trigger = 0;
    };

    // Initializes the primary controller (handheld or paired Joy-Cons).
    bool Initialize();
    // Process libnx applet events on the main thread; false means exit requested.
    bool MainLoop();
    // Poll once per frame, after appletMainLoop() succeeds.
    State Poll();
}
