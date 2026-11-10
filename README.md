# PES 2017 — Nintendo Switch Port

**Proyek eksperimen port native PES 2017 dari Xbox 360 ke Nintendo Switch.**

Repositori ini mengembangkan jalur recompilation PowerPC, runtime kompatibilitas Xbox 360, lapisan platform libnx, serta backend grafis Vulkan native mengikuti arsitektur BO2-360-NX. Eksperimen NXVK dihentikan dan dipertahankan sebagai cadangan. Target akhirnya adalah menjalankan PES 2017 sebagai aplikasi homebrew Nintendo Switch (NRO), bukan menjalankan emulator Xbox 360.

> [!WARNING]
> **Status per 10 November 2026: belum playable.** Hasil historis VI swapchain dan GPU color-clear pada Switch fisik berasal dari eksperimen NXVK/NVK yang kini dibekukan sebagai cadangan; hasil tersebut tidak membuktikan jalur Vulkan aktif bergaya BO2. Jalur aktif saat ini memakai SDK Mesa statis dari build kit BO2 yang dipatok. Probe NRO berhasil dibangun di CI dan pengguna mengonfirmasi NRO terbuka sampai prompt HOME, tetapi hasil diagnostik GIPA/instance/device belum tercatat. Gate kompilasi runtime sedang dipisahkan secara jujur: file yang memerlukan `ppc/ppc_recomp_shared.h` hasil XenonRecomp privat ditunda, bukan diganti header palsu. Belum ada bukti segitiga RGB pada jalur aktif, renderer PES, atau boot PES 2017.

---

## 1. Identitas dan ruang lingkup proyek

| Kategori | Data proyek |
|---|---|
| Nama | PES 2017 Nintendo Switch Port |
| Game sumber | Pro Evolution Soccer 2017 |
| Platform sumber | Xbox 360 |
| Platform tujuan | Nintendo Switch / Horizon OS |
| Format aplikasi tujuan | NRO (homebrew) |
| Arsitektur tujuan | ARM64 / AArch64 |
| SDK platform | devkitPro, devkitA64, libnx |
| Recompilation | XenonRecomp (PowerPC ke C++) |
| Grafis yang dituju | Vulkan native, arsitektur mengikuti BO2-360-NX |
| Status | Eksperimental, pengembangan aktif, belum playable |

**Batas ruang lingkup:** pekerjaan ini bukan emulator Xbox 360. Kode PowerPC game dikonversi menjadi kode C++ host melalui XenonRecomp, lalu dijalankan bersama runtime yang menyediakan perilaku layanan dan perangkat keras Xbox 360 yang dibutuhkan game.

## 2. Target game yang digunakan

Semua validasi recompilation yang tercatat dalam pekerjaan ini menggunakan executable berikut:

| Properti | Nilai |
|---|---|
| Judul | PES 2017 |
| Platform / region | Xbox 360 / Europe |
| Executable | `default.xex` |
| Title ID | `0x4A3007D1` |
| XEX execution-info version | `0x00000012` |
| Ukuran executable | `32,493,568 bytes` |
| SHA-256 | `b914ec9a1abb3a9b42a64255b6aa8ff27312da126f7c18f8c880106b832779e6` |

Versi Eropa memiliki varian yang perbedaannya dapat berupa isi bahasa. Untuk hasil recompilation yang konsisten, executable yang dipakai harus sama dengan target yang diverifikasi di atas; jangan mencampur PPC hasil generate dari executable berbeda.

