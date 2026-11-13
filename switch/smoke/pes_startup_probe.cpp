#include <switch.h>
#include <cstdio>

int main()
{
    consoleInit(nullptr);
    std::printf("PES Switch startup probe\\n");
    std::printf("stage 1: main entered\\n");
    std::printf("stage 2: libnx console initialized\\n");
    consoleUpdate(nullptr);

    padConfigureInput(1, HidNpadStyleSet_NpadStandard);
    PadState pad;
    padInitializeDefault(&pad);
    std::printf("Press + to exit.\\n");
    while (appletMainLoop()) {
        padUpdate(&pad);
        if (padGetButtonsDown(&pad) & HidNpadButton_Plus)
            break;
        consoleUpdate(nullptr);
    }
    consoleExit(nullptr);
    return 0;
}
