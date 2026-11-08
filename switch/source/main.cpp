#include <switch.h>
#include <cstdio>

#include "input.h"

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

    consoleInit(nullptr);
    switch_input::Initialize();

    std::printf("PES 2017 - Nintendo Switch port\n");
    std::printf("--------------------------------\n");
    std::printf("Native libnx bootstrap is running.\n");
    std::printf("Joy-Con / Pro Controller input test\n");
    std::printf("Buttons: A/B/X/Y, D-pad, L/R, ZL/ZR\n");
    std::printf("Sticks: left and right analog\n");
    std::printf("Press + to exit.\n\n");

    while (appletMainLoop()) {
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

    consoleExit(nullptr);
    return 0;
}
