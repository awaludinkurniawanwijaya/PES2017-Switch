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
  A PES-owned graphics-pipeline path now adapts the pinned upstream
  `nvk_tri` shaders and `vkCmdDraw` pattern to the VI swapchain. CI build passed
  on commit `1c4f8e21`; the resulting NRO contains the pipeline and draw paths.
  Physical visibility validation is the next gate.
- The separate libnx bootstrap workflow has successfully built
  `pes2017-switch-bootstrap.nro` (about 283 KiB). It is a controller/thread
  diagnostic app, not the PES game.

Host tests passed (11/11), and the bootstrap NRO was packaged successfully (about 759 KiB before compression).
The runtime XInput translation unit still needs generated PPC headers for its
full syntax check. The physical VI/GPU-clear smoke test proves that the PES-owned loader can
acquire, submit, present, and visibly change swapchain pixels. The triangle pipeline NRO now builds successfully in CI, but is not yet
hardware-validated; neither the PES renderer nor PES 2017 boot has been proven.

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

Urutan ini mengikuti pola presenter Vulkan pada pembanding BO2-360-NX: window/VI surface → device/queue → swapchain → acquire/synchronization → resource dan pipeline → draw → present. Pola tersebut dipakai sebagai panduan lifecycle, bukan menyalin renderer BO2 secara langsung.

1. **Visible graphics-pipeline draw — menunggu uji fisik.** Source PES-owned sudah mengadaptasi shader `nvk_tri`, image view, render pass/framebuffer, graphics pipeline, dan `vkCmdDraw(3, 1, 0, 0)`. CI build lulus pada commit `1c4f8e21`; NRO berhasil dipaketkan dan string diagnostik pipeline/draw terverifikasi di binary. Gate baru lulus jika segitiga RGB benar-benar terlihat pada Switch fisik dan log membuktikan pipeline, draw, submit, serta present sukses.
2. **Resource grafis dasar.** Setelah primitive tampil, uji vertex/index buffer, upload buffer, texture/image, sampler, descriptor, depth/stencil, render target, layout transition, dan lifetime resource satu per satu. Jangan gabungkan semua resource dalam satu percobaan pertama.
3. **Shader dan semantik Xenos.** Validasi Xenos-to-SPIR-V memakai shader PES representatif; periksa konstanta, texture sampling, blending, depth, format dan render-target behavior terhadap output acuan.
4. **Integrasi renderer PES.** Hubungkan resource, shader, command recording, synchronization dan present ke backend Vulkan. Kriteria bukan sekadar pipeline berhasil dibuat, melainkan geometri/texture PES-owned benar-benar dirender.
5. **Switch guest-memory backend.** Validasi reservation 4 GiB, shared bank 512 MiB, tiga alias, page commit, izin SVC dan mapping fixed-window pada perangkat. Probe 4 KiB hanya membuktikan primitive kecil, bukan keseluruhan layout.
6. **Runtime compatibility dan loader.** Audit kernel import berdasarkan jalur startup; selesaikan guest memory/thread, event/synchronization, dynamic library/symbol loading, filesystem dan startup path. Catatan terakhir menyebut 69 import masih stub dan harus diprioritaskan berdasarkan trace startup.
7. **Audio, input, dan storage.** Integrasikan XMA/audio, controller, save dan data persisten; validasi sebagai satu alur runtime game.
8. **Full-game target dan PPC.** Gabungkan platform, GPU, APU, kernel, loader, dan PPC hasil recompilation yang cocok. PPC/game data tetap berasal dari salinan legal milik pengguna dan tidak masuk repo publik.
9. **Game-data import dan launch.** Verifikasi hash executable, penemuan CPK, struktur SD dan jalur launch pada NRO full-game; bootstrap bukan target ini.
10. **Validasi gameplay fisik.** Uji boot, menu, pertandingan, rendering, audio, kontrol, save, suspend/resume, tekanan memori dan sesi panjang pada Switch.

### Referensi alur renderer yang diterapkan

Pemeriksaan terhadap `sdk/src/ui/vulkan/vulkan_presenter.cpp` pada BO2-360-NX menunjukkan pemisahan eksplisit antara VI window/surface, swapchain, acquire, submit dan present. Pembanding juga menyediakan opsi CPU-wait acquire fence (`present_wait_acquire_on_cpu`) untuk menghindari submit yang tertahan oleh acquire semaphore pada kondisi tertentu. Opsi ini hanya akan diaktifkan bila log menunjukkan stall yang sesuai; bukan default tanpa bukti.

Untuk tahap pipeline, proyek memakai pola upstream NXVK `nvk_tri`: shader vertex/fragment, pipeline tanpa vertex buffer, dan vertex dibangkitkan dari `gl_VertexIndex`. Ini sengaja menjadi vertical slice minimal sebelum texture dan resource PES. BO2-360-NX dan NXVK adalah referensi pola implementasi, bukan jaminan kompatibilitas langsung dengan shader atau resource Xenos.

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

The adaptation uses the exact pinned NXVK sample shader sources (`switch/smoke/shaders/tri.vert` and `solid.frag`) and generated headers (`tri_vert.h`, `solid_frag.h`) from the same NXVK revision already used by CI. The triangle is generated from `gl_VertexIndex`, so no vertex buffer or descriptor set is required. The render pass targets the acquired VI swapchain images directly and transitions them to `PRESENT_SRC_KHR`. CI compilation passed on 10 November 2026 (run [42783311807](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42783311807)); the NRO binary includes the pipeline and `vkCmdDraw` diagnostic paths. Physical-console display confirmation remains pending.