Referensi pemilihan salinan game: [panduan PES 2017 pada XenonRecomp](https://github.com/dzakyraf/pes2017-recomp#which-copy-of-the-game-you-need).

**Game wajib berasal dari salinan milik pengguna sendiri.** Repositori ini tidak menyediakan `default.xex`, image disc, CPK, aset game, atau hasil PPC yang dihasilkan dari executable tersebut.

## 3. Ringkasan progres aktual

Angka di bawah adalah hasil pekerjaan dan pemeriksaan yang telah tercatat, bukan target atau perkiraan.

| Komponen | Hasil saat ini | Keterangan |
|---|---|---|
| Validasi XEX | Berhasil | Pemeriksaan struktur XEX2, Title ID, versi, ukuran, dan SHA-256 |
| PPC recompilation | Selesai pada build lokal | 1.413 file `ppc_recomp.*.cpp` dihasilkan |
| Total isi direktori PPC | 1.421 file | Termasuk file pendukung dan manifest |
| Analisis instruksi | Masih ada pekerjaan | 44 word belum ter-decode pada laporan recompilation |
| Analisis jump table | Masih ada pekerjaan | 2 dispatch terlewat pada laporan analisis |
| Kernel imports | 281 teridentifikasi | 212 sudah memiliki implementasi; 69 masih stub |
| Bootstrap libnx | Build CI berhasil | Aplikasi uji platform dan controller, bukan game |
| NXVK (cadangan) | Eksperimen dihentikan | Jalur lama dipertahankan sebagai opsi legacy; tidak menjadi jalur build default |
| Vulkan native (jalur aktif) | Probe NRO BO2 Mesa berhasil dibangun dan mencapai loop aplikasi di Switch; gate kompilasi runtime masih parsial | Hasil GIPA/instance/device belum terkonfirmasi. File `renderer_draw.cpp` dan `renderer_resolve.cpp` ditunda karena membutuhkan header PPC privat hasil XenonRecomp |
| Switch runtime | Dalam integrasi | Platform, input, audio, storage dan grafis belum terverifikasi sebagai satu game |
| PES 2017 NRO | Belum tersedia | Belum ada full-game NRO yang terbukti boot atau playable |

### Arti hasil pengujian

- **Probe BO2 Mesa (10 November 2026):** CI berhasil membangun NRO dan pengguna mengonfirmasi aplikasi terbuka pada Switch hingga menampilkan instruksi menekan HOME untuk keluar. Ini membuktikan NRO dapat diluncurkan dan mencapai loop aplikasi. Karena baris diagnostik `GIPA: PASS` atau `FAIL` belum dilaporkan secara eksplisit, pemanggilan entrypoint Vulkan dan hasil `vkEnumerateInstanceVersion` belum boleh dinyatakan lulus.
- **Build berhasil** berarti compiler dan linker berhasil menghasilkan target yang diuji.
- **Syntax check berhasil** berarti file yang diperiksa dapat dikompilasi pada tahap pemeriksaan tersebut; belum membuktikan perilaku runtime.
- **Smoke test historis NXVK/NVK** berhasil menyelesaikan VI swapchain dan GPU color-clear pada Switch fisik; hasil ini dicatat sebagai eksperimen lama dan bukan bukti jalur Vulkan BO2 aktif. Probe BO2 Mesa terbaru hanya dikonfirmasi mencapai prompt HOME; diagnostik Vulkan sebelum prompt belum dilaporkan.
- **Playable** baru dapat dinyatakan setelah game benar-benar berjalan di Switch dan fungsi permainan penting telah diverifikasi.

Keberhasilan smoke test VI tidak boleh dianggap sebagai bukti bahwa PES 2017 sudah berjalan di perangkat fisik.

## 4. Arsitektur port

Alur kerja yang sedang dibangun:

```text
PES 2017 Xbox 360 (default.xex)
              |
              v
       XEX validation
              |
              v
     XenonAnalyse / XenonRecomp
              |
              v
       Generated PPC C++
              |
              v
    PES 2017 compatibility runtime
       |          |          |
       v          v          v
    Kernel      Graphics    Audio
    services    / Vulkan    / XMA
       |          |          |
       +----------+----------+
                  |
                  v
       Nintendo Switch platform
        libnx / Horizon / HID
                  |
                  v
            Switch NRO
```

### 4.1 Recompilation dan validasi executable

- `tools/verify_xex.py` membaca metadata XEX2 dan memvalidasi target.
- `build.sh` menjalankan XenonRecomp dan menghasilkan file C++ dari kode PowerPC.
- `ppc/XEX_TARGET` mengikat hasil PPC ke Title ID, versi, dan SHA-256 executable sumber.
- Pemeriksaan CMake membandingkan manifest dengan XEX lokal agar hasil PPC yang salah target tidak ikut dibangun.

### 4.2 Runtime kompatibilitas Xbox 360

Runtime menyediakan lingkungan yang diharapkan kode hasil recompilation, termasuk guest memory, kernel imports, thread, filesystem, GPU/APU, dan fungsi pendukung lainnya. Implementasi belum lengkap; jumlah import yang masih stub tercantum pada tabel progres.

### 4.3 Platform Nintendo Switch

Implementasi Switch yang ada mencakup:

- Adapter platform berbasis libnx.
- Inisialisasi filesystem SD melalui `fsdevMountSdmc()`.
- Direktori kerja `sdmc:/switch/PES2017`.
- Thread dan beberapa primitive sinkronisasi platform.
- Input HID melalui `pad` libnx dengan pemetaan tombol ke layout Xbox.
- Adapter audio awal melalui layanan `audout`.

Keberadaan source code adapter tidak berarti semua fungsi sudah diuji pada beban game sesungguhnya.

### 4.4 Backend Vulkan native (arah utama: BO2-360-NX)

Arah utama grafis diubah: hentikan pengembangan/integrasi NXVK sebagai backend aktif dan gunakan implementasi Vulkan native dengan pola arsitektur BO2-360-NX. BO2 menjadi referensi utama untuk lifecycle aplikasi, Vulkan instance/device, dispatch fungsi, VI surface, swapchain, presenter, resource, command submission, dan present. NXVK beserta source, konfigurasi, dan hasil eksperimennya tetap disimpan pada branch cadangan; jangan dihapus atau dicampur ke jalur Vulkan baru.

Hasil lama NXVK/NVK (VI swapchain dan GPU color-clear yang terlihat pada Switch fisik) dicatat sebagai bukti eksperimen historis, bukan fondasi backend aktif. Belum ada bukti bahwa backend Vulkan native bergaya BO2 telah berjalan di PES pada perangkat fisik. Target visual pertama tetap segitiga RGB, kemudian resource/shader, lalu renderer PES.

## 5. Struktur direktori penting

| Direktori / file | Tanggung jawab |
|---|---|
| `build.sh` | Validasi executable dan alur recompilation lokal |
| `tools/` | Validator XEX dan alat analisis/penyiapan PPC |
| `config/` | Konfigurasi XenonRecomp dan analisis jump table |
| `ppc/` | Output recompilation lokal; tidak disimpan sebagai artefak publik |
| `pes/` | Input executable dan hasil konversi lokal; data game privat |
| `runtime/` | Runtime kompatibilitas dan subsistem game |
| `runtime/kernel/` | Kernel imports, guest memory, dan layanan sistem |
| `runtime/gpu/` | GPU runtime, Vulkan, texture dan shader support |
| `runtime/apu/` | Audio runtime dan XMA |
| `runtime/switch/` | Implementasi platform dan audio khusus Switch |
| `switch/source/` | Bootstrap dan input Switch |
| `switch/smoke/` | Script aplikasi uji NXVK |
| `cmake/switch-toolchain.cmake` | Konfigurasi cross-compiler devkitA64 |
| `tests/` | Test mandiri yang tidak memerlukan file game |
| `third_party/XenonRecomp/` | Toolchain XenonRecomp yang disertakan |
| `.github/workflows/` | Otomasi test dan build Switch |

## 6. Persyaratan build

### Perangkat lunak

Untuk target Nintendo Switch dibutuhkan:

- Linux build environment.
- devkitPro dan devkitA64.
- libnx dan switch-tools.
- CMake dan Ninja.
- Python 3 dan Git.
- Dependensi Vulkan/libnx yang dibutuhkan oleh backend native dan workflow. NXVK hanya diperlukan bila membangun ulang eksperimen cadangan.
- Salinan PES 2017 Xbox 360 Europe milik sendiri untuk full-game recompilation.

Bootstrap dan test mandiri dapat dibangun tanpa executable game. Full runtime membutuhkan output PPC dan manifest XEX yang cocok.

### 6.1 Menjalankan test mandiri

Test mandiri tidak memerlukan XEX atau output PPC:

```sh
cmake -S tests -B build-tests -G Ninja
cmake --build build-tests
ctest --test-dir build-tests --output-on-failure
```

Test yang terdaftar mencakup durable write, penghitungan log berulang, block-compressed texture decoder, volume texture layout, dan test lain yang ditambahkan pada konfigurasi test.

### 6.2 Recompile executable lokal

Contoh perintah yang telah digunakan pada lingkungan Termux proyek:

```sh
GAME="$HOME/storage/shared/PES2017-Extracted" \
XEX_VERSION=0x00000012 \
RECOMPILE_ONLY=1 \
JOBS=4 \
CMAKE_CC="$(command -v clang)" \
CMAKE_CXX="$(command -v clang++)" \
./build.sh
```

`RECOMPILE_ONLY=1` menghentikan proses setelah PPC selesai dibuat dan diperiksa. Perintah ini **tidak** menghasilkan NRO Nintendo Switch.

### 6.3 Build bootstrap NRO

Dengan devkitPro yang telah disiapkan:

```sh
cd switch
make
```

Target ini menghasilkan `pes2017-switch-bootstrap.nro`. Fungsinya menguji inisialisasi libnx, thread/synchronization probe, dan input controller. Ini bukan executable PES 2017.

### 6.4 Full runtime Switch

Konfigurasi full runtime menggunakan toolchain `cmake/switch-toolchain.cmake`, opsi `PES17_SWITCH=ON`, PPC hasil recompilation, manifest XEX yang cocok, dan SDK Mesa Horizon statis hasil build mengikuti BO2. Set `PES17_SWITCH_VULKAN_SDK` atau `MESA_SDK` ke direktori `opt/devkitpro/portlibs/switch` hasil instalasi Mesa. Opsi `PES17_SWITCH_USE_LEGACY_NXVK=ON` hanya untuk jalur cadangan. SDK untuk probe di CI diambil dari build kit BO2 rilis yang dipatok; build full runtime PES tetap belum diverifikasi.

## 7. Otomasi GitHub Actions

Workflow yang berada di repositori:

| Workflow | Fungsi | Batas pembuktian |
|---|---|---|
| `main.yml` | Test otomatis di GitHub Actions | Menguji test suite, bukan menjalankan game |
| `switch-nro.yml` | Build dan verifikasi bootstrap libnx NRO | Membuktikan bootstrap dapat dikompilasi dan dipaketkan |
| `switch-nvk-spike.yml` | Workflow historis NXVK, manual-only | Tidak berjalan otomatis dan bukan workflow validasi backend aktif |


Lihat [riwayat GitHub Actions](../../actions) untuk status run dan artefak yang tersedia.

Artefak smoke test NXVK adalah alat pengujian driver, bukan game. Jangan menyimpulkan keberhasilan boot pada Switch fisik hanya dari status workflow CI.

## 8. Arah kerja baru: Vulkan native mengikuti BO2-360-NX

Audit BO2 dan inventaris ketergantungan PES dicatat dalam [dokumen migrasi](docs/vulkan-bo2-port-plan.md). Adapter entrypoint driver Switch kini dipisah ke `switch_driver.h/.cpp`. Dispatch instance di `loader.cpp` menggunakan pointer `vkGetInstanceProcAddrFn`. Workflow mengompilasi translation unit Vulkan untuk Switch terhadap header SDK BO2 yang dipin. **Run `42864142164` berhasil:** 24 translation unit dikompilasi untuk ARM64; `renderer_draw.cpp` dan `renderer_resolve.cpp` ditandai deferred karena menyertakan `runtime/kernel/kernel.h`, yang memerlukan `ppc/ppc_recomp_shared.h` hasil XenonRecomp dari `default.xex` privat. Probe NRO juga berhasil dibangun dan dikemas. Gate ini tetap parsial: dua TU belum dikompilasi, runtime PES belum full-link, dan hasil GIPA/instance/device pada Switch fisik belum tercatat. Salah ekspansi variabel compiler yang menyebabkan run sebelumnya gagal telah diperbaiki menjadi `${compiler}-g++`/`${compiler}-gcc`. Ini belum berarti provider/device/presenter BO2-style sudah dipindahkan.

**Keputusan arsitektur:** pengembangan NXVK dihentikan. Tidak ada lagi pekerjaan fitur, debugging, atau penambahan integrasi pada jalur NXVK. Source, konfigurasi, workflow, dan artefak NXVK yang sudah ada wajib dipertahankan sebagai cadangan yang terpisah. Jangan menghapusnya dahulu.

Backend aktif yang baru adalah **Vulkan native bergaya BO2-360-NX**. BO2-360-NX menjadi referensi utama dan sumber pembanding implementasi; NXVK bukan lagi referensi arsitektur utama. Tujuannya bukan sekadar membuat Vulkan smoke test, melainkan membangun jalur render PES dengan urutan tanggung jawab dan lifecycle seperti BO2, lalu mengganti bagian game-specific dengan runtime dan resource model PES/Xenos.

### 8.1 Pemisahan jalur dan status

| Jalur | Kebijakan | Status |
|---|---|---|
| NXVK | Bekukan; jangan hapus atau tambah fitur. Workflow diubah menjadi manual-only. Source/config dan histori uji dipertahankan. CMake hanya memilih jalur NXVK jika `PES17_SWITCH_USE_LEGACY_NXVK=ON`. | **Dihentikan — opsi legacy eksplisit saja** |
| Vulkan native (BO2-style) | SDK statis BO2 dipakai oleh probe dan gate compile runtime. Preinclude dispatch sudah diperbaiki; dua TU yang membutuhkan header PPC privat kini ditandai deferred secara eksplisit. | **Arah kerja aktif — gate parsial sedang divalidasi; provider/device/presenter PES belum dipisahkan** |

Dokumen audit dan rencana port: [docs/vulkan-bo2-port-plan.md](docs/vulkan-bo2-port-plan.md).

Branch cadangan NXVK: [backup/nxvk-before-vulkan-bo2-direction](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/tree/backup/nxvk-before-vulkan-bo2-direction).

### 8.2 Referensi BO2 yang wajib dianalisis

Gunakan source BO2-360-NX sebagai referensi utama, terutama:

- `sdk/src/ui/windowed_app_context_switch.cpp` — lifecycle aplikasi/window dan konteks Switch.
- `sdk/src/ui/vulkan/vulkan_device.cpp` — instance, physical device, logical device, queue, dan pemuatan fungsi.
- `sdk/src/ui/vulkan/vulkan_presenter.cpp` — VI surface, swapchain, acquire, synchronization, dan present.
- `app/src/native/bo2zm_native_system.cpp` — integrasi sistem native.
- `app/src/native/render/bo2zm_native_render.cpp` — alur renderer native.

Port dilakukan dengan memahami dependensi dan kontrak tiap komponen, bukan menyalin file BO2 secara membabi buta. API, tipe, dan layanan khusus BO2 harus dipetakan ke libnx serta runtime PES.

### 8.3 Target akhir dan urutan implementasi

Target grafis awal adalah **segitiga RGB nyata yang tampil stabil pada layar Switch**, bukan sekadar perubahan warna background. Setelah itu backend harus berkembang menuju renderer PES. Setiap tahap harus punya bukti log/build dan kriteria lulus yang jelas.

| Tahap | Pekerjaan | Kriteria lulus | Status |
|---|---|---|---|
| V0. Audit BO2 dan baseline PES | Audit lima file BO2 di atas; petakan entrypoint, instance/device dispatch, VI surface, swapchain, queue, synchronization, resource, dan presenter ke struktur proyek PES. Catat perbedaan dan dependensi. | Dokumen mapping file/fungsi BO2 → modul PES; tidak ada asumsi tanpa pemeriksaan source. | **Selesai — `docs/vulkan-bo2-port-plan.md`** |
| V1. Isolasi NXVK | Inventarisasi dependency, include/link path, ICD entrypoint, workflow, dan smoke test. Pisahkan adapter driver dari loader generik. Pertahankan source dan build cadangan. | Workflow lama manual-only; entrypoint driver terisolasi; dependency driver tercatat secara eksplisit. | **Sebagian — NXVK menjadi opsi legacy eksplisit; CMake default meminta SDK Mesa Horizon statis dan menautkan `vulkan`, `expat`, `zstd`, `z`, `nx` mengikuti urutan BO2** |
| V2. Vulkan native foundation | Ekstrak loader/entrypoint Vulkan dan instance/device dispatch menjadi komponen berorientasi objek mengikuti pola BO2; buat pemilihan physical device, queue family, logical device, dan lifecycle cleanup. | Instance/device memiliki ownership dan dispatch terpisah seperti BO2; init NRO berhasil dengan log per tahap. | **Sebagian — entrypoint publik `vkGetInstanceProcAddr` diarahkan ke `libvulkan.a`; provider kini memiliki instance lifecycle dan physical-device selection, serta factory logical-device untuk presenter; pipeline-global device policy tetap dipakai** |
| V3. VI surface dan swapchain | Port pola BO2 untuk VI surface, capability/format, swapchain, image enumeration, acquire, synchronization, submit, dan present. | Frame dipresentasikan stabil pada Switch fisik; log per tahap lengkap. | **Belum dikerjakan** |
| V4. Render target dan framebuffer | Implementasikan image/memory/view, render pass atau dynamic rendering sesuai dukungan, framebuffer, dan resource lifetime dengan dispatch yang benar. | Pembuatan resource dan framebuffer sukses; tidak ada null dispatch atau crash. | **Belum dikerjakan** |
| V5. Shader, pipeline, dan draw | Buat shader vertex/fragment sederhana, pipeline layout, graphics pipeline, viewport/scissor, dan `vkCmdDraw(3,1,0,0)`. | Segitiga RGB benar-benar terlihat di layar Switch; log pipeline, draw, submit, dan present sukses. | **Belum dikerjakan** |
| V6. Resource grafis | Tambahkan vertex/index buffer, upload, texture/image, sampler, descriptor, depth/stencil, dan render target. | Tiap jenis resource memiliki smoke test terpisah yang lulus pada hardware. | **Belum dikerjakan** |
| V7. Shader dan semantik Xenos | Implementasikan/validasi translator shader PES/Xenos ke SPIR-V, konstanta, texture sampling, blending, depth, dan render target. | Fixture shader/scene representatif menghasilkan output yang dapat dibandingkan. | **Belum dikerjakan** |
| V8. Renderer PES | Hubungkan command/resource model Xenos dan shader PES ke backend Vulkan native. | Scene PES-owned dengan aset lokal milik pengguna tampil benar; bukan hanya segitiga tes. | **Belum dikerjakan** |
| V9. Integrasi runtime game | Selesaikan loader, kernel imports kritis, guest memory, thread/event, filesystem, input, audio, dan startup path secara paralel. | Jalur startup game melewati entry point dan subsistem kritis tanpa stub/failure. | **Belum lengkap** |
| V10. Full-game NRO dan gameplay | Gabungkan PPC, runtime, renderer, platform, audio/input, dan data game privat. Uji menu, pertandingan, save, stabilitas, dan sesi panjang. | PES 2017 boot dan gameplay terbukti berjalan di Switch fisik. | **Belum dimulai** |

### 8.4 Progress implementasi terbaru

- `runtime/gpu/vulkan/switch_driver.h/.cpp` sekarang menjadi batas khusus platform untuk entrypoint driver statis Switch.
- `runtime/gpu/vulkan/loader.cpp` tidak lagi mendeklarasikan simbol Mesa Switch secara langsung; ia meminta entrypoint melalui adapter.
- Jalur default CMake sekarang memakai `PES17_SWITCH_VULKAN_SDK` dan `libvulkan.a`, dengan urutan dependensi statis yang disalin dari `sdk/cmake/rexglue_switch.cmake` BO2. NXVK hanya dipilih melalui `PES17_SWITCH_USE_LEGACY_NXVK=ON`.
- `switch_driver.cpp` pada jalur aktif meminta simbol publik `vkGetInstanceProcAddr` yang diekspor Mesa, sesuai `sdk/src/ui/vulkan/vulkan_instance.cpp` BO2.
- Stub libelf PES disertakan pada target SDK baru, mengikuti fungsi stub BO2.
- `switch/mesa/vulkan_link_probe.cpp` diperluas: GIPA publik, versi API, `vkCreateInstance`, enumerasi physical device, dan nama GPU.
- Workflow `.github/workflows/switch-vulkan-bo2-sdk.yml` memverifikasi SHA-256 build kit BO2 rilis `Release-1.1.0`, memeriksa manifest Mesa, menautkan static archive dengan urutan BO2, lalu mengemas probe NRO.
- Workflow historis NXVK sudah benar-benar manual-only; pemicu otomatis `push` dihapus.
- CMake dan toolchain kini menjelaskan bahwa arsitektur Vulkan BO2-style dan implementasi driver NVK adalah dua lapisan berbeda.
- `presenter.cpp` menggunakan pesan diagnostik generik untuk implementasi Vulkan Switch.
- **Checkpoint terverifikasi:** workflow run `42859421857` berhasil membangun dan mengemas probe yang diperluas; artefak `pes17-vulkan-bo2-probe` ID `13783778138`. NRO sudah diunduh dan diperiksa: berisi NRO/ELF/NACP. Pengujian fisik tahap sebelumnya hanya memastikan aplikasi terbuka dan mencapai prompt HOME; hasil GIPA/API/device enumeration dari probe terbaru masih menunggu laporan konsol. Ini bukan full runtime PES atau bukti render. Build full runtime PES terhadap `libvulkan.a` belum dilakukan, dan monolit `CreateInstance`/`CreateDevice` di `presenter.cpp` belum dipecah menjadi objek BO2-style.

### 8.5 Aturan kerja dan pembuktian

1. Jangan kembali mengulang eksperimen NXVK sebagai jalur utama.
2. Jangan menghapus NXVK atau artefaknya selama backend Vulkan native belum mencapai target render PES yang stabil.
3. Jangan menyebut Vulkan native berhasil hanya karena CI build berhasil. Bedakan compile, NRO launch, API initialization, present, dan hasil visual.
4. Jangan mengulang tes yang sudah lulus kecuali ada perubahan yang membuat tes tersebut relevan untuk regresi.
5. Setiap kegagalan harus ditelusuri ke fungsi dan tahap yang tepat, diperbaiki pada source, lalu dibangun ulang; jangan hanya mengganti logging atau memindahkan titik gagal.
6. Setelah satu checkpoint lulus, lanjutkan ke checkpoint berikutnya tanpa kembali ke tahap warna/background yang sudah terbukti.
7. Tujuan akhirnya mengikuti arah BO2: aplikasi native Switch dengan Vulkan presenter dan renderer yang nyata. BO2 adalah target arsitektur; implementasi game-specific tetap harus sesuai PES/Xenos.

### 8.6 Pemisahan catatan progres NXVK dan Vulkan

- **NXVK:** catat hanya hasil historis, commit, workflow, dan artefak yang dipertahankan. Status tetap dihentikan/cadangan.
- **Vulkan native:** catat audit BO2, port source, perubahan dependency/build, hasil CI, log perangkat, dan bukti visual di bagian tersendiri. Jangan gabungkan hasil NXVK lama sebagai bukti keberhasilan Vulkan native.
- `presenter.cpp` kini membersihkan handle `g.images` saat swapchain lama dihancurkan dan ketika enumerasi image swapchain baru gagal; ini mencegah daftar image menyimpan handle yang sudah tidak valid saat resize/recreate. Source commit `e69b540f6db57a1eda41782b975619ddf6d6d216`; CI run `42866248741` selesai **success**.
- Run `42866248741` menghasilkan artefak probe NRO, tetapi SHA-256 NRO `a6078bf57310939d0edaf3b395a0978946332762fb4f4589179f50773ebe8ef3` identik dengan probe tahap 2 sebelumnya. Karena isi probe tidak berubah, artefak ini bukan checkpoint baru untuk diuji ulang di Switch.
- Enumerasi Vulkan pada presenter diperkeras: daftar instance extension, physical device, queue family, surface format, dan swapchain image menggunakan pola count/data dengan retry terbatas untuk `VK_INCOMPLETE`; kegagalan query surface-support kini dicatat dan tidak dianggap sebagai queue yang valid.
- Ini memperbaiki ketahanan enumerasi, tetapi belum memecah ownership instance/device menjadi kelas terpisah seperti BO2. Belum ada klaim full-link PES, startup PES, atau hasil render game.

#### Vulkan/BO2 architecture progress

The active Switch path is being reorganized toward BO2's provider/device/presenter boundaries. The first PES-owned instance-provider boundary now lives in `runtime/gpu/vulkan/provider.h/.cpp`; `presenter.cpp` delegates instance creation and teardown to it while retaining VI surface, device selection, swapchain and presentation. The first extraction passed the Switch SDK compile gate: 25 Vulkan runtime translation units compiled, with only the two PPC-generated translation units deferred. The standalone probe NRO is byte-identical to the previous stage, so it is not a new hardware-test checkpoint. It does not establish full PES linking, physical Vulkan device creation, or game rendering. NXVK source remains preserved as a separate legacy backup.

#### Update Provider/Device extraction (2026-11-11)

- `provider.cpp/.h` kini memiliki tiga batas eksplisit: instance create/destroy dan dispatch/validation; physical-device serta queue-family selection dengan surface milik caller; logical-device creation untuk Presenter termasuk optional `VK_KHR_present_id`/`VK_KHR_present_wait` feature chain.
- `presenter.cpp` mendelegasikan pembuatan logical device ke Provider. Pemeriksaan swapchain dispatch Switch dan pemuatan `vkWaitForPresentKHR` tetap berada di Presenter karena keduanya bagian WSI/presentation.
- Workflow final pada commit `dd6faa3c1011586177736e50d911a4244f0552cd`, run `42869421006`, **success**. Compile gate menghasilkan **25 Vulkan runtime translation units compiled; 2 deferred** (`renderer_draw.cpp`, `renderer_resolve.cpp`) karena memerlukan private XenonRecomp output. Probe NRO berhasil di-link dan dipaketkan.
- Artefak run `42869421006` ID `13788841794` diperiksa. SHA-256 ZIP `f13218ba55c82c7090971d7a0f7401feb98a784e6821ddc1f6cda6c5c3f8a597`; SHA-256 NRO `a6078bf57310939d0edaf3b395a0978946332762fb4f4589179f50773ebe8ef3`, masih identik dengan probe tahap 2. Tidak perlu uji fisik ulang.
- Satu run antara (`42869404449`) gagal karena commit provider.cpp berjalan sebelum header deklarasi tiba pada branch; run final setelah header dan presenter commit (`42869421006`) sukses. Tidak ada error kompilasi tersisa pada commit final.
- Batas yang belum selesai: pipeline-global `vk::pipeline::CreateDevice` masih mengelola feature policy dan dispatch device bersama; belum ada class `VulkanDevice` mandiri. Full PES link, physical Switch API initialization, triangle, dan PES scene rendering tetap belum terbukti.

### Vulkan provider/device lifecycle update (2026-11-11)

- `provider::CreateLogicalDevice` now performs the raw `vkCreateDevice` call, loads device dispatch for the dynamic-loader configuration, retrieves the requested queue, and cleans up the device/dispatch if queue retrieval fails.
- `pipeline::CreateDevice` retains GPU feature/extension policy, optional global queue-priority negotiation and retry, and renderer-specific capability selection. This is an intentional intermediate boundary, not a standalone `VulkanDevice` class.
- Owned headless-device teardown now destroys `VkDevice` before forgetting dynamic device dispatch, preserving the destroy function pointer until it has been called.
- SDK workflow run [42875642739](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42875642739) on commit `db8a50ef4e84949ed3162ab5c4976e7aa81714e6` completed successfully: 25 Vulkan runtime translation units compiled; 2 remain deferred because private generated PPC output is unavailable; the standalone static BO2 Mesa SDK probe NRO linked and packaged. This is partial compile validation, not a full PES link or physical-device/game-render test.
- The probe NRO is still the same diagnostic program and is not a new hardware-test checkpoint. No repeated Switch test is requested.


### Provider boundary update — headless and device lifecycle (2026-11-11)

- Provider now owns both presentation and headless instance creation, physical-device enumeration/selection, graphics/present queue-family selection, device-extension queries, raw logical-device creation, device dispatch loading, queue retrieval, and instance/device destruction.
- Headless selection verifies that a candidate actually has a non-empty graphics queue before preferring it; it no longer selects a discrete/integrated device first and then fails if that device has no graphics-capable queue.
- Presenter retains window-system policy: VI surface, swapchain, present timing extensions/features, acquire/submit/present and recreation. Pipeline retains renderer/device feature policy, queue-priority negotiation/fallback, fault reporting and renderer capability state.
- The logical-device destroy path is centralized in Provider for both Presenter and headless Pipeline, so vkDestroyDevice executes while device dispatch remains loaded; dynamic dispatch is then restored to instance-level functions.
- Validation: SDK workflow [42877892242](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42877892242) on commit `b2e34b0a1d8a0d0456966c67e7d9e9fd7a182188` succeeded. It compiled 25 Vulkan runtime translation units, deferred only `renderer_draw.cpp` and `renderer_resolve.cpp` for private generated PPC output, and linked/packaged the static BO2 Mesa probe NRO. The tests workflow [42877901988](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42877901988) also passed.
- This remains partial source validation. It is not a full PES link, Switch Vulkan initialization, or PES scene-render test. The probe NRO is diagnostic and is not a new physical-test request.
- A standalone VulkanDevice capability/ownership object has not yet been extracted; Pipeline still stores renderer-facing capability state. Keep that as the next architecture boundary rather than moving feature policy into Presenter or duplicating it in Provider.


### Provider failure-path hardening (2026-11-11)

- `CreateInstance` now clears its output handle before work and rolls back the just-created instance plus dynamic dispatch if the Switch VI surface entry points are incomplete. This prevents a partially initialized Provider from leaking when Presenter startup aborts.
- Physical-device selection now clears output handles on entry and rejects invalid instance/surface inputs or a missing surface-support entry point. Both presentation and headless selection verify usable queue families.
- `pipeline::CreateDevice` now rejects incomplete arguments, initializes output handles to null, checks that the requested queue family exists and has at least one queue, and avoids constructing a vector range from a null optional extension pointer when no extra extensions are supplied.
- Presenter startup now treats a failed `pipeline::Initialise` as a startup failure on Android, Switch, and SDL; the worker's existing partial-graph teardown then releases the surface/device/instance instead of reporting a running presenter with an unusable renderer pipeline.
- Validation on commit `c98c5a31e2974dbe3642213b2043c5a15a831939`: SDK workflow [42879873577](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42879873577) succeeded; 25 Vulkan runtime translation units compiled, with only `renderer_draw.cpp` and `renderer_resolve.cpp` deferred for private XenonRecomp output; static BO2 Mesa probe NRO linked and uploaded (artifact ID `13793461923`, ZIP SHA-256 `fe538cc3a50e2b6674cc232d74fb8c4bbedf48da6da5532a20e279fadf26bce5`). CTest [42879886281](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42879886281) also passed.
- Validation scope remains partial: this does not establish a full PES link, physical Switch Vulkan initialization, or PES scene rendering. The diagnostic probe does not require another user test.


### Device-scoped fault-dispatch lifetime (2026-11-11)

- The renderer Pipeline's optional `VK_EXT_device_fault` diagnostic dispatch and device handle are now cleared at the beginning of every logical-device creation attempt, preventing a new device that lacks the extension from inheriting a stale pointer from an earlier device.
- Pipeline shutdown clears both values after its cache/resources are released and before the owned device is destroyed (or before control returns to Presenter for destruction of a borrowed device). This preserves the existing ownership split: Pipeline owns renderer resources; Provider owns device destruction; Presenter owns the window/swapchain lifetime.
- This is a targeted lifetime correction, not yet the BO2 `VulkanDevice` extraction. BO2's reference object owns physical-device properties, feature/extension negotiation, enabled device, queue families and dispatch; PES currently keeps renderer capability policy in Pipeline and low-level instance/device lifecycle in Provider. The extraction remains staged to avoid moving feature policy into WSI or changing ownership accidentally.


### Borrowed-device context invalidation (2026-11-11)

- `pipeline::Shutdown` now clears its local instance, physical-device, queue and queue-family copies for both owned headless devices and borrowed Presenter devices. Borrowed handles are not destroyed by Pipeline; they are merely invalidated locally after renderer resources are released, so Pipeline accessors cannot expose stale context after shutdown.
- The ownership contract remains explicit: Pipeline destroys the logical device and instance only when it created the headless context; Presenter remains responsible for its own surface/device/instance teardown.


### Provider logical-device boundary validation (2026-11-11)

- `provider::CreateLogicalDevice` now independently validates its physical-device handle, create-info shape, requested queue-family index, available queue count, and that the create-info actually requests that family before calling the driver. Pipeline still validates its renderer-facing request, while Provider enforces its own low-level boundary instead of relying on one caller's checks.
- This keeps the BO2-style separation intact: Provider owns Vulkan object creation/dispatch lifetime; Pipeline owns feature and extension policy; Presenter owns WSI policy.


### Provider queue-create record validation (2026-11-11)

- Extended the Provider boundary audit beyond the selected queue family: every requested queue-create record must have the correct structure type, nonzero queue count, a priority array, an in-range family index, and a queue count no greater than that family's reported capacity.
- Each requested priority is checked against Vulkan's `[0, 1]` range, duplicate queue-family records are rejected, and the family whose queue Provider returns must actually be included in the create info. Invalid requests fail before `vkCreateDevice`, with output handles left null.
- This is input-contract hardening only. It does not change selected GPU policy, queue priority fallback, feature negotiation, or Presenter ownership. BO2 `VulkanDevice` capability extraction remains a separate future milestone.


### Required Vulkan device-dispatch validation (2026-11-11)

- Dynamic loading now treats every core device entry point used by the runtime as required, while KHR/EXT entry points remain optional at the generic loader boundary and are checked by the feature/WSI paths that enable them.
- Provider refuses to publish a logical device if any required core device function is missing: it destroys the just-created device while instance dispatch is still valid, restores instance-level dispatch, clears the output handle, and returns initialization failure.
- This follows BO2 `VulkanDevice`'s explicit function-table validation instead of merely logging how many symbols were loaded. Switch Presenter still performs its separate required swapchain-dispatch checks.


### Cross-platform swapchain-dispatch gate (2026-11-11)

- Moved the required swapchain entry-point check out of the Switch-only compile guard. Android and SDL dynamic-loader paths now reject a device with missing `VK_KHR_swapchain` commands before attempting swapchain creation or presentation, just as the Switch path already did.
- The generic loader continues to require core device dispatch; the Presenter validates WSI dispatch because swapchain is a presenter-owned extension. This is consistent with BO2's separation of device function availability and presentation responsibilities.


### Swapchain gate scoped to dynamic dispatch (2026-11-11)

- Scoped the cross-platform WSI pointer check to `PES17_VULKAN_DYNAMIC`. Dynamic Switch, Android and SDL loader paths validate the five commands; static-link builds rely on link-time symbol resolution and avoid testing non-null function designators at runtime.


### BO2 VulkanDevice extraction — ownership map (2026-11-11)

The next architectural milestone is deliberately **not** a thin `Device` wrapper. The pinned BO2 `VulkanDevice` groups physical-device identity/properties, supported and enabled features/extensions, logical-device lifetime, device dispatch, queue-family/queue objects, and memory-type information. PES currently distributes those responsibilities:

- `pipeline.cpp::State`: physical/logical device handles, selected queue/family, cached `VkPhysicalDeviceProperties`, device name, renderer feature/format capabilities, and headless-vs-borrowed ownership.
- `provider.cpp`: instance lifecycle, physical-device selection, extension enumeration, logical-device creation/destruction and dynamic device-dispatch load/rollback.
- `presenter.cpp::Presenter`: WSI surface/swapchain, selected present-capable graphics family, and its device/queue handles; the worker stops separately from final teardown so renderer resources can die before the device.
- `renderer.cpp` and `texture_cache.cpp`: each independently query physical-device memory properties and selected physical-device properties; `framegen.cpp` and `upscaler.cpp` also query physical memory properties for allocations.
- `pipeline.h`: exposes opaque context handles and renderer capability getters consumed by renderer/texture code.

Extraction order: (1) centralize physical-device properties, memory properties and queue-family metadata in a real device context; (2) move supported/enabled feature and extension negotiation with the corresponding state; (3) move logical-device handle and dispatch ownership under a single destruction contract; (4) adapt Pipeline and Presenter through typed accessors while preserving borrowed/headless ownership; (5) remove duplicated physical-device queries only after all consumers use the context. The surface/swapchain and present policy stay in Presenter. This mapping is the baseline; no Device object extraction is claimed complete yet.

### Device metadata consumer audit (2026-11-11)

- Audited the first BO2 `VulkanDevice` extraction slice against actual PES call sites. `pipeline.cpp::State` already owns a cached `VkPhysicalDeviceProperties` record, but Renderer and Texture Cache independently query physical-device properties again; Renderer and Texture Cache also each keep a separate copy of `VkPhysicalDeviceMemoryProperties`.
- Frame Generation, Upscaler and Presenter query physical-device memory properties inside image-allocation/resizing paths. This is redundant device metadata access, not a distinct allocation policy: each call feeds the same `vk::util::FindMemory` selector with required memory-property flags.
- This audit establishes the first safe migration target: one device-scoped immutable physical-memory-properties snapshot, populated once per selected physical device and invalidated with the device context. Existing per-subsystem allocation decisions and required memory flags must remain local.
- No code extraction is claimed in this checkpoint. The next implementation must preserve the offline `translate-shader` / `upload-texture` tool builds, which compile selected Vulkan translation units independently of the full runtime.

### BO2 Device memory-type model comparison (2026-11-11)

- Inspected the pinned BO2 `VulkanDevice` header and implementation (`dd189961e8876079087d6f0843af8013bd154277`), not just its class name. BO2 exposes device-scoped `MemoryTypes` bitmasks (`device_local`, `host_visible`, `host_coherent`, `host_cached`) derived once from physical-device memory properties after logical-device creation.
- PES currently retains raw `VkPhysicalDeviceMemoryProperties` in Renderer and Texture Cache, while Frame Generation, Upscaler and Presenter query it locally. The safe first migration should therefore expose a compact device-scoped memory-type capability view (or a typed immutable snapshot) rather than letting each subsystem own a physical-device query.
- Keep per-allocation `memoryTypeBits` filtering: BO2's cached property categories do not eliminate Vulkan's per-resource allowed-type mask. Required flags and allocation failure handling remain with the caller.
- This comparison refines the design only; no BO2 class or memory allocator has been copied wholesale, and no runtime behavior change is claimed.

### Device-scoped physical memory snapshot (2026-11-11)

- Implemented a single physical-device memory-properties snapshot in Pipeline device context. It is captured once after the borrowed or headless device context is selected, exposed through `vk::pipeline::GetMemoryProperties`, and cleared during Pipeline shutdown.
- Renderer and Texture Cache now obtain their memory properties from that device-scoped snapshot. Frame Generation, Upscaler and Presenter no longer issue their own `vkGetPhysicalDeviceMemoryProperties` query; they request a snapshot copy before resource allocation.
- Resource allocation policy remains local: each subsystem still applies its own `memoryTypeBits` and required property flags through the existing `FindMemory` helper. Texture Cache still reads heap sizes from the snapshot for its budget calculation.
- This is the first implemented Device-metadata extraction slice, not a complete VulkanDevice object. CI compilation and tests are required before treating it as validated.

**Validation update:** CTest for `53b464bb8145e24e9499ae519eae948155d4eae5` passed. The Switch BO2 Mesa SDK probe job remains in progress, so this change is not yet marked fully validated.

**Validation completed:** CTest passed and the BO2 Mesa Switch SDK probe job passed for implementation commit `53b464bb8145e24e9499ae519eae948155d4eae5`. The SDK job compiled 25 Vulkan runtime translation units; `renderer_draw.cpp` and `renderer_resolve.cpp` remain deferred because private XenonRecomp-generated PPC output is unavailable. The diagnostic NRO was packaged as artifact `13795401108` (ZIP SHA256 `739048ccefe61e156b403851535e19e5352d8aafa2e568584f88c5aa6eb222b8`). This validates the SDK probe and listed TUs, not a complete PES game link or scene rendering.

### Device-scoped physical properties (2026-11-11)

- Extended the Pipeline device-context snapshot to physical-device properties and exposed a size-checked `vk::pipeline::GetDeviceProperties` accessor.
- Renderer now reads the cached limits for uniform/storage alignment, render scaling and timestamp capability; Texture Cache reads max image dimension from the same snapshot; Presenter diagnostics reads device identity, API and limits from it.
- These consumers no longer issue their own `vkGetPhysicalDeviceProperties` queries. Pipeline remains the sole runtime owner of the cached immutable physical-device property record. Device feature queries remain separate because they have distinct feature-chain/extension requirements.
- CI validation for this follow-up is pending.

**Validation completed for B2.11:** CTest passed and the BO2 Mesa Switch SDK probe passed for implementation commit `f10aece7ae651fc4322f5a2f0be77985058adc19`. The SDK job compiled 25 Vulkan runtime translation units; `renderer_draw.cpp` and `renderer_resolve.cpp` remain deferred because private XenonRecomp-generated PPC output is unavailable. The diagnostic NRO artifact is available at https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42883304861/artifacts/13794483544 (ZIP SHA256 `9f1ca88ed09e33b6c9fffcbae146ded166eb5b1eec7dcf65d33d745fe2674771`). This is not a complete PES game link or scene-rendering validation.

### Device capability snapshot: depth resolve (2026-11-11)

- Moved the `VK_KHR_depth_stencil_resolve` / Vulkan 1.2 sample-zero resolve capability query from Renderer into Pipeline device initialization.
- Pipeline now records `DepthStencilResolveSampleZero()` as a device capability; Renderer consumes that result for its MSAA decision. WSI-specific present feature negotiation remains in Presenter.
- This keeps capability discovery with the selected physical device while leaving the renderer's policy (whether to enable MSAA) in Renderer. CI validation is pending.
