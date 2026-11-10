# Vulkan native migration — BO2-360-NX reference audit

Date: 2026-11-10

## Decision

NXVK development is stopped. Preserve all NXVK source references, build scripts, smoke tests, workflow and historical artifacts. Do not delete them. The active graphics direction is a BO2-360-NX-style Vulkan application/provider/presenter architecture.

Important distinction: this audit does **not** claim that the current PES build is already independent of NXVK. At the previous checkpoint, `CMakeLists.txt` used `pkg_check_modules(SWITCH_VULKAN_DRIVER REQUIRED nxvk)`. The active CMake path has now been changed to require the BO2 Mesa Horizon SDK directory containing `lib/libvulkan.a`; NXVK is retained only behind `PES17_SWITCH_USE_LEGACY_NXVK=ON`. The old smoke implementation under `switch/smoke/` remains historical and has not been rewritten. Do not remove them until the replacement compiles.

## Pinned primary reference

Repository: https://github.com/AlvaroEPena/bo2-360-nx
Commit: `dd189961e8876079087d6f0843af8013bd154277`

Audited files:

| BO2 source | Responsibility | PES migration target |
|---|---|---|
| `sdk/src/ui/windowed_app_context_switch.cpp` | Switch applet/UI loop and UI-thread lifecycle | libnx app context / Switch window lifecycle |
| `sdk/src/ui/vulkan/vulkan_device.cpp` | Vulkan physical-device inspection, required feature/extension checks, logical-device creation and function dispatch | PES Vulkan device/provider layer |
| `sdk/src/ui/vulkan/vulkan_presenter.cpp` | VI WSI surface, swapchain lifecycle, acquire, synchronization, command submission and present | PES Vulkan presenter |
| `app/src/native/bo2zm_native_system.cpp` | Native graphics system setup; creates VulkanProvider and presenter on UI thread; maintains GPU-facing runtime system | PES graphics system and Xenos ring integration |
| `app/src/native/render/bo2zm_native_render.cpp` | Native renderer consuming game GPU command ring and using Vulkan presenter/resources | PES Xenos renderer integration |

## Findings from source inspection

1. BO2 does not implement the whole graphics stack inside its game renderer. It uses the SDK abstraction `VulkanProvider`, `VulkanDevice`, and `VulkanPresenter`. The native game graphics system calls `VulkanProvider::Create(true, true)`, then creates its presenter through the application UI thread.
2. BO2's presenter is responsible for Switch presentation and WSI behavior. It includes Switch-specific VI surface integration and has documented Switch-specific present mode and acquire synchronization choices.
3. BO2 separates the game-facing graphics system/ring sink from Vulkan device and presentation. The ring/system translates game GPU activity into renderer work; the presenter owns platform output.
4. BO2's presenter comments explicitly describe the NVK Horizon WSI implementation and its constraints. Therefore “Vulkan like BO2” means porting BO2's **SDK Vulkan provider/device/presenter architecture and lifecycle**, not claiming BO2 avoids an NVK Vulkan driver. Driver/ICD availability remains a separate platform dependency that must be resolved and documented.
5. PES's current `runtime/gpu/vulkan/loader.*` and `presenter.cpp` are a PES-owned low-level loader/smoke path, not yet a BO2-style provider/device/presenter abstraction. They should be audited and either adapted behind those boundaries or replaced by a minimal compatible layer.

## Migration sequence

### B0 — Reference audit (this checkpoint)
- Pin BO2 commit and source paths.
- Record architecture boundaries and Switch-specific WSI behavior.
- Explicitly distinguish BO2 architecture from the underlying NVK driver.

### B1 — Inventory PES legacy coupling
- Identify every NXVK package lookup, include path, link library, ICD entrypoint, patched upstream source, workflow and smoke test.
- Classify each as driver/runtime dependency, loader, presenter, diagnostic or obsolete experiment.
- No deletion in this step.

