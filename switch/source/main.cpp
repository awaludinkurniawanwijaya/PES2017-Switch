#include <switch.h>
#include <cstdio>

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

    consoleInit(nullptr);

    PadState pad{};
    padConfigureInput(1, HidNpadStyleSet_NpadStandard);
    padInitializeDefault(&pad);

    std::printf("PES 2017 - Nintendo Switch port\n");
    std::printf("--------------------------------\n");
    std::printf("Native libnx bootstrap is running.\n");
    std::printf("The PES runtime is not connected yet.\n\n");
    std::printf("Press + to exit.\n");

    while (appletMainLoop()) {
        padUpdate(&pad);
        const u64 down = padGetButtonsDown(&pad);
        if (down & HidNpadButton_Plus) {
            break;
        }
        consoleUpdate(nullptr);
    }

    consoleExit(nullptr);
    return 0;
}
