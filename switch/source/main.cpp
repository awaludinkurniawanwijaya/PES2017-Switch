#include <switch.h>

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

    consoleInit(nullptr);

    printf("PES 2017 - Nintendo Switch port\n");
    printf("--------------------------------\n");
    printf("Native libnx bootstrap is running.\n");
    printf("The PES runtime is not connected yet.\n\n");
    printf("Press + to exit.\n");

    while (appletMainLoop()) {
        hidScanInput();
        const u64 down = hidKeysDown(CONTROLLER_P1_AUTO);
        if (down & KEY_PLUS) {
            break;
        }
        consoleUpdate(nullptr);
    }

    consoleExit(nullptr);
    return 0;
}