### B2 — Define PES Vulkan interfaces
- Establish separate interfaces for instance/device provider, Switch surface/swapchain presenter, command/resource layer and Xenos renderer.
- Keep libnx window/applet lifecycle separate from Vulkan device ownership.
- Specify ownership, teardown order, dispatch source and synchronization contracts.

### B3 — Implement BO2-style provider/device/presenter
- Port the required BO2 SDK behavior to PES's existing C++/libnx structure, or vendor/adapt the smallest compatible SDK subset after license/dependency review.
- Preserve BO2's explicit UI-thread presenter creation and destruction rules.
- Resolve all Vulkan entrypoints from the correct loader/ICD dispatch path; do not assume global loader pointers are equivalent to device dispatch.
- Do not claim independence from NVK unless an alternative Vulkan ICD/driver actually exists and is tested.

### B4 — Build separation
- Add a new Vulkan-native build target/workflow that does not use the legacy NXVK smoke workflow as its source of truth.
- Keep legacy NXVK build optional and isolated.
- Only remove NXVK from the active target once the new target configures, compiles and links successfully.

### B5 — Hardware checkpoints
1. Launch NRO and initialize provider/device.
2. Create VI surface and swapchain.
3. Acquire/submit/present a stable frame.
4. Create image/view/render pass/framebuffer.
5. Create shader modules and graphics pipeline.
6. Execute `vkCmdDraw(3, 1, 0, 0)` and verify a visible RGB triangle.
7. Add resources and then Xenos/PES renderer.

Each checkpoint requires source diff, CI result, device log and visual confirmation where applicable. A successful CI build alone is not a hardware pass.

## Current status

- NXVK: stopped, preserved as backup branch `backup/nxvk-before-vulkan-bo2-direction`.
- BO2 architecture audit: source inspected and mapped above.
- PES Vulkan native provider/device/presenter: not implemented yet; current presenter remains monolithic.
- Current CMake target: defaults to BO2 Mesa Horizon SDK (`libvulkan.a`); legacy NXVK can be selected explicitly. A standalone BO2 SDK probe compiled, linked, packaged in CI, and was launched on physical Switch.
- Probe API result: the user confirmed the NRO reached its HOME-to-exit prompt, but has not yet supplied the preceding `GIPA: PASS` or `FAIL` diagnostic line. Do not count the Vulkan API query as passed until that line is verified.
- Full PES runtime/provider/device/presenter integration: not yet built or tested against this SDK.
- Visible triangle on Switch: not yet proven.


## B1 — PES legacy coupling inventory (source inspection, 2026-11-10)

- At the initial inventory checkpoint, `CMakeLists.txt` required pkg-config module `nxvk` and linked `nvk`/`nvk_support`. This was the old packaging route, not the target application architecture.
- `cmake/switch-toolchain.cmake` obtains target-side archives from devkitPro portlibs.
- `runtime/gpu/vulkan/*.cpp` is already compiled through a source glob, so `switch_driver.cpp` is included without another CMake source entry.
- The legacy NXVK workflow is now manual-only; automatic push triggers were removed.
- `runtime/gpu/vulkan/loader.cpp` owns global function pointer dispatch. Its Switch-specific entrypoint is now delegated to `switch_driver.h/.cpp`.
- `runtime/gpu/vulkan/presenter.cpp` still owns instance creation, device selection, VI surface, swapchain, queues, synchronization, and present in one translation unit. It contains internal `CreateInstance` and `CreateDevice` stages.
- `presenter.h` exposes global `vk::Start/Stop/ShowImage` functions, not BO2-style provider/device/presenter objects.

### Driver versus architecture

BO2's Switch `VulkanInstance` explicitly documents that Horizon has no system Vulkan loader and that NVK is statically linked. BO2 assigns its public `vkGetInstanceProcAddr` directly. BO2 therefore does **not** replace NVK with another Switch graphics driver; it uses a provider/device/presenter architecture above a statically linked NVK driver.

