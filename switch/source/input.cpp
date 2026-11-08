#include "input.h"

#include <switch.h>

#include <algorithm>
#include <cstdint>

namespace
{
    PadState g_pad{};
    bool g_initialized = false;

    constexpr uint16_t kDpadUp = 0x0001;
    constexpr uint16_t kDpadDown = 0x0002;
    constexpr uint16_t kDpadLeft = 0x0004;
    constexpr uint16_t kDpadRight = 0x0008;
    constexpr uint16_t kStart = 0x0010;
    constexpr uint16_t kBack = 0x0020;
    constexpr uint16_t kLThumb = 0x0040;
    constexpr uint16_t kRThumb = 0x0080;
    constexpr uint16_t kLB = 0x0100;
    constexpr uint16_t kRB = 0x0200;
    constexpr uint16_t kA = 0x1000;
    constexpr uint16_t kB = 0x2000;
    constexpr uint16_t kX = 0x4000;
    constexpr uint16_t kY = 0x8000;

    int16_t ClampStick(s32 value)
    {
        return static_cast<int16_t>(std::clamp(value, -32768, 32767));
    }
}

bool switch_input::Initialize()
{
    padConfigureInput(1, HidNpadStyleSet_NpadStandard);
    padInitializeDefault(&g_pad);
    g_initialized = true;
    return true;
}

switch_input::State switch_input::Poll()
{
    State out{};
    if (!g_initialized) return out;

    padUpdate(&g_pad);
    const u64 raw = padGetButtons(&g_pad);
    const HidAnalogStickState left = padGetStickPos(&g_pad, 0);
    const HidAnalogStickState right = padGetStickPos(&g_pad, 1);

    // A valid Npad style is reported through the active input-source flags.
    out.connected = padIsHandheld(&g_pad) || padIsNpadActive(&g_pad, HidNpadIdType_No1);
    if (!out.connected) return out;

    // Translate Nintendo's physical face layout to Xbox's logical layout:
    // bottom B -> A, right A -> B, left Y -> X, top X -> Y.
    if (raw & HidNpadButton_B) out.buttons |= kA;
    if (raw & HidNpadButton_A) out.buttons |= kB;
    if (raw & HidNpadButton_Y) out.buttons |= kX;
    if (raw & HidNpadButton_X) out.buttons |= kY;
    if (raw & HidNpadButton_Up) out.buttons |= kDpadUp;
    if (raw & HidNpadButton_Down) out.buttons |= kDpadDown;
    if (raw & HidNpadButton_Left) out.buttons |= kDpadLeft;
    if (raw & HidNpadButton_Right) out.buttons |= kDpadRight;
    if (raw & HidNpadButton_Plus) out.buttons |= kStart;
    if (raw & HidNpadButton_Minus) out.buttons |= kBack;
    if (raw & HidNpadButton_StickL) out.buttons |= kLThumb;
    if (raw & HidNpadButton_StickR) out.buttons |= kRThumb;
    if (raw & HidNpadButton_L) out.buttons |= kLB;
    if (raw & HidNpadButton_R) out.buttons |= kRB;

    out.left_x = ClampStick(left.x);
    out.left_y = ClampStick(left.y);
    out.right_x = ClampStick(right.x);
    out.right_y = ClampStick(right.y);
    if (raw & HidNpadButton_ZL) out.left_trigger = 255;
    if (raw & HidNpadButton_ZR) out.right_trigger = 255;
    return out;
}
