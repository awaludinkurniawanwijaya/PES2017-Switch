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
- A first Horizon guest-memory backend (4 GiB virtual reservation, one 512 MiB
  shared bank mapped into three guest windows, explicit page commits). Its
  devkitA64 syntax gate passes; shared-memory SVC permissions and full-size
  address mapping remain unverified on hardware;
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
- The pinned NXVK workflow has built the NVK archive, packaged the portlib,
  syntax-compiled the project's loader and presenter, and built three
  diagnostic NROs (`nvk_tri.nro`, `nvk_vi_swapchain.nro`, and
  `pes_loader_smoke.nro`). A physical Switch run of the PES-owned loader then
  completed VI swapchain creation, 120/120 acquire-submit-present cycles, and
  a three-phase `vkCmdClearColorImage` workload on NVK / Tegra X1. The user
  confirmed the changing color background was visible on the physical display.
  A new PES-owned graphics-pipeline path now adapts the pinned upstream
  `nvk_tri` shaders and `vkCmdDraw` pattern to the VI swapchain; CI and physical
  visibility validation are pending.
- The separate libnx bootstrap workflow has successfully built
  `pes2017-switch-bootstrap.nro` (about 283 KiB). It is a controller/thread
  diagnostic app, not the PES game.

Host tests passed (11/11), and the bootstrap NRO was packaged successfully (about 759 KiB before compression).
The runtime XInput translation unit still needs generated PPC headers for its
full syntax check. The physical VI/GPU-clear smoke test proves that the PES-owned loader can
acquire, submit, present, and visibly change swapchain pixels. The newly
committed triangle pipeline is not yet hardware-validated; neither the PES
renderer nor PES 2017 boot has been proven.

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

The Switch runtime reads the two independent controller options from
`sdmc:/switch/PES2017/config/PES.toml`, under `[input]`:

```toml
[input]
swap_a_b = false
swap_x_y = false
```

Set either value to `true` to swap only that pair. Both default to `false`
when missing or invalid. The physical Nintendo-to-Xbox layout translation
happens first, then these options independently swap the logical Xbox A/B
and X/Y pairs.


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
2. **PES-owned VI swapchain on physical Switch — passed.** The latest log
   confirms NVK Tegra X1 initialization, VI surface/swapchain creation, image
   enumeration, and 120/120 acquire-submit-present cycles.
3. **Visible GPU transfer clear on physical Switch — passed.** NRO #147
   recorded `vkCmdClearColorImage` in three 40-frame color phases; all 120
   frames submitted, presented, and passed `vkDeviceWaitIdle`. The user
   confirmed that the changing color background was visible on the display.
4. **Graphics pipeline and real draw on the PES-owned VI path — implementation committed, CI pending.** The PES smoke source now stages the upstream `nvk_tri` vertex/fragment SPIR-V headers, creates swapchain image views, render pass/framebuffers and a minimal graphics pipeline, then issues `vkCmdDraw(3, 1, 0, 0)`. The build must pass first; then a physical Switch run must confirm the RGB triangle is visible. This remains a graphics smoke test, not PES game-scene rendering.
5. **Validate the Switch guest-memory backend.** The 4 GiB reservation, 512 MiB shared bank, three aliases, and explicit page-commit path now compile for devkitA64. The bootstrap probe only tests a 4 KiB shared-memory primitive; confirm SVC access, full-size allocation, and the actual fixed-window mappings on hardware.
6. **Create a complete Switch game target.** Link platform, GPU, APU, kernel,
   install, and generated PPC sources with the correct libnx/NXVK dependencies.
   The current bootstrap target is not this executable.
7. **Generate title-specific PPC output.** This requires the user's legally
   obtained PES 2017 executable and matching build metadata. Those files and
   generated output must remain outside the public repository.
8. **Complete game-data import and verification.** The Switch build must accept
   local game data, verify the executable hash, and locate required CPK files
   without embedding or distributing copyrighted assets.
9. **Run full hardware validation.** Verify boot, menus, controller behavior,
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


### Graphics pipeline implementation note (10 November 2026)

The adaptation uses the exact pinned NXVK sample shader sources (`switch/smoke/shaders/tri.vert` and `solid.frag`) and generated headers (`tri_vert.h`, `solid_frag.h`) from the same NXVK revision already used by CI. The triangle is generated from `gl_VertexIndex`, so no vertex buffer or descriptor set is required. The render pass targets the acquired VI swapchain images directly and transitions them to `PRESENT_SRC_KHR`. CI compilation and physical-console display confirmation remain pending.