For PES, stopping NXVK development means stopping its app/build/smoke-test route as the architecture, isolating the available static driver behind a platform adapter, and moving instance/device/presentation ownership into BO2-style components. The NVK driver package remains required until a different actual Vulkan driver is available and validated. It would be inaccurate to claim driver independence while this target still links NVK.

### Changes in this checkpoint

- Added `runtime/gpu/vulkan/switch_driver.h/.cpp` as the Switch-specific static-driver entrypoint boundary.
- Changed `loader.cpp` to obtain GIPA through `vk::switch_driver::GetInstanceProcAddr()` and its description through `Description()`.
- At the previous checkpoint, changed the legacy Switch linker's forced symbol from private `vk_icdGetInstanceProcAddr` to the public adapter `nvk_GetInstanceProcAddr`.
- Updated CMake and toolchain wording to distinguish the BO2-style Vulkan application architecture from the static NVK driver package.
- Generalized the Switch WSI diagnostic so it no longer refers to NXVK as the application architecture.

### B1 result

**Partially complete.** Driver entrypoint isolation and dependency inventory are in place. The monolithic presenter and static NVK link remain intentionally; the next safe change is to extract instance/device/provider lifecycle behind PES-owned interfaces without changing the current runtime behavior.


## B2 — BO2 Mesa SDK build-path migration (2026-11-10)

Primary BO2 files rechecked at pinned commit `dd189961e8876079087d6f0843af8013bd154277`:

- `tools/build_mesa.sh`: clones `danfromtico/mesa-switch` at `1a8c1a66d6f`, applies `patches/mesa-bo2zm.patch`, and installs the SDK.
- `sdk/cmake/rexglue_switch.cmake`: expects `REXGLUE_SWITCH_NVK_SDK` to point at the Mesa SDK `opt/devkitpro/portlibs/switch` directory; links `vulkan expat zstd z nx` twice, then `stdc++ m`.
- `sdk/src/ui/vulkan/vulkan_instance.cpp`: assigns the public `::vkGetInstanceProcAddr` symbol directly on Switch.
- `sdk/src/ui/switch_elf_stubs.c`: supplies the libelf stubs needed by Mesa's static archive because the NVIDIA CUBIN parser is not used on the Switch path.

PES changes made in this checkpoint:

1. `PES17_SWITCH_VULKAN_SDK` is now the default Switch Vulkan SDK input and must point to the BO2-style Mesa Horizon SDK portlibs directory. CMake validates both `lib/libvulkan.a` and `include/vulkan/vulkan.h`; it accepts either `PES17_SWITCH_VULKAN_SDK` or BO2 toolchain environment variable `MESA_SDK`.
2. The default target links `vulkan expat zstd z nx` twice and then `stdc++ m`, following BO2's static archive order.
3. The existing `switch/mesa/elf_stubs.c` is added to the active target and C language is enabled for that target.
4. `switch_driver.cpp` now requests the public `vkGetInstanceProcAddr` symbol on the default Mesa path. The old `nvk_GetInstanceProcAddr` entrypoint remains only under `PES17_SWITCH_USE_LEGACY_NXVK=ON`.
5. README and CMake status text now distinguish the default Mesa SDK route from the preserved legacy NXVK route.
6. Removed the old NXVK-only `NVK_I_WANT_A_BROKEN_VULKAN_DRIVER` startup flag and NXVK-specific diagnostic from the active Switch presenter. BO2's checked Switch startup path does not set this flag; it uses the public static Mesa entrypoint directly.

### B2 result and limitations

**Source migration applied; standalone SDK probe verified.** The pinned BO2 Mesa SDK was checksum/manifest verified, statically linked into a standalone probe, packaged as NRO, and launched on physical Switch. This does not yet validate the full PES runtime target. Next work is to compile/link the PES runtime against the same SDK, resolve actual compile/link/API errors, and then extract provider/device/presenter ownership.


