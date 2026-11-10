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
  The PES-owned triangle path now renders to an app-owned offscreen image
  and copies it to the acquired VI image. The last completed pipeline-source
  build is run [42792640688](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42792640688).
  A subsequent source audit corrected queue-family selection so the selected
  queue must support both graphics and VI presentation (commit
  `64ea95d015a6fbef1b28910b48a46a0c2f01e84e`); that revision still needs CI
  and physical validation. The upstream `nvk_tri.nro` is also built by the
  pinned NXVK workflow and is the independent offscreen/readback reference.
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

BO2-360-NX adalah sumber referensi arsitektur utama untuk port Switch ini, dipatok pada commit `dd189961e8876079087d6f0843af8013bd154277`. Urutan integrasi mengikuti implementasi nyata BO2: applet/window lifecycle (`sdk/src/ui/windowed_app_context_switch.cpp`) → VI surface dan swapchain (`sdk/src/ui/vulkan/vulkan_presenter.cpp`) → VulkanDevice dan dispatch fungsi device (`sdk/src/ui/vulkan/vulkan_device.cpp`) → output image/view → render pass/framebuffer → command recording, submit, dan present. Adaptasi harus mengikuti batas tanggung jawab dan lifecycle BO2; detail yang berbeda pada NVK/Horizon tetap diverifikasi, bukan diasumsikan.

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

Untuk tahap framebuffer dan render target, implementasi BO2 yang dijadikan pembanding langsung adalah `app/src/native/bo2zm_native_system.cpp` (`ClearOutput`) dan `app/src/native/render/bo2zm_native_render.cpp` (`CleanOutput`): keduanya memakai `VulkanDevice::functions()` yang diisi melalui `vkGetDeviceProcAddr`, render pass dengan format output internal BO2 (`VK_FORMAT_A2B10G10R10_UNORM_PACK32`), image view milik output context, framebuffer dengan extent output, command buffer, fence, dan queue keluarga graphics/compute. PES harus membandingkan seluruh kontrak image/view/render-pass/format/extent dan lifecycle terhadap jalur ini sebelum menyimpulkan masalah driver. `nvk_tri` hanya referensi sekunder untuk shader minimal; bukan dasar arsitektur. NRO upstream `nvk_tri` yang pernah dicoba pengguna dilaporkan crash saat dibuka, sehingga tidak boleh dianggap sebagai kontrol hardware yang berhasil.

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

The adaptation uses the exact pinned NXVK sample shader sources (`switch/smoke/shaders/tri.vert` and `solid.frag`) and generated headers (`tri_vert.h`, `solid_frag.h`). The triangle is generated from `gl_VertexIndex`, so no vertex buffer or descriptor set is required. The current PES-owned path renders into a 256x256 application-owned offscreen image and then copies that image into the acquired VI image before present. This differs from the upstream headless `nvk_tri` test, which copies the rendered pixels to a host-visible readback buffer and checks center/corner pixels. The upstream `nvk_tri.nro` is included in the same CI artifact as the PES-owned NRO and should be used as an independent control test.


### Follow-up: framebuffer path adapted from upstream NXVK

The latest Switch log stopped inside the first `vkCreateFramebuffer` call when the attachment was a WSI swapchain image view. The render pass itself returned successfully; graphics-pipeline creation and `vkCmdDraw` were never reached. The pinned upstream NXVK `nvk_tri.c` / `nvk_gfx.h` reference was inspected directly: it creates an application-owned optimal-tiled color image, binds memory, creates its image view, and attaches that view to the framebuffer. PES now follows that resource pattern and copies the completed offscreen render target into the acquired WSI image before presentation. Source commit: `3e2b77814f96a977c8137b6dc6123f65333ade2b`. This is an evidence-led adaptation, not yet a physical render pass result; CI and the next Switch log must confirm the new path.


### Follow-up: framebuffer isolation against the exact NXVK sample (10 November 2026)

The latest physical log shows that the PES-owned offscreen image, its memory binding, image view, and render pass all return successfully, but execution stops inside the first `vkCreateFramebuffer`. The WSI log separately says `zero-copy FAILED`; the CPU-copy fallback then successfully creates all three swapchain images and the swapchain, so this is not the same failure point. Inspection of the pinned NXVK `nvk_tri.c` and `nvk_gfx.h` shows the sample uses a 256x256 `VK_FORMAT_R8G8B8A8_UNORM` color target and one post-render dependency. Commit `635a92fb31147dbf97eab50c91ac7ef794c05866` now matches those parameters for the first controlled framebuffer test, while preserving 1280x720 VI presentation: the WSI image is cleared and the 256x256 triangle target is copied into its center. This is a reference-aligned isolation experiment, not a proven root-cause fix. CI run [42792640688](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42792640688) is in progress. The physical gate remains open until the log proves framebuffer creation, graphics pipeline creation, triangle draw, submit, and present.

### Follow-up: BO2 sebagai referensi utama (10 November 2026)

