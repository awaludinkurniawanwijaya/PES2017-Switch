# Nintendo Switch bring-up

## Current status

This repository is **not yet a playable PES 2017 Switch port**. The current
`switch/Makefile` builds a diagnostic bootstrap NRO. It does not yet link the
recompiled PES 2017 guest runtime, generated PPC code, Xenos renderer, or the
complete game-data launch path.

### Implemented platform groundwork

- libnx platform adapter, SDMC mount, process paths, and managed thread APIs;
- main-thread `appletMainLoop()` pumping in the bootstrap and primary XInput polling path, so Horizon lifecycle/exit events have an integration point;
- Joy-Con / Pro Controller button and stick polling, with a partial XInput
  bridge (digital trigger mapping only; no vibration);
- libnx AudOut PCM sink and Switch APU output path (not yet hardware validated);
- Switch install-path selection and compile-time checks for selected runtime
  units;
- Switch-specific crash/hang-monitor and stutter-watcher paths, using the
  platform thread API rather than POSIX signal/pthread code;
- Switch player-start argument handling accepts both `argc == 0` and `argc == 1` as a normal Homebrew Menu launch; explicit image arguments remain development launches. The shared contract is host-tested and compile-checked with the Switch toolchain.
- The full runtime now defaults its diagnostic log to `sdmc:/switch/PES2017/pes2017-switch.log` when `PES17_LOG_FILE` is not set. This source change still needs a full runtime build and hardware confirmation.
- a bootstrap probe that links and exercises the managed joinable-thread API,
  `std::mutex`, `std::condition_variable`, `std::shared_mutex`, and
  `std::call_once`.

### Vulkan / NVK progress

- The project Vulkan loader has a Switch static-ICD path that resolves
  `vk_icdGetInstanceProcAddr` from the linked NXVK archive instead of trying
  to open `libvulkan.so`.
- The project's Vulkan presenter has a Switch VI path using
  `VK_KHR_surface`, `VK_NN_vi_surface`, and `nwindowGetDefault()`.
- Required VI surface and swapchain dispatch functions, transfer-destination
  image support, and composite-alpha modes are checked before use.
- NXVK is an experimental, non-conformant NVK port. The runtime explicitly
  opts in with `NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=1`; compatibility and
  stability are not guaranteed.
- The pinned NXVK workflow has successfully built the NVK archive, packaged
  the portlib, syntax-compiled the project's loader and presenter, and built
  three diagnostic NROs (`nvk_tri.nro`, `nvk_vi_swapchain.nro`, and
  `pes_loader_smoke.nro`). This is CI build/link evidence only; no physical
  Switch GPU execution has been confirmed.
- The separate libnx bootstrap workflow has successfully built
  `pes2017-switch-bootstrap.nro` (about 283 KiB). It is a controller/thread
  diagnostic app, not the PES game.

Host tests passed (11/11), and the bootstrap NRO was packaged successfully (about 759 KiB before compression).
The runtime XInput translation unit still needs generated PPC headers for its
full syntax check. These results do **not** prove that NVK presents to the
screen or that PES 2017 can boot.

## Bootstrap build

Install devkitPro with devkitA64, libnx, and switch-tools, then run:

```sh
cd switch
make
```

The output is `pes2017-switch-bootstrap.nro`. Copy it to
`sdmc:/switch/pes2017-switch-bootstrap.nro` and launch it from the Homebrew
Menu. It displays controller state and a C++ thread/synchronization probe.
Press **+** to exit.

The bootstrap is only a diagnostic app. It does not read the game files or
start PES 2017.

## Controller face-button options

The full Switch runtime reads optional controller settings from
`sdmc:/switch/PES2017/.env`. The two face-button swaps are independent:

```ini
# Swap the logical Xbox A and B buttons (0 = off, 1 = on)
PES17_INPUT_SWAP_A_B=0

# Swap the logical Xbox X and Y buttons (0 = off, 1 = on)
PES17_INPUT_SWAP_X_Y=0
```

Set either value to `1` to swap only that pair. For example, setting
`PES17_INPUT_SWAP_A_B=1` while leaving `PES17_INPUT_SWAP_X_Y=0` changes
only A/B. Both default to off when omitted. These are runtime `.env`
settings; they do not belong in `config/PES.toml`, which configures
XenonRecomp rather than controller behavior.


## SD-card location reserved for the game runtime

The intended layout is:

```text
sdmc:/switch/PES2017/
  pes2017-switch-bootstrap.nro
  game/
    default.xex
    *.cpk
  saves/
```

The runtime install code looks for a build-matched `default.xex` under
`game/`; the XEX is checked against the SHA-256 embedded in that build.
CPK archives and other legally obtained game data belong beside it.

Do not commit game executables, disc images, CPK archives, generated PPC
output, or other proprietary game data to this repository. The current
bootstrap does not load or launch these files, and the desktop installer
(`pes17-launcher`) is not available on Switch.

## Native runtime CMake target

A native `PES17_SWITCH` target and devkitA64 toolchain are now present:

```sh
cmake -S . -B build-switch \
  -DCMAKE_TOOLCHAIN_FILE=cmake/switch-toolchain.cmake \
  -DPES17_SWITCH=ON
cmake --build build-switch --target pes17
```

The toolchain defaults to an optimized Release build and packages
`build-switch/pes17.nro`. This full target requires:

- devkitPro devkitA64, libnx, and switch-tools;
- the pinned NXVK portlib installed so `pkg-config nxvk` resolves;
- the user's legally obtained `pes/default.xex` and the title-specific
  generated PPC sources in `ppc/`.

The CI CMake gate configures this target against the staged NXVK portlib using
temporary empty PPC translation units. It validates the build-system wiring
only; it does not compile or link the game runtime without the real generated
PPC output.

## Remaining gates, in dependency order

1. **CI feasibility build — passed.** The NVK archive/portlib, project
   loader/presenter compile checks, and three diagnostic NROs are now produced
   successfully by the pinned workflow.
2. **Validate NXVK on a physical Switch.** Run the triangle and VI swapchain
   tests, then inspect logs. CI compilation alone cannot prove GPU execution
   or display presentation.
3. **Link a PES-specific presenter test.** Exercise the project's static ICD
   loader, VI surface, swapchain, and frame-present path together in an NRO.
4. **Create a complete Switch game target.** Link platform, GPU, APU, kernel,
   install, and generated PPC sources with the correct libnx/NXVK dependencies.
   The current bootstrap target is not this executable.
5. **Generate title-specific PPC output.** This requires the user's legally
   obtained PES 2017 executable and matching build metadata. Those files and
   generated output must remain outside the public repository.
6. **Complete game-data import and verification.** The Switch build must accept
   local game data, verify the executable hash, and locate required CPK files
   without embedding or distributing copyrighted assets.
7. **Run full hardware validation.** Verify boot, menus, controller behavior,
   audio, match rendering, save paths, suspend/resume, memory pressure, and a
   sustained full-match session on a physical Switch.

## CI and hardware distinction

- `.github/workflows/main.yml`: host build and automated tests.
- `.github/workflows/switch-nro.yml`: libnx bootstrap compile/package check,
  including the Switch crash/stutter syntax gates and C++ sync link probe.
- `.github/workflows/switch-nvk-spike.yml`: pinned NVK archive build, project
  loader/presenter compile checks, and Vulkan smoke NRO feasibility build.

A green host test or NRO compilation is not a hardware test. No claim of
playable status, working game rendering, audio quality, or frame rate should
be made until the corresponding test has been run on a physical Switch.