## B2.1 — BO2 release SDK link probe (2026-11-10)

A reproducible CI input is now available from the pinned BO2 tag `Release-1.1.0`, whose tag resolves to the same commit `dd189961e8876079087d6f0843af8013bd154277`. Its published Switch/Windows build kit includes the prebuilt runtime package, specifically `runtime/switch/portlibs` (Mesa/NVK headers and archives, plus the separately built static zstd library). The workflow verifies the release ZIP SHA-256 and the embedded runtime manifest before using the SDK:

- Release asset: `bo2-360-nx-release-1.1.0-switch+windows-build-kit.zip`
- SHA-256: `5c973a38b0921650ebfddf47fd9064f46f5aefa60d019a84371cfb0af328a26f`
- Mesa base in manifest: `danfromtico/mesa-switch 1a8c1a66d6f`

Added:

- `switch/mesa/vulkan_link_probe.cpp`: minimal libnx NRO that calls the public Mesa `vkGetInstanceProcAddr`, resolves `vkEnumerateInstanceVersion`, and prints the returned API version.
- `.github/workflows/switch-vulkan-bo2-sdk.yml`: downloads and checksum-verifies the pinned BO2 build kit, extracts only its Switch portlibs SDK, compiles the PES libelf stubs and probe with devkitA64, links the static archives in BO2's exact order, packages a probe NRO, and uploads the NRO/ELF/NACP artifact.

The active CMake configuration now also checks for `libzstd.a` and the devkitPro `libexpat.a`, `libz.a`, and `libnx.a` inputs before proceeding. This catches the common incomplete-SDK case before a long compile.

### B2.1 verification boundary

The workflow completed successfully for commit `8231466c8df55fcff6aac210ed49e2dd83d04757` (run `42857844357`). It verified the pinned BO2 kit checksum and manifest, compiled the probe, linked the static archives in BO2 order, packaged the NRO, and uploaded artifact `pes17-vulkan-bo2-probe` (artifact ID `13782659277`). The user then confirmed that the NRO launched on physical Switch and displayed the HOME-to-exit prompt. This confirms application launch, not necessarily the GIPA/API-version call: the probe prints either `GIPA: PASS; vkEnumerateInstanceVersion result=... API=...` or `FAIL: vkGetInstanceProcAddr did not return vkEnumerateInstanceVersion` before the exit prompt. The exact diagnostic line has not yet been recorded, so the Vulkan entrypoint check remains pending. Full PES runtime/provider/device/presenter integration has not yet been built or tested.


## B2.2 — Physical Switch probe launch (2026-11-10)

- CI run: [42857844357](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42857844357), commit `8231466c8df55fcff6aac210ed49e2dd83d04757`.
- Probe artifact: `pes17-vulkan-bo2-probe`, artifact ID `13782659277`.
- User hardware report: NRO opened and displayed a black console screen with the instruction to press HOME to exit.
- Verified scope: application launch and reaching the probe's applet loop.
- Not yet verified: whether the preceding diagnostic printed `GIPA: PASS` or `FAIL`, exact Vulkan API version, instance creation, device creation, VI surface/swapchain, or any rendered frame.

The probe source prints the GIPA/API-version result before the HOME prompt. Preserve this distinction in progress reports. The next software task is full PES runtime compile/link against the exact same SDK; do not mark triangle rendering or game rendering complete.


## B2.3 — Extended runtime probe build (2026-11-10)

