# Nintendo Switch bring-up

## Current status

This repository is **not yet a playable PES 2017 Switch port**. The current
`switch/Makefile` builds a bootstrap NRO. It does not yet link the
recompiled PES 2017 guest runtime, generated PPC code, Xenos renderer, or
complete game launch path.

The platform groundwork now includes:

- libnx platform initialization, SDMC mount, thread primitives, and bootstrap
  diagnostics;
- Joy-Con / Pro Controller button and stick polling, with an XInput bridge
  under development (digital trigger mapping only; no vibration);
- a libnx AudOut PCM sink and a Switch path in the APU, **not yet validated on
  physical hardware**;
- Switch install-path selection and syntax-only CI checks;
- a dedicated NXVK feasibility workflow to build real Vulkan smoke NROs and
  validate the GM20B Vulkan/VI presentation path.

The project test workflow passes on the current development commit. That is
not proof that the Switch NRO runs, that NVK presents on hardware, or that PES
2017 can boot. The NVK smoke build is a separate gate and must produce its
artifacts before a loader adapter or game renderer integration is attempted.

## Local build

Install devkitPro with devkitA64, libnx, and switch-tools, then run:

```sh
cd switch
make
```

The output is `pes2017-switch-bootstrap.nro`. Press **+** to exit the
bootstrap controller diagnostic screen.

## SD-card location reserved for the runtime

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

1. **Finish the NVK smoke build.** CI must produce `nvk_tri.nro` and
   `nvk_vi_swapchain.nro` from the pinned NXVK source and retain build/license
   metadata.
2. **Validate NVK on a physical Switch.** Run the off-screen triangle and VI
   swapchain presentation smoke tests; inspect the generated logs. CI
   compilation alone cannot prove GPU execution or display presentation.
3. **Add a loaderless Vulkan adapter.** The PES runtime expects
   `vkGetInstanceProcAddr` and `vkGetDeviceProcAddr`; NXVK's smoke harness
   enters through `vk_icdGetInstanceProcAddr`. Implement and compile a
   project-owned adapter only after the pinned driver ABI and smoke artifacts
   are verified.
4. **Build a PES-specific Vulkan present/clear test NRO.** Prove the actual
   runtime loader, libnx window/surface lifecycle, swapchain, and present path
   together before integrating renderer resources.
5. **Create a complete Switch game target.** Link the platform, GPU, APU,
   kernel, install, and generated PPC sources with the correct libnx/NXVK
   dependencies. The present bootstrap target is not this executable.
6. **Generate title-specific PPC output.** This requires the user's legally
   obtained PES 2017 executable and matching build metadata. Those files and
   generated output must remain outside the public repository. A clean GitHub
   checkout cannot generate the game-specific recompilation by itself.
7. **Complete the game-data import/verification path.** The Switch build must
   accept the user's local game data, verify its executable hash, and locate
   the required CPK files without embedding or distributing copyrighted data.
8. **Run hardware validation.** Verify boot, menus, controller behavior,
   audio, match rendering, save paths, suspend/resume, memory pressure, and a
   sustained full-match session on a physical Switch.

## CI and hardware distinction

- `.github/workflows/main.yml`: host build and automated tests.
- `.github/workflows/switch-nro.yml`: bootstrap NRO compile/package check.
- `.github/workflows/switch-nvk-spike.yml`: pinned NVK archive and Vulkan
  smoke NRO feasibility build.

A green host test or NRO compilation is not a hardware test. No claim of
playable status, working game rendering, audio quality, or frame rate should
be made until the corresponding test has been run on a physical Switch.
