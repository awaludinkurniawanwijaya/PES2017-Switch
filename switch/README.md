# Nintendo Switch bootstrap

This directory is the first native Nintendo Switch (libnx) target for the project.

IMPORTANT: this currently builds a small .nro homebrew bootstrap that initializes the console and reads controller input. It does not run PES 2017, load Xbox game data, or connect the existing recompiled runtime. The Android/desktop runtime still needs a dedicated Switch platform layer and graphics/audio integration.

## Local build

Install devkitPro with the Nintendo Switch development environment (devkitA64, libnx, and switch-tools), then run:

    cd switch
    make

The output is pes2017-switch-bootstrap.nro.

## Controls

Press + to exit.

## Next integration work

1. Add a Switch platform abstraction for lifecycle, filesystem, timing, logging, and threads.
2. Port input to libnx HID and audio to audren.
3. Decide and implement a graphics backend. The current runtime Vulkan path cannot be assumed to work on Switch as-is.
4. Adapt the runtime build to AArch64/devkitA64 and resolve unsupported POSIX/Android/desktop dependencies.
5. Load legally obtained game data from the SD card; do not commit proprietary game files.


## CI
The GitHub Actions workflow `.github/workflows/switch-nro.yml` builds this bootstrap on pushes to this branch and uploads the `.nro` as an artifact.