- Source commit: `4f72f70afd6319c5aae76ac4cd0b71703073e38b`.
- CI: [run 42859421857](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42859421857), completed successfully; compile, BO2-order static link, NRO packaging, and artifact upload all passed.
- Artifact: `pes17-vulkan-bo2-probe`, ID `13783778138`, ZIP SHA-256 `8d987da09824ae3a9c7e455f444041b9eb140767f2bd96851e520f68470c427e`.
- Probe source now checks public GIPA, optional API version query, `vkCreateInstance`, `vkEnumeratePhysicalDevices`, and first GPU properties/name. It prints explicit PASS/FAIL diagnostics before the HOME exit prompt.
- Physical Switch result for this extended probe: not yet reported. The prior report applies only to the earlier probe build and must not be reused as evidence for this extended test.
- Full PES runtime integration, logical-device creation, surface/swapchain, presentation, triangle, and game rendering remain unverified.


## B2.4 — Correct instance dispatch and runtime compile gate (2026-11-10)

Source review found that `loader.cpp::LoadInstance` still used a direct `vkGetInstanceProcAddr(...)` call for both instance- and device-dispatch symbol lookup even though this build defines `VK_NO_PROTOTYPES` and stores the driver entrypoint in `vkGetInstanceProcAddrFn`. Both lookups now call the stored GIPA pointer. This keeps dispatch on the adapter-provided static Mesa entrypoint and avoids an undeclared/direct loader symbol.

The BO2 SDK workflow now compiles every `runtime/gpu/vulkan/*.cpp` translation unit for the Switch target against the same pinned Mesa Vulkan headers and devkitPro/libnx headers before building the standalone GIPA/instance/physical-device probe. This is deliberately a **compile-only runtime gate**: it checks PES Vulkan source compatibility with the Switch SDK, but does not link the complete PES executable or prove runtime behavior.

Important build constraint discovered during inspection: this repository checkout does not contain `pes/default.xex` or generated `ppc/*.cpp`. The top-level CMake project intentionally refuses to configure without the user's private game input and matching recompiled PPC output. Therefore this CI step does not pretend to build the complete PES NRO; it isolates and compiles the full Vulkan runtime translation-unit set. Full executable link and physical-device tests remain separate checkpoints.


## B2.5 — Switch-specific RenderDoc compile failure (2026-11-10)

The first runtime compile-gate run (workflow run `42860048323`) reached the PES Vulkan translation units and failed in `runtime/gpu/vulkan/capture.cpp`: the vendored RenderDoc header does not recognize the Horizon `__SWITCH__` platform macro, so `RENDERDOC_CC` and the RenderDoc API declarations were unavailable. RenderDoc's in-process injection/capture mechanism is not part of the Switch runtime.

Correction: `capture.cpp` now enables its RenderDoc implementation only when Vulkan is present **and** the target is not Switch (`PES17_HAVE_RENDERDOC_CAPTURE`). Switch uses the existing no-op capture hooks. This is a platform capability boundary, not a Vulkan driver workaround. The retry is CI run `42860277184`; its final compile result is pending at this checkpoint.


## B2.6 — Vulkan dispatch header must be force-included (2026-11-10)

After the RenderDoc platform guard was corrected, the compile gate advanced to `display_table.cpp` and failed because Vulkan command names such as `vkCreateImage` and `vkCmdPipelineBarrier` were undeclared. These are intentionally function-pointer declarations emitted by `runtime/gpu/vulkan/loader.h` when `PES17_VULKAN_DYNAMIC` is enabled. The header's own comment says it must be force-included before every Vulkan runtime translation unit, but the top-level CMake target had not actually added that compile option.

Correction: the Switch `pes17` target now force-includes the absolute path to `runtime/gpu/vulkan/loader.h` for C++ compilation. The BO2 SDK compile gate mirrors this exact preinclude, rather than compiling with a different set of declarations from the real target. This is a build-system correctness fix; it does not yet establish successful compilation, full executable linkage, or device runtime behavior. Validation is running under workflow `42860946845`.


## B2.7 — Isolasi translation unit yang memerlukan PPC privat (2026-11-10)

Workflow compile gate sempat berhenti di `renderer_draw.cpp` karena file tersebut memasukkan `runtime/kernel/kernel.h`, yang membutuhkan `ppc/ppc_recomp_shared.h`. Header tersebut dihasilkan XenonRecomp dari `default.xex` milik pengguna dan memang tidak disertakan dalam checkout publik.

