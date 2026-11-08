# PES 2017 — Nintendo Switch native port

An experimental **native Nintendo Switch port** of *Pro Evolution Soccer 2017* (Xbox 360), built around ahead-of-time PowerPC recompilation and the Nintendo Switch homebrew SDK (**libnx**).

This is **not an Xbox 360 emulator** and it is not an Android port. The long-term goal is to translate the game's PowerPC executable to C++, connect the required Xbox 360 runtime services to Switch-native implementations, and render the game through Vulkan/NVK.

> **Development status — 8 November 2026:** work in progress; **not yet a playable game build**. The repository currently contains a working libnx bootstrap NRO, Switch-target compile checks, and successful CI builds of pinned NXVK Vulkan smoke-test NROs. These are infrastructure tests, not PES 2017 gameplay. The NXVK smoke NROs have not been represented as physically tested on a Switch by CI.

## Current progress

| Area | Current state |
|---|---|
| Target executable | PES 2017 Xbox 360 Europe, Title ID `0x4A3007D1`, XEX execution-info version `0x00000012` |
| XEX validation | XEX2 metadata and target-version validation implemented; generated PPC output is bound to the exact local XEX with a private SHA-256 manifest |
| PowerPC recompilation | Local recompilation completed; generated 1,413 `ppc_recomp.*.cpp` translation units |
| Recompiler analysis | Latest local report: 44 undecodable words and 2 missed jump-table cases remain for investigation |
| Kernel imports | 281 imports found: 212 implemented and 69 still stubbed |
| Switch platform | Initial libnx platform adapter, input/HID path, audio adapter and SD-card installation path are under development |
| Bootstrap NRO | Builds successfully in GitHub Actions; this is a controller/platform smoke app, not the game |
| Vulkan/NVK | Pinned NXVK libraries and Vulkan smoke NROs build successfully in CI; full game rendering is not yet validated |
| Full game NRO | Not yet built or confirmed to boot |

Generated PPC sources and the original game executable are private build inputs. They are intentionally **not committed or uploaded as public CI artifacts**.

## Target game copy

The current recompilation target is the user's own dump of:

- **Game:** *Pro Evolution Soccer 2017*
- **Platform / region:** Xbox 360, Europe
- **Title ID:** `0x4A3007D1`
- **XEX execution-info version:** `0x00000012`
- **Executable:** `default.xex`

