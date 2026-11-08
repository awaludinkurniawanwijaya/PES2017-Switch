# Nintendo Switch bring-up

## Current status

This repository is **not yet a playable PES 2017 Switch port**. The current
`switch/Makefile` builds a diagnostic bootstrap NRO. It does not yet link the
recompiled PES 2017 guest runtime, generated PPC code, Xenos renderer, or the
complete game-data launch path.

### Implemented platform groundwork

- libnx platform adapter, SDMC mount, process paths, and managed thread APIs;
- Joy-Con / Pro Controller button and stick polling, with a partial XInput
  bridge (digital trigger mapping only; no vibration);
- libnx AudOut PCM sink and Switch APU output path (not yet hardware validated);
- Switch install-path selection and compile-time checks for selected runtime
  units;
- Switch-specific crash/hang-monitor and stutter-watcher paths, using the
  platform thread API rather than POSIX signal/pthread code;
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
- The pinned NXVK workflow is building the NVK archive and diagnostic NROs,
  and syntax-compiling the project's loader and presenter against the pinned
  headers. The latest run is still in progress.

Host tests and the bootstrap NRO build have passed. Those results do **not**
prove that the Vulkan presenter runs on a Switch, that NVK presents to the
screen, or that PES 2017 can boot.

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

## Remaining gates, in dependency order

1. **Complete the NXVK feasibility workflow.** It must produce the NVK archive,
   the project's loader/presenter compile checks, and the `nvk_tri.nro` and
   `nvk_vi_swapchain.nro` diagnostic apps.
2. **Validate NVK on a physical Switch.** Run the triangle and VI swapchain
   tests, then inspect the logs. CI compilation alone cannot prove GPU
   execution or display presentation.
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