Pemeriksaan source terhadap seluruh daftar translation unit Vulkan menemukan dua file yang secara langsung memasukkan header kernel tersebut:
- `runtime/gpu/vulkan/renderer_draw.cpp`
- `runtime/gpu/vulkan/renderer_resolve.cpp`

Workflow sekarang menandai dua file tersebut sebagai **DEFERRED** dan tetap mengompilasi translation unit Vulkan lain terhadap SDK BO2 yang dipin. Tidak dibuat header PPC tiruan. Gate ini adalah pemeriksaan parsial yang eksplisit, bukan klaim bahwa seluruh runtime telah terkompilasi.

Percobaan pertama setelah isolasi gagal sebelum kompilasi dimulai karena ekspansi nama variabel compiler di bash; skrip kini menggunakan `${compiler}-g++` dan `${compiler}-gcc`. Perbaikannya divalidasi oleh CI run `42864142164` pada commit `8bab73a0d124000f48c26cf7c82ec6fc58bf1e9f`.

### Batas pembuktian saat ini

- SDK BO2: checksum dan manifest rilis diverifikasi ulang pada run `42864142164`.
- PES Vulkan translation units: **24 dari 26 berhasil dikompilasi** untuk ARM64 Switch pada run `42864142164`; dua file secara eksplisit deferred karena input PPC privat.
- `renderer_draw.cpp` dan `renderer_resolve.cpp`: belum dikompilasi pada target Switch karena `ppc/ppc_recomp_shared.h` tidak tersedia di CI publik.
- Probe GIPA/instance/physical-device berhasil dibangun, ditautkan, dan dipaketkan sebagai NRO pada run tersebut; output diagnostik API pada Switch fisik belum dilaporkan.
- Full PES link, device/WSI, segitiga RGB, dan rendering game: belum terbukti.
### Pemeriksaan enumerasi presenter (11 November 2026)

- Menambahkan helper enumerasi count/data dengan retry terbatas saat Vulkan mengembalikan `VK_INCOMPLETE`; dipakai untuk instance extensions, physical devices, queue families, surface formats, dan swapchain images.
- Query `vkGetPhysicalDeviceSurfaceSupportKHR` kini memeriksa `VkResult` sebelum memakai nilai dukungan present.
- Perubahan ini adalah hardening pada lifecycle yang masih monolitik, bukan pemisahan kelas instance/device ala BO2. Pemisahan ownership/dispatch tetap menjadi pekerjaan berikutnya setelah compile gate selesai.


### Pemeriksaan lifecycle swapchain image ownership (11 November 2026)

- Source review menemukan bahwa saat swapchain lama diganti, vector `g.images` masih dapat menyimpan handle image milik swapchain yang sudah dihancurkan sampai enumerasi swapchain baru selesai.
- Jika pembuatan/enumerasi swapchain baru gagal, handle lama atau hasil enumerasi parsial dapat tertinggal dan terlihat oleh jalur diagnostik/presenter yang memeriksa daftar image.
- `presenter.cpp` kini mengosongkan `g.images` tepat setelah swapchain lama dihancurkan, dan juga membersihkannya pada kegagalan enumerasi image swapchain baru.
- Perubahan source commit: `e69b540f6db57a1eda41782b975619ddf6d6d216`.
- Validasi CI BO2 SDK pada run [42866248741](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42866248741) selesai **success**; workflow compile gate terkait juga lulus. NRO probe yang dihasilkan memiliki SHA-256 sama dengan probe tahap 2 sebelumnya, sehingga tidak mewakili perubahan runtime probe dan tidak perlu diuji ulang.
- Ini memperbaiki konsistensi ownership handle WSI saat resize/recreate. Belum mengubah status arsitektur monolitik dan bukan bukti present atau rendering pada Switch fisik.
