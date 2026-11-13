#pragma once

#include <cstdint>

namespace switch_input
{
    constexpr uint16_t kButtonA = 0x1000;
    constexpr uint16_t kButtonB = 0x2000;
    constexpr uint16_t kButtonX = 0x4000;
    constexpr uint16_t kButtonY = 0x8000;

    // Pure mapping helper shared by the libnx adapter and host-side tests.
    // Each option swaps exactly one logical Xbox face-button pair.
    inline uint16_t ApplyFaceButtonSwaps(uint16_t buttons, bool swapAB,
                                         bool swapXY) noexcept
    {
        if (swapAB)
        {
            const bool a = (buttons & kButtonA) != 0;
            const bool b = (buttons & kButtonB) != 0;
            buttons &= static_cast<uint16_t>(~(kButtonA | kButtonB));
            if (a) buttons |= kButtonB;
            if (b) buttons |= kButtonA;
        }
        if (swapXY)
        {
            const bool x = (buttons & kButtonX) != 0;
            const bool y = (buttons & kButtonY) != 0;
            buttons &= static_cast<uint16_t>(~(kButtonX | kButtonY));
            if (x) buttons |= kButtonY;
            if (y) buttons |= kButtonX;
        }
        return buttons;
    }

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
