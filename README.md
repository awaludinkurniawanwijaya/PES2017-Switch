# PES 2017 for Nintendo Switch

An experimental Nintendo Switch porting project for **Pro Evolution Soccer 2017 (PES 2017)**.

> **Project status: work in progress.** The full PES 2017 NRO is currently being compiled. A complete game NRO has not yet been produced, launched, or verified as playable. The separate Vulkan probe is only a build-environment test and is not the game.

## Current progress

| Area | Status |
|---|---|
| PPC game-code source preparation | Generated source set available |
| PPC source files | 1,418 files |
| Runtime/kernel import handling | 212 implemented; 69 currently stubbed |
| CI source checkout and staging | Passing |
| Pinned BO2 Switch build kit download and verification | Passing |
| Vulkan/Mesa probe build and link | Passing — build-environment smoke test only |
| Full PES 2017 compilation and NRO packaging | In progress |
| Full PES 2017 NRO artifact | Not yet available |
| Launch and runtime validation | Not yet started |
| Gameplay validation | Not yet started |

Progress figures describe the current development state and may change as implementation continues.

## Latest build status

The full build is automated with GitHub Actions:

- [View the GitHub Actions workflow](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions)
- [View the current build run](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42969104798)

The latest recorded run successfully completed source checkout, source validation/staging, and BO2 Switch build-kit verification. The full compilation and packaging step is still running. The NRO upload step will only run after that step succeeds.

A separate Vulkan/Mesa probe NRO has built successfully. It verifies part of the Switch build environment and graphics toolchain; it does **not** contain PES 2017 code or game assets and must not be treated as a playable build.

## Build environment and tools

The project currently uses:

- **Target platform:** Nintendo Switch
- **Build automation:** [GitHub Actions](https://github.com/features/actions)
- **PowerPC recompilation tool:** [XenonRecomp](https://github.com/hedge-dev/XenonRecomp)
- **Switch build environment:** pinned BO2 Switch build kit
- **Compiler/toolchain:** [devkitPro](https://devkitpro.org/) and [devkitA64](https://github.com/devkitPro/pacman-packages)
- **Graphics components:** [Vulkan](https://www.vulkan.org/) and [Mesa](https://www.mesa3d.org/) components provided by the configured build environment

Build scripts and workflow configuration are maintained in this repository. The full build also requires the prepared PPC source tree to be made available to the workflow. Game assets are handled separately and are not included in this repository.

## Executable information

The Xbox 360 executable used as the input for this project has the following identifying properties:

| Property | Value |
|---|---|
| Executable | `default.xex` |
| Title ID | `0x4A3007D1` |
| XEX version | `0x00000012` |
| File size | `32,493,568 bytes` |
| SHA-256 | `b914ec9a1abb3a9b42a64255b6aa8ff27312da126f7c18f8c880106b832779e6` |

These values identify the executable input; the executable itself is not distributed in this repository.

## Build process

The supported full build currently runs through GitHub Actions. See the [Actions page](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions).

A build is considered successful only when all of the following are complete:

1. The full PPC source target compiles successfully.
2. The Switch application links successfully.
3. The application is packaged as an NRO.
4. The workflow uploads the full PES 2017 NRO artifact.

A successful build confirms compilation and packaging only. It does not prove that the game starts, that assets are integrated, or that gameplay works.

## Next validation stages

After a full NRO is produced, the next work is expected to proceed in stages:

1. **NRO validation** — verify that the packaged file exists and is structurally valid.
2. **Game-data and asset integration** — ensure required game data such as textures, models, stadium data, audio, and other resources can be located and read by the application. These resources are not automatically included just because the NRO compiled.
3. **Launch testing** — run the application in a suitable emulator or on Nintendo Switch hardware and check for startup failures.
4. **Menu and rendering tests** — check the title screen, menus, models, textures, stadiums, and graphics output.
5. **Gameplay tests** — test team selection, match startup, player controls, audio, and a complete match.
6. **Stability and performance work** — investigate crashes, missing resources, graphics issues, memory use, frame rate, and compatibility.

These are planned validation stages, not tests that have already passed.

## Legal notice

This is an independent, experimental project and is not affiliated with, endorsed by, or sponsored by Konami. PES 2017 and its game content remain the property of their respective rights holders. This repository does not provide the commercial game or its copyrighted assets. Use only game data that you are legally entitled to use.

Third-party build tools and libraries remain subject to their own licenses and terms. Review and comply with those terms when building or redistributing binaries.

## Contributing, tools, and acknowledgements

The project is experimental. Contributions, reproducible bug reports, build fixes, compatibility reports, and testing feedback are welcome through [GitHub Issues](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/issues).

The following tools, libraries, and driver projects are relevant to the development and graphics-driver support:

### Build and development tools

- [XenonRecomp](https://github.com/hedge-dev/XenonRecomp) — PowerPC recompilation tool.
- [BO2 Switch build kit](https://github.com/AlvaroEPena/bo2-360-nx) — Switch build environment reference used for the configured build kit.
- [devkitPro](https://devkitpro.org/) / [devkitA64](https://github.com/devkitPro/pacman-packages) — Nintendo Switch homebrew toolchain.
- [Vulkan](https://www.vulkan.org/) — graphics API.
- [Mesa](https://www.mesa3d.org/) — open-source graphics driver project and upstream home of Turnip.
- [GitHub Actions](https://github.com/features/actions) — automated build and validation workflows.

### Nintendo Switch Vulkan driver source

The Switch graphics driver used by the BO2 Switch build kit is **Mesa NVK (Nouveau Vulkan)** for the NVIDIA Tegra X1 GM20B GPU under Horizon OS. It is not the Android Adreno Turnip driver.

- [danfromtico/mesa-switch](https://github.com/danfromtico/mesa-switch) — upstream Mesa port for Nintendo Switch; the BO2 build kit pins base commit `1a8c1a66d6f`.
- [BO2 Switch build kit](https://github.com/AlvaroEPena/bo2-360-nx) — builds the Mesa/NVK driver using `tools/build_mesa.sh` and applies its [`patches/mesa-bo2zm.patch`](https://github.com/AlvaroEPena/bo2-360-nx/blob/main/patches/mesa-bo2zm.patch).
- The build produces the static `libvulkan.a` library, which is linked into the Switch NRO through the kit's Switch CMake configuration. It is therefore bundled in the NRO, not installed as a separate Android driver package on the SD card.

The three Turnip package feeds previously listed here (K11MCH1, StevenMXZ, and MrPurple666), together with libadrenotools, belong to the Android port's optional Adreno-driver feature. They are not the Switch NRO's Vulkan driver source.
 
### Other libraries

- [SDL](https://github.com/libsdl-org/SDL) — cross-platform input and windowing library.
- [Dear ImGui](https://github.com/ocornut/imgui) — immediate-mode user interface library.
- [FFmpeg](https://ffmpeg.org/) — multimedia framework; the project includes an XMA-focused component.

When reporting a problem, include the workflow run or build log, the device or emulator environment, and the steps needed to reproduce it. Do not attach copyrighted game files or assets to issue reports.