The source reference for selecting the correct game copy is the [XenonRecomp PES 2017 guide](https://github.com/dzakyraf/pes2017-recomp#which-copy-of-the-game-you-need). European releases may differ in included language content; the executable must still match the exact target used to generate the PPC code.

You must supply your own legally obtained game files. **No game executable, CPK archive, extracted game asset, or generated game-specific PPC source is distributed in this repository.**

The build validates the XEX metadata and writes `ppc/XEX_TARGET` containing the target title ID, version and SHA-256. The CMake build checks this manifest against the local executable to prevent accidentally linking PPC output generated from a different XEX.

## Repository layout

| Path | Purpose |
|---|---|
| `runtime/` | Shared Xbox 360 recompilation runtime |
| `runtime/switch/` | Nintendo Switch platform and audio adapters |
| `switch/` | libnx bootstrap NRO, controller input and Switch build checks |
| `cmake/switch-toolchain.cmake` | devkitPro/devkitA64 CMake toolchain |
| `switch/smoke/` | NXVK and Vulkan smoke-test build scripts |
| `tools/verify_xex.py` | Validates XEX2 metadata and selected target |
| `third_party/XenonRecomp/` | Vendored XenonRecomp toolchain |
| `.github/workflows/` | Automated tests, bootstrap NRO build and NXVK feasibility workflow |

## Build and test

### 1. Requirements

For the Nintendo Switch target:

- Linux build host (GitHub Actions uses Ubuntu).
- [devkitPro](https://devkitpro.org/) with the devkitA64 toolchain and libnx.
- CMake, Ninja, Python 3 and Git.
- The pinned NXVK build/dependencies used by the project for the Vulkan path.
- Your own PES 2017 Xbox 360 Europe game dump for the full recompilation.

The bootstrap NRO can be built without the game executable or generated PPC sources. The full `pes17` target cannot: it requires the private XEX and matching generated PPC output.

### 2. Recompile the local game executable

Keep the extracted game files outside the public repository if preferred. In the project checkout, run the recompiler from the project root:

```sh
GAME="$HOME/storage/shared/PES2017-Extracted" \
XEX_VERSION=0x00000012 \
RECOMPILE_ONLY=1 \
JOBS=4 \
CMAKE_CC="$(command -v clang)" \
CMAKE_CXX="$(command -v clang++)" \
./build.sh
```

This validates the selected XEX and generates the PPC C++ output under `ppc/`. `RECOMPILE_ONLY=1` deliberately stops after PPC generation; **it does not build a Switch NRO**. Do not commit `pes/default.xex`, `pes/default.pe`, or generated `ppc/` output.

### 3. Build the libnx bootstrap

With devkitPro configured:

```sh
cd switch
make
```

The output is `switch/pes2017-switch-bootstrap.nro`. It initializes libnx, exercises C++ thread/synchronization support and displays controller input. It is only a bootstrap test application.

### 4. Full Switch runtime build

The full CMake target is configured with `PES17_SWITCH=ON` and the Switch toolchain. It additionally needs the generated PPC output, the matching private XEX manifest, and the NXVK development package:

```sh
cmake -S . -B build-switch -G Ninja \
  -DCMAKE_TOOLCHAIN_FILE=cmake/switch-toolchain.cmake \
  -DPES17_SWITCH=ON \
  -DCMAKE_BUILD_TYPE=Release
cmake --build build-switch --target pes17
```

This describes the intended full-runtime build path; a successful bootstrap or NXVK smoke build does **not** imply that this target is already complete or that the resulting game runs.

## Automated checks

GitHub Actions currently covers:

- Repository tests, including XEX target/version validation.
- Compilation and packaging of the libnx bootstrap NRO.
- Pinned NXVK build and Vulkan smoke applications, including triangle/offscreen and VI swapchain paths.

A green workflow means the steps in that workflow passed on its CI runner. It does not prove physical-console compatibility, complete GPU feature coverage, successful game startup, or playable performance. Physical Switch testing and full-game integration remain separate milestones.

See [Actions](../../actions) for current workflow runs and artifacts.

## Known work remaining

1. Implement and validate the remaining 69 Xbox 360 kernel imports, prioritizing functions reached during startup.
2. Investigate the remaining undecodable PPC words and missed jump-table dispatches.
3. Complete dynamic library loading and symbol resolution needed by the game.
4. Integrate the full recompilation target with the libnx platform and NXVK Vulkan backend.
5. Validate GPU resource handling, shaders, render targets, synchronization and presentation against actual game workloads.
6. Complete audio, controller mapping, SD-card game-file discovery/installation and save handling.
7. Test boot, menus and gameplay on physical Nintendo Switch hardware, then profile and fix compatibility/performance issues.

## Credits and licensing

- [XenonRecomp](https://github.com/hedge-dev/XenonRecomp) — Xbox 360 PowerPC analysis and recompilation toolchain.
- [NXVK](https://github.com/PalindromicBreadLoaf/nxvk) — Vulkan driver work used for the Switch feasibility experiments.
- [devkitPro / libnx](https://devkitpro.org/) — Nintendo Switch homebrew toolchain and platform APIs.
- [Xenia](https://xenia.jp/) — reference material for Xbox 360 behavior and compatibility research.

PES 2017 and its assets are the property of their respective rights holders. This is an independent, unofficial research and porting project and is not affiliated with or endorsed by Konami. See [LICENSE](LICENSE) for this repository's license and retain the licenses/notices of all third-party components.