Audit pada commit BO2 yang dipatok menemukan jalur pembanding yang lebih dekat daripada sampel NXVK: `VulkanDevice::CreateIfSupported` memuat seluruh fungsi device melalui `vkGetDeviceProcAddr` ke `VulkanDevice::Functions`; presenter BO2 membuat VI surface, swapchain, image view, dan framebuffer melalui tabel fungsi tersebut; sedangkan `ClearOutput`/`CleanOutput` menggunakan output image milik `VulkanPresenter` dengan format internal `VK_FORMAT_A2B10G10R10_UNORM_PACK32`. PES saat ini membuat offscreen image dengan format yang dipilih dari surface, bukan format output internal BO2. Perbedaan kontrak format dan output-image lifecycle ini sekarang menjadi gap yang harus diuji secara terisolasi; belum ada bukti bahwa itulah akar macetnya framebuffer. PES sebelumnya mengambil `vkGetDeviceProcAddr` melalui antarmuka privat `vk_icdGetInstanceProcAddr`; commit `2c4f2c8fe5ece075d8267bb397223be298e45a99` membuang jalur ICD-private untuk `vkCreateFramebuffer`/`vkDestroyFramebuffer` dan mengambil keduanya melalui `vkGetDeviceProcAddr` loader, mengikuti kontrak dispatch BO2. Audit lanjutan menemukan pemanggilan ICD-private yang sama juga dipakai untuk `vkEnumeratePhysicalDevices` dengan `VkInstance` milik loader. Commit `c93bd42cbdc935f148729ff0f30408042c4a0aae` mengembalikan enumerasi ke `vkEnumeratePhysicalDevices` loader dan commit `11c032b31c3fdda4ebaa19b2b5d39f33fbe58bce` membuang deklarasi ICD-private yang tidak lagi diperlukan. Commit `3b4f447255f2c38496e0139230a33cded09fc33a` juga memvalidasi bahwa pointer create dan destroy framebuffer keduanya tersedia sebelum dipakai. Ini memperbaiki dua ketidaksesuaian dispatch yang ditemukan, tetapi penyebab crash NRO dan hang framebuffer belum dianggap terbukti sebelum uji perangkat/log.

Commit `64ea95d015a6fbef1b28910b48a46a0c2f01e84e` memperbaiki pemilihan queue PES agar keluarga queue yang sama mendukung `VK_QUEUE_GRAPHICS_BIT` dan VI present. Host test untuk perubahan tersebut lulus (workflow run `42797889775`), tetapi itu bukan validasi Switch fisik. NRO `nvk_tri` sebelumnya dilaporkan crash saat launch; status itu dicatat sebagai kegagalan pengujian, bukan keberhasilan. Framebuffer, graphics pipeline, draw, dan present segitiga PES masih belum terverifikasi pada perangkat.


### Follow-up: loader-dispatch diagnostic NRO build (10 November 2026)

The pinned NVK feasibility workflow completed successfully for commit `11c032b31c3fdda4ebaa19b2b5d39f33fbe58bce` (run [42802469915](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42802469915)). It uploaded the PES-owned `pes_loader_smoke.nro` in artifact `pes-nxvk-properties2-diagnostic-nro`. The NRO is 14,129,349 bytes; SHA-256: `1079f9215c14c4e6119b315cc54825c1d8e18448486e63d2b1e53c58dbdb150d`. This build includes loader-owned physical-device enumeration and loader `vkGetDeviceProcAddr` dispatch for framebuffer create/destroy. CI success establishes compilation and packaging only; this NRO has not yet been physically tested after these dispatch corrections. It is a diagnostic NRO, not a game build, and the framebuffer/triangle hardware gate remains open.


### Follow-up: diagnosis of device-dispatch null pointers (10 November 2026)

Physical log from the diagnostic NRO built at commit `11c032b31c3fdda4ebaa19b2b5d39f33fbe58bce` confirms that NVK initializes the Tegra X1, enumerates one physical device, creates the logical device, selects a graphics+present queue, and creates the 1280x720 VI swapchain. The CPU-copy WSI fallback also initializes all three images and command buffers successfully; the preceding `zero-copy FAILED` is the expected reason this fallback is selected, not the current stop condition. The PES smoke then reports `vkGetDeviceProcAddr(device, "vkCreateFramebuffer")` and `vkDestroyFramebuffer` as null and exits before calling framebuffer creation.

The BO2 source audit identified a more fundamental mismatch in the static Switch ICD entry point: at the pinned BO2 revision, `sdk/src/ui/vulkan/vulkan_instance.cpp` binds the exported public `vkGetInstanceProcAddr` symbol directly on Switch (lines 88-94), then resolves `vkGetDeviceProcAddr` from that instance dispatch and loads core device functions through it in `vulkan_device.cpp` (lines 802-818). PES instead initialized its custom loader from Mesa's ICD-private `vk_icdGetInstanceProcAddr`. Although enumeration and much of device creation appeared to work, that is not the BO2 dispatch contract and the resulting device lookup did not expose framebuffer functions. Commits `d332b8e7f4224817a4f381a61dad4ba48d6dba4a` and `d82bff937903a39384b3e2afc00ec12715697034` now switch the PES Switch entry point and linker retention flag to the same public `vkGetInstanceProcAddr` symbol used by BO2. This is a source-level correction directly supported by the reference comparison; hardware confirmation still requires the rebuilt NRO to show non-null device function pointers, successful framebuffer creation, pipeline creation, draw, submit, and present.
