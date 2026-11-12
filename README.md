# PES 2017 — Nintendo Switch Port

**Proyek eksperimen port native PES 2017 dari Xbox 360 ke Nintendo Switch.**

Repositori ini mengembangkan jalur recompilation PowerPC, runtime kompatibilitas Xbox 360, lapisan platform libnx, serta backend grafis Vulkan native mengikuti arsitektur BO2-360-NX. Eksperimen NXVK dihentikan dan dipertahankan sebagai cadangan. Target akhirnya adalah menjalankan PES 2017 sebagai aplikasi homebrew Nintendo Switch (NRO), bukan menjalankan emulator Xbox 360.

> [!WARNING]
> **Status per 11 November 2026: belum playable.** Jalur aktif memakai SDK Mesa statis dari build kit BO2 yang dipatok. CI kini berhasil mengompilasi seluruh 29 translation unit Vulkan (termasuk draw dan resolve), tiga adapter Switch (platform, audio, controller), membangun probe NRO, dan mengonfigurasi target CMake native dengan stand-in PPC sementara yang hanya dipakai CI. Ini belum merupakan kompilasi/link full runtime PES: file PPC hasil XenonRecomp dan manifest XEX privat belum tersedia di CI. Hasil diagnostik GIPA/instance/device pada jalur aktif juga belum tercatat dari konsol fisik. Belum ada bukti scene PES atau gameplay pada jalur aktif.

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
| Vulkan native (jalur aktif) | Probe NRO BO2 Mesa berhasil dibangun; CI mengompilasi 29 TU Vulkan dan tiga adapter Switch serta mengonfigurasi target native CMake | GIPA/instance/device pada konsol, full runtime link, scene PES, dan gameplay belum terkonfirmasi |
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

Arah utama grafis diubah: hentikan pengembangan/integrasi NXVK sebagai backend aktif dan gunakan implementasi Vulkan native dengan pola arsitektur BO2-360-NX. BO2 menjadi referensi utama untuk lifecycle aplikasi, Vulkan instance/device, dispatch fungsi, VI surface, swapchain, presenter, resource, commdan submission, dan present. NXVK beserta source, konfigurasi, dan hasil eksperimennya tetap disimpan pada branch cadangan; jangan dihapus atau dicampur ke jalur Vulkan baru.

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
CMAKE_CC="$(commdan -v clang)" \
CMAKE_CXX="$(commdan -v clang++)" \
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

Konfigurasi full runtime menggunakan toolchain `cmake/switch-toolchain.cmake`, opsi `PES17_SWITCH=ON`, PPC hasil recompilation, manifest XEX yang cocok, dan SDK Mesa Horizon statis hasil build mengikuti BO2. Set `PES17_SWITCH_VULKAN_SDK` atau `MESA_SDK` ke direktori `opt/devkitpro/portlibs/switch` hasil instalasi Mesa. Opsi `PES17_SWITCH_USE_LEGACY_NXVK=ON` hanya untuk jalur cadangan. Script `build-switch.sh` memeriksa SDK aktif (header Vulkan, `libvulkan.a`, `libzstd.a`, serta arsip devkitPro) sebelum menjalankan CMake dan menghasilkan NRO.

Contoh setelah `build.sh` berhasil membuat `ppc/` dari XEX milik sendiri:

```sh
export DEVKITPRO=/opt/devkitpro
export PES17_SWITCH_VULKAN_SDK=/opt/devkitpro/portlibs/switch
./build-switch.sh
```

Letakkan `build-switch/pes17.nro` di SD card sebagai `switch/PES2017/pes17.nro`. Salin XEX yang sama dengan yang dipakai saat recompilation beserta seluruh data game hasil ekstraksi ke `sdmc:/switch/PES2017/game/`; runtime memverifikasi SHA-256 `default.xex` terhadap manifest PPC sebelum menjalankan entry point. SDK probe CI memakai build kit BO2 rilis yang dipatok; validasi konfigurasi CMake dan kompilasi adapter bukan bukti full-game link atau gameplay.

## 7. Otomasi GitHub Actions

Workflow yang berada di repositori:

| Workflow | Fungsi | Batas pembuktian |
|---|---|---|
| `main.yml` | Test otomatis di GitHub Actions | Menguji test suite, bukan menjalankan game |
| `switch-nro.yml` | Build dan verifikasi bootstrap libnx NRO | Membuktikan bootstrap dapat dikompilasi dan dipaketkan |
| `switch-nvk-spike.yml` | Workflow historis NXVK, manual-hanya | Tidak berjalan otomatis dan bukan workflow validasi backend aktif |


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
- `sdk/src/ui/vulkan/vulkan_device.cpp` — instance, perangkat fisik, perangkat logis, queue, dan pemuatan fungsi.
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
| V2. Vulkan native foundation | Ekstrak loader/entrypoint Vulkan dan instance/device dispatch menjadi komponen berorientasi objek mengikuti pola BO2; buat pemilihan perangkat fisik, keluarga antrean, perangkat logis, dan lifecycle cleanup. | Instance/device memiliki ownership dan dispatch terpisah seperti BO2; init NRO berhasil dengan log per tahap. | **Sebagian — entrypoint publik `vkGetInstanceProcAddr` diarahkan ke `libvulkan.a`; provider kini memiliki instance lifecycle dan physical-device selection, serta factory logical-device untuk presenter; pipeline-global device policy tetap dipakai** |
| V3. VI surface dan swapchain | Port pola BO2 untuk VI surface, capability/format, swapchain, image enumeration, acquire, synchronization, submit, dan present. | Frame dipresentasikan stabil pada Switch fisik; log per tahap lengkap. | **Belum dikerjakan** |
| V4. Render target dan framebuffer | Implementasikan image/memory/view, render pass atau dynamic rendering sesuai dukungan, framebuffer, dan masa hidup resource dengan dispatch yang benar. | Pembuatan resource dan framebuffer sukses; tidak ada null dispatch atau crash. | **Belum dikerjakan** |
| V5. Shader, pipeline, dan draw | Buat shader vertex/fragment sederhana, layout pipeline, graphics pipeline, viewport/scissor, dan `vkCmdDraw(3,1,0,0)`. | Segitiga RGB benar-benar terlihat di layar Switch; log pipeline, draw, submit, dan present sukses. | **Belum dikerjakan** |
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
- `switch/mesa/vulkan_link_probe.cpp` diperluas: GIPA publik, versi API, `vkCreateInstance`, enumerasi perangkat fisik, dan nama GPU.
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
- Enumerasi Vulkan pada presenter diperkeras: daftar instance extension, perangkat fisik, keluarga antrean, surface format, dan swapchain image menggunakan pola count/data dengan retry terbatas untuk `VK_INCOMPLETE`; kegagalan query surface-support kini dicatat dan tidak dianggap sebagai queue yang valid.
- Ini memperbaiki ketahanan enumerasi, tetapi belum memecah ownership instance/device menjadi kelas terpisah seperti BO2. Belum ada klaim full-link PES, startup PES, atau hasil render game.

#### Progres arsitektur Vulkan/BO2

Jalur Switch aktif sedang ditata ulang agar mengikuti batas provider/device/presenter milik BO2. Batas instance-provider pertama yang dimiliki PES kini berada di `runtime/gpu/vulkan/provider.h/.cpp`; `presenter.cpp` menyerahkan pembuatan dan penghentian instance kepada komponen tersebut, sementara tetap menangani VI surface, pemilihan device, swapchain, dan presentasi. Ekstraksi pertama lolos gerbang kompilasi SDK Switch: 25 translation unit runtime Vulkan berhasil dikompilasi, sedangkan hanya dua translation unit yang bergantung pada PPC hasil generate ditunda. NRO probe mandiri identik byte demi byte dengan tahap sebelumnya sehingga bukan checkpoint pengujian perangkat keras yang baru. Hasil ini tidak membuktikan linking PES penuh, pembuatan perangkat fisik Vulkan, atau rendering game. Source NXVK tetap dipertahankan sebagai cadangan legacy terpisah.

#### Pembaruan ekstraksi Provider/Device (2026-11-11)

- `provider.cpp/.h` kini memiliki tiga batas eksplisit: instance create/destroy dan dispatch/validation; physical-device serta queue-family selection dengan surface milik caller; logical-pembuatan perangkat untuk Presenter termasuk opsional `VK_KHR_present_id`/`VK_KHR_present_wait` feature chain.
- `presenter.cpp` mendelegasikan pembuatan perangkat logis ke Provider. Pemeriksaan swapchain dispatch Switch dan pemuatan `vkWaitForPresentKHR` tetap berada di Presenter karena keduanya bagian WSI/presentation.
- Workflow final pada commit `dd6faa3c1011586177736e50d911a4244f0552cd`, run `42869421006`, **success**. Compile gate menghasilkan **25 Vulkan runtime translation units compiled; 2 deferred** (`renderer_draw.cpp`, `renderer_resolve.cpp`) karena memerlukan private XenonRecomp output. Probe NRO berhasil di-link dan dipaketkan.
- Artefak run `42869421006` ID `13788841794` diperiksa. SHA-256 ZIP `f13218ba55c82c7090971d7a0f7401feb98a784e6821ddc1f6cda6c5c3f8a597`; SHA-256 NRO `a6078bf57310939d0edaf3b395a0978946332762fb4f4589179f50773ebe8ef3`, masih identik dengan probe tahap 2. Tidak perlu uji fisik ulang.
- Satu run antara (`42869404449`) gagal karena commit provider.cpp berjalan sebelum header deklarasi tiba pada branch; run final setelah header dan presenter commit (`42869421006`) sukses. Tidak ada error kompilasi tersisa pada commit final.
- Batas yang belum selesai: pipeline-global `vk::pipeline::CreateDevice` masih mengelola feature policy dan dispatch device bersama; belum ada class `VulkanDevice` mandiri. Full PES link, physical Switch API initialization, triangle, dan PES rendering scene tetap belum terbukti.

### Pembaruan siklus hidup Vulkan Provider/Device (2026-11-11)

- `provider::CreateLogicalDevice` kini menjalankan pemanggilan langsung `vkCreateDevice`, memuat device dispatch untuk konfigurasi dynamic-loader, mengambil queue yang diminta, serta membersihkan device/dispatch jika pengambilan queue gagal.
- `pipeline::CreateDevice` tetap menangani kebijakan fitur/ekstensi GPU, negosiasi dan percobaan ulang prioritas queue global yang bersifat opsional, serta pemilihan kapabilitas khusus renderer. Ini merupakan batas peralihan yang disengaja, bukan kelas `VulkanDevice` mandiri.
- Penghentian headless-device yang dimiliki sendiri kini menghancurkan `VkDevice` sebelum melepas dynamic device dispatch, sehingga pointer fungsi penghancur tetap tersedia sampai pemanggilannya selesai.
- SDK workflow run [42875642739](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42875642739) on commit `db8a50ef4e84949ed3162ab5c4976e7aa81714e6` completed successfully: 25 Vulkan runtime translation units compiled; 2 masih ditunda because private generated PPC output is unavailable; the standalone static BO2 Mesa SDK probe NRO linked dan packaged. This is partial compile validation, not a full PES link or physical-device/game-render test.
- NRO probe masih merupakan program diagnostik yang sama dan bukan checkpoint pengujian perangkat keras yang baru. Pengujian Switch tidak perlu diulang.


### Pembaruan batas Provider — siklus hidup headless dan device (2026-11-11)

- Provider kini memiliki tanggung jawab pembuatan instance untuk jalur presentasi maupun headless, enumerasi/pemilihan physical-device, pemilihan queue-family grafis/presentasi, pemeriksaan ekstensi device, pembuatan langsung logical-device, pemuatan device dispatch, pengambilan queue, serta penghancuran instance/device.
- Pemilihan headless memverifikasi bahwa kandidat benar-benar memiliki graphics queue yang tidak kosong sebelum memilihnya; sistem tidak lagi memilih device diskret/terintegrasi terlebih dahulu lalu gagal karena device tersebut tidak memiliki queue yang mendukung grafis.
- Presenter tetap menangani kebijakan window-system: VI surface, swapchain, ekstensi/fitur waktu presentasi, acquire/submit/present, dan pembuatan ulang. Pipeline tetap menangani kebijakan fitur renderer/device, negosiasi/fallback prioritas queue, pelaporan fault, dan status kapabilitas renderer.
- Jalur penghancuran logical-device dipusatkan di Provider untuk Presenter maupun Pipeline headless, sehingga `vkDestroyDevice` dijalankan ketika device dispatch masih dimuat; setelah itu dynamic dispatch dikembalikan ke fungsi tingkat instance.
- Validation: SDK workflow [42877892242](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42877892242) on commit `b2e34b0a1d8a0d0456966c67e7d9e9fd7a182188` succeeded. It compiled 25 Vulkan runtime translation units, deferred hanya `renderer_draw.cpp` dan `renderer_resolve.cpp` untuk private generated PPC output, dan linked/packaged the static BO2 Mesa probe NRO. The tests workflow [42877901988](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42877901988) also passed.
- Hasil ini tetap merupakan validasi source secara parsial. Ini bukan full-link PES, inisialisasi Vulkan pada Switch, atau pengujian rendering scene PES. NRO probe bersifat diagnostik dan bukan permintaan untuk melakukan pengujian fisik baru.
- Objek kapabilitas/kepemilikan `VulkanDevice` yang mandiri belum diekstrak; Pipeline masih menyimpan status kapabilitas yang digunakan renderer. Jadikan hal ini batas arsitektur berikutnya, bukan memindahkan kebijakan fitur ke Presenter atau menggandakannya di Provider.


### Penguatan jalur kegagalan Provider (2026-11-11)

- `CreateInstance` kini clears its output handle sebelum work dan rolls back the just-created instance plus dynamic dispatch if the Switch VI surface entry points are incomplete. Hal ini mencegah a partially initialized Provider dari leaking when Presenter startup aborts.
- Physical-device selection kini clears output handles on entry dan rejects invalid instance/surface inputs or a missing surface-support entry point. Pemilihan jalur presentasi maupun headless verify usable keluarga antrean.
- `pipeline::CreateDevice` kini rejects incomplete arguments, initializes output handles to null, checks that the requested keluarga antrean exists dan has at least one queue, dan avoids constructing a vector range dari a null opsional extension pointer when no extra extensions are supplied.
- Presenter startup kini treats a failed `pipeline::Initialise` as a startup failure on Android, Switch, dan SDL; the worker's existing partial-graph teardown then releases the surface/device/instance alih-alih reporting a running presenter dengan an unusable renderer pipeline.
- Validation on commit `c98c5a31e2974dbe3642213b2043c5a15a831939`: SDK workflow [42879873577](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42879873577) succeeded; 25 Vulkan runtime translation units compiled, dengan hanya `renderer_draw.cpp` dan `renderer_resolve.cpp` deferred untuk private XenonRecomp output; static BO2 Mesa probe NRO linked dan uploaded (artifact ID `13793461923`, ZIP SHA-256 `fe538cc3a50e2b6674cc232d74fb8c4bbedf48da6da5532a20e279fadf26bce5`). CTest [42879886281](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42879886281) also passed.
- Validation scope masih partial: this does not establish a full PES link, physical Switch Vulkan initialization, or PES rendering scene. The diagnostic probe does not require another user test.


### Masa hidup fault-dispatch pada lingkup Device (2026-11-11)

- The renderer Pipeline's opsional `VK_EXT_device_fault` diagnostic dispatch dan device handle are kini cleared at the beginning of every logical-pembuatan perangkat attempt, preventing a new device that lacks the extension dari inheriting a stale pointer dari an earlier device.
- Pipeline shutdown clears both values setelah its cache/resources are released dan sebelum the owned device is destroyed (or sebelum control returns to Presenter untuk destruction of a borrowed device). This preserves the existing ownership split: Pipeline memiliki renderer resources; Provider owns device destruction; Presenter memiliki the window/swapchain lifetime.
- This is a targeted lifetime correction, belum the BO2 `VulkanDevice` extraction. BO2's reference object owns physical-device properties, feature/extension negotiation, enabled device, keluarga antrean dan dispatch; PES currently keeps renderer capability policy in Pipeline dan low-level instance/device lifecycle in Provider. The extraction masih staged to avoid moving feature policy into WSI or changing ownership accidentally.


### Invalidasi konteks borrowed-device (2026-11-11)

- `pipeline::Shutdown` kini clears its local instance, physical-device, queue dan queue-family copies untuk both owned headless devices dan borrowed Presenter devices. Borrowed handles are not destroyed by Pipeline; they are merely invalidated locally setelah renderer resources are released, so Pipeline accessors cannot expose stale context setelah shutdown.
- The ownership contract masih explicit: Pipeline destroys the perangkat logis dan instance hanya when it created the headless context; Presenter masih responsible untuk its own surface/device/instance teardown.


### Validasi batas logical-device Provider (2026-11-11)

- `provider::CreateLogicalDevice` kini independently validates its physical-device handle, create-info shape, requested queue-family index, tersedia queue count, dan that the create-info actually requests that family sebelum calling the driver. Pipeline still validates its renderer-facing request, while Provider enforces its own low-level boundary alih-alih relying on one caller's checks.
- This keeps the BO2-style separation intact: Provider owns Vulkan object creation/dispatch lifetime; Pipeline memiliki feature dan extension policy; Presenter memiliki WSI policy.


### Validasi record pembuatan queue Provider (2026-11-11)

- Extended the Provider boundary audit beyond the yang dipilih keluarga antrean: every requested queue-create record must have the correct structure type, nonzero queue count, a priority array, an in-range family index, dan a queue count no greater than that family's reported capacity.
- Each requested priority is checked against Vulkan's `[0, 1]` range, duplikat queue-family records are rejected, dan the family whose queue Provider returns must actually be included in the create info. Invalid requests fail sebelum `vkCreateDevice`, dengan output handles left null.
- This is input-contract hardening only. It does not change yang dipilih GPU policy, queue priority fallback, feature negotiation, or Presenter ownership. BO2 `VulkanDevice` capability extraction masih a separate future milestone.


### Validasi device-dispatch Vulkan yang diwajibkan (2026-11-11)

- Dynamic loading kini treats every core device entry point used by the runtime as required, while KHR/EXT entry points remain opsional at the generic loader boundary dan are checked by the feature/WSI paths that enable them.
- Provider refuses to publish a perangkat logis if any diperlukan core device function is missing: it destroys the just-created device while instance dispatch is still valid, restores instance-level dispatch, clears the output handle, dan returns initialization failure.
- This follows BO2 `VulkanDevice`'s explicit function-table validation alih-alih merely logging how many symbols were loaded. Switch Presenter still performs its separate diperlukan swapchain-dispatch checks.


### Gerbang swapchain-dispatch lintas platform (2026-11-11)

- Moved the diperlukan swapchain entry-point check out of the Switch-hanya compile guard. Android dan SDL dynamic-loader paths kini reject a device dengan missing `VK_KHR_swapchain` commands sebelum mencoba swapchain creation or presentation, just as the Switch path already did.
- The generic loader continues to require core device dispatch; the Presenter validates WSI dispatch because swapchain is a presenter-owned extension. This is consistent dengan BO2's separation of device function availability dan presentation responsibilities.


### Gerbang swapchain yang dibatasi pada dynamic dispatch (2026-11-11)

- Scoped the cross-platform WSI pointer check to `PES17_VULKAN_DYNAMIC`. Dynamic Switch, Android dan SDL loader paths validate the five commands; static-link builds rely on link-time symbol resolution dan avoid testing non-null function designators at runtime.


### Ekstraksi BO2 VulkanDevice — peta kepemilikan (2026-11-11)

Tahapan arsitektur berikutnya sengaja **bukan** sekadar wrapper `Device` yang tipis. `VulkanDevice` BO2 yang versinya dipatok mengelompokkan physical-device identity/properties, didukung dan enabled features/extensions, logical-device lifetime, device dispatch, queue-family/queue objects, dan memory-type information. Saat ini PES membagi tanggung jawab tersebut sebagai berikut:

- `pipeline.cpp::State`: physical/perangkat logis handles, yang dipilih queue/family, tersimpan `VkPhysicalDeviceProperties`, device name, renderer feature/format capabilities, dan headless-vs-borrowed ownership.
- `provider.cpp`: instance lifecycle, physical-device selection, extension enumeration, logical-pembuatan perangkat/destruction dan dynamic device-dispatch load/rollback.
- `presenter.cpp::Presenter`: WSI surface/swapchain, yang dipilih present-capable graphics family, dan its device/queue handles; the worker stops separately dari final teardown so renderer resources can die sebelum the device.
- `renderer.cpp` dan `texture_cache.cpp`: each independently query physical-device memory properties dan yang dipilih physical-device properties; `framegen.cpp` dan `upscaler.cpp` also query physical memory properties untuk allocations.
- `pipeline.h`: exposes opaque context handles dan renderer capability getters consumed by renderer/texture code.

Extraction order: (1) centralize physical-device properties, memory properties dan queue-family metadata in a real device context; (2) move supported/enabled feature dan extension negotiation dengan the corresponding state; (3) move logical-device handle dan dispatch ownership under a single destruction contract; (4) adapt Pipeline dan Presenter through typed accessors while preserving borrowed/headless ownership; (5) remove duplicated physical-device queries hanya setelah all consumers use the context. The surface/swapchain dan present policy stay in Presenter. This mapping is the baseline; no Device object extraction is claimed complete yet.

### Audit konsumen metadata Device (2026-11-11)

- Mengaudit the first BO2 `VulkanDevice` extraction slice against sebenarnya PES call sites. `pipeline.cpp::State` already owns a tersimpan `VkPhysicalDeviceProperties` record, but Renderer dan Texture Cache independently query physical-device properties again; Renderer dan Texture Cache also each keep a separate copy of `VkPhysicalDeviceMemoryProperties`.
- Frame Generation, Upscaler dan Presenter query physical-device memory properties inside image-allocation/resizing paths. This is redundant device metadata access, not a distinct allocation policy: each call feeds the same `vk::util::FindMemory` selector dengan diperlukan memory-property flags.
- This audit establishes the first safe migration target: one device-scoped immutable physical-memory-properties snapshot, populated satu kali per yang dipilih perangkat fisik dan invalidated dengan the device context. Existing per-subsystem allocation decisions dan diperlukan memory flags must remain local.
- No code extraction is claimed in this checkpoint. The next implementation must preserve the offline `translate-shader` / `upload-texture` tool builds, which compile yang dipilih Vulkan translation units independently of the full runtime.

### Perbandingan model tipe memori Device BO2 (2026-11-11)

- Inspected the pinned BO2 `VulkanDevice` header dan implementation (`dd189961e8876079087d6f0843af8013bd154277`), not just its class name. BO2 exposes device-scoped `MemoryTypes` bitmasks (`device_local`, `host_visible`, `host_coherent`, `host_cached`) derived satu kali dari physical-device memory properties setelah logical-pembuatan perangkat.
- PES currently retains raw `VkPhysicalDeviceMemoryProperties` in Renderer dan Texture Cache, while Frame Generation, Upscaler dan Presenter query it locally. The safe first migration should therefore expose a compact device-scoped memory-type capability view (or a typed immutable snapshot) rather than letting each subsystem own a physical-device query.
- Pertahankan per-allocation `memoryTypeBits` filtering: BO2's tersimpan property categories do not eliminate Vulkan's per-resource allowed-type mask. Required flags dan allocation failure handling remain dengan the caller.
- This comparison refines the design only; no BO2 class or memory allocator telah copied wholesale, dan no runtime behavior change is claimed.

### Snapshot memori fisik pada lingkup Device (2026-11-11)

- Implemented a single physical-device memory-properties snapshot in Pipeline device context. It is captured satu kali setelah the borrowed or headless device context is selected, exposed through `vk::pipeline::GetMemoryProperties`, dan cleared during Pipeline shutdown.
- Renderer dan Texture Cache kini obtain their memory properties dari that device-scoped snapshot. Frame Generation, Upscaler dan Presenter no longer issue their own `vkGetPhysicalDeviceMemoryProperties` query; they request a snapshot copy sebelum resource allocation.
- Resource allocation policy masih local: each subsystem still applies its own `memoryTypeBits` dan diperlukan property flags through the existing `FindMemory` helper. Texture Cache still reads heap sizes dari the snapshot untuk its budget calculation.
- This is the first implemented Device-metadata extraction slice, not a complete VulkanDevice object. CI compilation dan tests are diperlukan sebelum treating it as validated.

**Validation update:** CTest untuk `53b464bb8145e24e9499ae519eae948155d4eae5` passed. The Switch BO2 Mesa SDK probe job masih in progress, so this change is belum marked fully validated.

**Validation completed:** CTest passed dan the BO2 Mesa Switch SDK probe job passed untuk implementation commit `53b464bb8145e24e9499ae519eae948155d4eae5`. Job SDK berhasil mengompilasi 25 Vulkan runtime translation units; `renderer_draw.cpp` dan `renderer_resolve.cpp` masih ditunda because output PPC privat hasil XenonRecomp is unavailable. The diagnostic NRO was packaged as artifact `13795401108` (ZIP SHA256 `739048ccefe61e156b403851535e19e5352d8aafa2e568584f88c5aa6eb222b8`). Hal ini memvalidasi the SDK probe dan listed TUs, not a complete PES game link or rendering scene.

### Properti fisik pada lingkup Device (2026-11-11)

- Extended the Pipeline device-context snapshot to physical-device properties dan exposed a size-checked `vk::pipeline::GetDeviceProperties` accessor.
- Renderer kini reads the tersimpan limits untuk uniform/storage alignment, render scaling dan timestamp capability; Texture Cache reads max image dimension dari the same snapshot; Presenter diagnostics reads device identity, API dan limits dari it.
- These consumers no longer issue their own `vkGetPhysicalDeviceProperties` queries. Pipeline masih the sole runtime owner of the tersimpan immutable physical-device property record. Device feature queries remain separate because they have distinct feature-chain/extension requirements.
- CI validation untuk this follow-up is pending.

**Validation completed untuk B2.11:** CTest passed dan the BO2 Mesa Switch SDK probe passed untuk implementation commit `f10aece7ae651fc4322f5a2f0be77985058adc19`. Job SDK berhasil mengompilasi 25 Vulkan runtime translation units; `renderer_draw.cpp` dan `renderer_resolve.cpp` masih ditunda because output PPC privat hasil XenonRecomp is unavailable. The diagnostic NRO artifact is tersedia at https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42883304861/artifacts/13794483544 (ZIP SHA256 `9f1ca88ed09e33b6c9fffcbae146ded166eb5b1eec7dcf65d33d745fe2674771`). Ini bukan a complete PES game link or scene-rendering validation.

### Snapshot kapabilitas Device: depth resolve (2026-11-11)

- Moved the `VK_KHR_depth_stencil_resolve` / Vulkan 1.2 sample-zero resolve capability query dari Renderer into Pipeline device initialization.
- Pipeline kini records `DepthStencilResolveSampleZero()` as a device capability; Renderer consumes that result untuk its MSAA decision. WSI-specific present feature negotiation masih in Presenter.
- This keeps capability discovery dengan the yang dipilih perangkat fisik while leaving the renderer's policy (whether to enable MSAA) in Renderer. CI validation is pending.

### Snapshot kapabilitas Device: fitur fisik inti (2026-11-11)

- Pipeline kini caches the yang dipilih perangkat fisik's core `VkPhysicalDeviceFeatures` alongside physical-device properties dan memory properties, dan exposes a size-checked `GetPhysicalDeviceFeatures` accessor.
- Presenter diagnostics consumes the tersimpan supported-feature record alih-alih querying the perangkat fisik again. Feature-chain negotiation untuk extension-specific features masih at the subsystem that requests it.
- This change is committed; CTest dan Switch SDK validation are pending.

**Validation completed untuk B2.12:** CTest dan the BO2 Mesa Switch SDK probe passed untuk `6404803a77719e7edb629f79866df4e4c5ee94ce`. SDK result: 25 Vulkan runtime TUs compiled; `renderer_draw.cpp` dan `renderer_resolve.cpp` deferred untuk output PPC privat hasil XenonRecomp. Diagnostic NRO artifact `13795207426`, ZIP SHA256 `910b5312d29fa7b9a2d22012d061e0c73b75a477657ea18cdf26b1259deb60aa`. Hal ini tidak validate link game PES secara penuhing or rendering scene.

**Validation completed untuk B2.13:** CTest dan the BO2 Mesa Switch SDK probe passed untuk `ec82f9e71fc92924ec587ed7d84107cc4a9ab0fd`. SDK result: 25 Vulkan runtime TUs compiled; `renderer_draw.cpp` dan `renderer_resolve.cpp` masih ditunda because output PPC privat hasil XenonRecomp is unavailable. Diagnostic NRO artifact `13795297981`, ZIP SHA256 `ab5e114ca6dfc542b66a1be9c1fe1a8f5e27f67e5cb1a73556ea27e6c633e942`. No link game PES secara penuh or rendering scene is claimed.

### Penggunaan ulang snapshot Device saat inisialisasi logical-device (2026-11-11)

- `CreateDevice` kini records the core physical properties dan didukung core features it already queried untuk device negotiation. `Pipeline::Initialise` reuses those records rather than querying the same perangkat fisik a second time.
- Direct borrowed-context initialization masih supported: if no snapshot exists (the caller did not use `pipeline::CreateDevice`), Pipeline queries dan fills the missing records itself.
- New creation attempts invalidate the prior property/feature readiness flags sebelum probing a new perangkat fisik; shutdown clears all snapshots. This avoids stale metadata crossing device lifetimes.
- Validation pending.

### Pengaman kepemilikan physical-handle pada snapshot Device (2026-11-11)

- Bound the tersimpan physical properties/features to the exact `VkPhysicalDevice` handle they describe. A new CreateDevice attempt invalidates the prior association; Pipeline::Initialise refreshes the snapshots if a directly borrowed context supplies a different perangkat fisik.
- Shutdown clears the association. Hal ini mencegah tersimpan physical-device data dari leaking across device changes while retaining the fast reuse path untuk the same yang dipilih perangkat fisik.
- B2.14 validation is still running; this follow-up is pending CI as well.

**Validation completed untuk B2.14:** CTest dan the BO2 Mesa Switch SDK probe passed untuk `2723795a6f7ec90c041467947f01e3db5f584d74`. SDK result: 25 Vulkan runtime TUs compiled; `renderer_draw.cpp` dan `renderer_resolve.cpp` deferred untuk output PPC privat hasil XenonRecomp. Diagnostic NRO artifact `13794259180`, ZIP SHA256 `e2d3020f890252399558751792797faef6bdd882a62d593a3cccf8c2a46716fb`. Ini bukan full-game link or scene-rendering validation.

**Validation completed untuk B2.15:** CTest dan the BO2 Mesa Switch SDK probe passed untuk `147cad0eb0c9ed2f911a548656d5003973e0d98f`. SDK result: 25 Vulkan runtime TUs compiled; `renderer_draw.cpp` dan `renderer_resolve.cpp` deferred untuk output PPC privat hasil XenonRecomp. Diagnostic NRO artifact `13795741590`, ZIP SHA256 `487127e7a5027e117d2a6a8d89e646689599d0e12247db1244196e017951d477`. Hal ini tidak validate full-game linking or sebenarnya rendering scene.

### Isolasi status kegagalan saat inisialisasi Device (2026-11-11)

- Menambahkan a single reset path untuk physical-device-derived Pipeline state: properties, memory properties, core features, format-derived BC/ASTC support, depth resolve, rendering capabilities, anisotropy dan device identity.
- `CreateDevice` kini rejects replacement while a Pipeline device is active, clears previous snapshot/capability state sebelum a fresh attempt, dan clears the attempted device metadata if logical-pembuatan perangkat fails.
- Headless bring-up rollback kini destroys the instance dan clears the complete failed-device snapshot, rather than hanya nulling the physical-device handle.
- CI validation untuk this change is pending.
- Portability refinement: the fixed BC capability array is reset dengan a range-untuk loop, avoiding reliance on `std::begin` header exposure.

### Pemetaan kepemilikan Device BO2 (2026-11-11)

- Compared the pinned BO2 `VulkanDevice` implementation (`sdk/include/rex/ui/vulkan/device.h`, `sdk/src/ui/vulkan/vulkan_device.cpp`) dengan PES2017's `pipeline.cpp` dan Presenter.
- BO2's Device object owns the yang dipilih perangkat fisik, perangkat logis, negotiated properties/features/extensions, device function table, keluarga antrean/queues dan memory-type summary. Provider owns the Device lifetime; Presenter receives it dan retains hanya WSI surface/swapchain/present policy.
- PES2017 currently combines logical-pembuatan perangkat, capability negotiation/snapshots, queue synchronization dan layout pipeline/cache in `vk::pipeline::State`, while Presenter memiliki the window-system device handles dan passes them back as a borrowed tuple. A direct move would risk double ownership dan break the headless path.
- The next extraction is therefore gated on an explicit ownership contract: Provider/Device will own instance + physical/perangkat logis + queue; Presenter will borrow that Device untuk WSI; Pipeline will borrow Device handles but retain descriptor/layout pipeline/cache. Do not mechanically move `CreateDevice` until lifecycle rollback dan both headless/presenting call paths are migrated together.

**B2.16 validation completed:** CTest passed dan the BO2 Mesa Switch SDK probe passed untuk implementation commit `27a9b44e9d4132117f82e3f37c85031ee3c93393`. SDK job compiled 25 Vulkan runtime translation units; `renderer_draw.cpp` dan `renderer_resolve.cpp` masih ditunda because output PPC privat hasil XenonRecomp is unavailable. Diagnostic NRO artifact: https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42894360651/artifacts/13798748685 (ZIP SHA256 `79259f1ce7ab09e32602e5fc431923df95ff1d040bbe55daf2e6737e8a7113c0`). Hal ini memvalidasi the probe, not link game PES secara penuhing or rendering scene.

### Audit masa hidup Presenter dan Pipeline (2026-11-11)

- Memverifikasi shutdown ordering in `gpu::backend::Shutdown`: `StopPresenting` joins the WSI worker first; Renderer dan Texture Cache release their resources next; Pipeline releases descriptor/pipeline-layout/cache state dan clears its borrowed Device handles; hanya then `vk::Stop` calls Presenter `Teardown` to destroy the perangkat logis, surface dan instance.
- Presenter `Worker` failure path calls `Teardown` untuk a partially created WSI/device graph dan reports headless fallback. Normal worker exit does not destroy the device; this preserves the diperlukan two-phase stop/destroy order.
- Hal ini mengonfirmasi the intended borrow boundary: Pipeline tidak boleh destroy Presenter-owned device/instance; Presenter teardown must remain setelah Pipeline resource shutdown. Headless Pipeline-owned device teardown masih separate.

### Batas eksplisit konteks borrowed Device (2026-11-11)

- Menambahkan `runtime/gpu/vulkan/device.h` dengan a non-owning `vk::device::BorrowedContext` that groups instance, physical/perangkat logis, queue dan queue-family handles dan validates the complete tuple.
- Pipeline's initialization API kini accepts either no context (owned headless bring-up) or one explicit borrowed context (Presenter path). The three Presenter platform branches use one helper to pass the same contract.
- This is an ownership-boundary step, belum the BO2 `Device` owner: Presenter masih memiliki the window-path Vulkan handles dan Pipeline hanya borrows them. Validasi CI masih menunggu.

### Objek kepemilikan logical-handle Device (2026-11-11)

- Menambahkan `vk::device::Device`, a non-copyable RAII owner untuk the logical `VkDevice` plus its yang dipilih physical-device, queue dan family identity. `VkInstance` masih owned by Provider/Presenter untuk this transition.
- Presenter adopts the perangkat logis returned by the existing capability negotiation path into this object; its teardown kini releases the Device object setelah Pipeline/renderer resources telah shut down. Pipeline meminjam a `Device` object through `BorrowedContext`, rather than receiving five positional raw handles.
- Menambahkan `device.cpp` to the runtime glob dan both explicit offline-tool source lists. Proses penuh capability negotiation masih berada in Pipeline dan will be migrated in a later step. Validasi CI masih menunggu.
- First SDK compile exposed the provider destroy API's `VkDevice&` contract; the RAII destructor dan failed-adoption rollback kini pass a local lvalue handle dan clear the owned handle setelah destruction. Percobaan awal B2.20 SDK attempt failed at this compile point; the corrected commit is queued untuk CI revalidation.

**B2.20 validation completed:** corrected implementation commit `3aa565024700e5999b0e33ecfd9b2858f49f6240` passed CTest dan the BO2 Mesa Switch SDK probe. Job SDK berhasil mengompilasi 26 Vulkan runtime translation units, termasuk `device.cpp`; `renderer_draw.cpp` dan `renderer_resolve.cpp` masih ditunda untuk output PPC privat hasil XenonRecomp. Diagnostic NRO artifact: https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42895784759/artifacts/13800372412 (ZIP SHA256 `d9dad4840b2c33f78dc0d346a3b94bae83cbff87b604f1d44c9c9784021a53fe`). Percobaan pertama attempt exposed the Provider destroy function's `VkDevice&` signature; the correction passed CI. Hal ini tidak validate a link game PES secara penuh or rendering scene.

### Shutdown Pipeline nonaktif membersihkan metadata inisialisasi yang gagal (2026-11-11)

- `pipeline::Shutdown()` sebelumnya returned immediately when no logical Pipeline device had been adopted. A Presenter can successfully create a Device dan then fail during later WSI bring-up sebelum Pipeline adopts it; the logical Device is subsequently destroyed by Presenter, but Pipeline's earlier snapshot kapabilitas remained cached.
- The no-device shutdown path kini clears device-dispatch pelaporan gangguan state, borrowed handle copies dan all physical-device snapshots/capabilities through `ResetDeviceSnapshot()`. The normal shutdown path kini reuses the same reset helper.
- Validasi CI masih menunggu.

### Presenter menggunakan Device sebagai satu-satunya otoritas logical-handle (2026-11-11)

- Menghapus duplikat raw `VkDevice` field dari Presenter state. All device operations kini resolve the handle through `deviceOwner` (`DeviceHandle()`), dan the Device object's lifetime is the sole authority untuk logical-device destruction.
- Pipeline receives the same owner object through `BorrowedContext`; no raw logical-device tuple is separately tersimpan in Presenter state. Physical device dan queue metadata remain transitional fields pending their next consolidation.
- A mechanical replacement briefly touched the `deviceOwner` identifier; it telah diperbaiki sebelum the validated follow-up commit. Validasi CI masih menunggu.

**B2.21 validation completed:** CTest dan the BO2 Mesa Switch SDK probe passed untuk `5803a69c6d754b592a83d3735055aea6371ce81e`. Probe SDK berhasil mengompilasi 26 Vulkan runtime TUs; two translation unit renderer yang bergantung pada PPC privat masih ditunda. Ini bukan full PES game-link or scene-rendering validation.

### Objek Device menjadi satu-satunya sumber Vulkan-handle Presenter (2026-11-11)

- Menghapus duplicated raw `VkDevice`, `VkPhysicalDevice`, `VkQueue` dan queue-family fields dari Presenter state. The pre-creation selection outputs are kini explicitly named `selectedPhysical` dan `selectedQueueFamily`; satu kali Device is adopted, all device/physical/queue/family reads come dari Device accessors.
- Presenter teardown clears the pre-creation selection fields setelah destroying Device dan WSI objects, preventing stale adapter references setelah shutdown.
- Pipeline receives the Device object through `BorrowedContext`; the instance masih separately owned by Provider/Presenter. Validasi CI masih menunggu.
- Ownership wording corrected: the logical `Device` owns `VkDevice`; Presenter currently retains the `VkInstance` dan uses Provider's create/destroy functions. Provider is belum an owning C++ instance object.

**B2.22 validation completed:** CTest dan the BO2 Mesa Switch SDK probe passed untuk `97632d08aee9598e7abaf90eb0954a8d42969d71`. Job SDK berhasil mengompilasi 26 Vulkan runtime TUs, termasuk the new Device ownership/accessor path; two renderer TUs masih ditunda untuk output PPC privat hasil XenonRecomp. Diagnostic NRO artifact: https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42896857395/artifacts/13799734628 (ZIP SHA256 `f3ab3850f520cb08e64442e2b6fe266212e2fd8a95ea90d32c8db88f907729f5`). No link game PES secara penuh or scene-rendering validation is claimed.

### Kepemilikan Instance RAII oleh Presenter (2026-11-11)

- Menambahkan `vk::instance::Instance`, a non-copyable RAII owner untuk the Vulkan instance. Presenter no longer stores a duplikat raw `VkInstance`; surface creation/destruction dan physical-device selection use `InstanceHandle()` dari the owner.
- `BorrowedContext` kini carries both the owning Instance object dan Device object. Pipeline receives their handles but does not own either on the presentation path.
- Presenter teardown destroys surface, then Device, then Instance. The headless Pipeline path masih memiliki its existing raw instance path dan is intentionally not migrated in this step. Validasi CI masih menunggu.
- Clarified the split: `Instance` owns `VkInstance`; `Device` owns `VkDevice` dan borrows the instance lifetime.

**B2.23 validation completed:** CTest, the libnx homebrew NRO build, dan the BO2 Mesa Switch SDK probe all passed untuk implementation commit `ebf8836f0126687ec268fb9c8857a76d302fe51e`. Probe SDK berhasil mengompilasi 27 Vulkan runtime translation units, termasuk `instance.cpp`; hanya `renderer_draw.cpp` dan `renderer_resolve.cpp` masih ditunda untuk private PPC output. Diagnostic NRO artifact: https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42897472123/artifacts/13800434703 (ZIP SHA256 `870d0761ab0910e8e7b780c10a50a780a76d2046a5689ed52765a0499906ac3c`). This is still not a link game PES secara penuh or scene-rendering validation.

### Pipeline headless kini menggunakan pemilik Device dan Instance RAII yang sama (2026-11-11)

- Mengganti headless path's direct `VkInstance`/`VkDevice` destruction dengan `vk::instance::Instance` dan `vk::device::Device` ownership objects, matching the Presenter path.
- Pipeline stores owners hanya untuk headless bring-up; Presenter-supplied contexts remain borrowed dan are never destroyed by Pipeline. On headless rollback dan normal shutdown, dependent pipeline resources are released first, then Device, then Instance.
- Handle mentah yang disimpan in Pipeline State merupakan alias operasional yang tidak memiliki kepemilikan; objek RAII menjadi otoritas untuk penghancuran. Validasi CI masih menunggu.

**B2.24 validation completed:** CTest dan the BO2 Mesa Switch SDK probe passed untuk `436f3293dd2d4687bbd6f01d7eb882ecebb73595`. Probe SDK berhasil mengompilasi 27 Vulkan runtime TUs; `renderer_draw.cpp` dan `renderer_resolve.cpp` masih ditunda because output PPC privat hasil XenonRecomp is unavailable. Diagnostic NRO artifact: https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42897814184/artifacts/13800529967 (ZIP SHA256 `048b5c0df00748be31a1c86b55d6692c7867b4179eaa279fb86e49bc8fc6a9b0`). Hal ini memvalidasi the diagnostic SDK probe, not proses link PES secara penuh or rendering scene.

### Pengenalan pemilik konteks Provider bergaya BO2 (2026-11-11)

- Menambahkan `vk::provider::Context`, an aggregate RAII owner untuk an `Instance` dan opsional `Device`, dengan deterministic Device-before-Instance destruction.
- Context supports a staged window flow (create presentation-capable Instance → select a kompatibel dengan surface perangkat fisik → create/adopt logical Device) dan a headless selection path. It exposes the owned objects dan their handles untuk Pipeline/Presenter borrowing.
- This commit establishes the owner/API; current Presenter dan Pipeline paths have belum been switched to it. Device capability negotiation still delegates to the existing Pipeline implementation. Validasi CI masih menunggu.

### Presenter kini menyerahkan kepemilikan konteks Vulkan kepada Provider (2026-11-11)

- Presenter State kini owns one `vk::provider::Context` alih-alih separate Instance dan Device owners plus duplikat physical-device/queue-family selection fields.
- Provider Context kini performs kompatibel dengan surface physical-device selection, logical-pembuatan perangkat/adoption, dan Device teardown. Presenter mempertahankan hanya WSI surface/swapchain/frame policy dan obtains handles through Context accessors.
- `BorrowedContext` passes Provider's Instance dan Device objects to Pipeline. Presenter teardown asks Provider to destroy Device setelah swapchain resources, destroys the surface, then releases Provider/Instance. Validasi CI masih menunggu.

### Pipeline headless kini menggunakan Provider Context (2026-11-11)

- Replaced Pipeline's separate headless Instance/Device owners dengan one `vk::provider::Context`, matching the Presenter path.
- Headless Pipeline kini requests a headless Instance, selects a mendukung grafis perangkat fisik, dan asks Provider Context to create/adopt the logical Device. Pipeline meminjam raw handles dari the Provider Context while retaining renderer-facing descriptor layouts/cache.
- Pipeline memiliki the Context hanya in mode tanpa tampilan; mode presentasi continues to borrow Presenter-owned Provider Context. Both paths kini share the same Instance/Device lifetime implementation. Validasi CI masih menunggu.

### Batas migrasi kapabilitas Device yang tersisa (2026-11-11)

- Mengaudit the remaining `pipeline::CreateDevice` implementation against BO2 `VulkanDevice::CreateIfSupported`. Provider Context kini owns Instance/Device lifetimes dan selection, but the sebenarnya logical-device negotiation still runs in Pipeline.
- Device-owned work to migrate next: queue-family/device queue creation, didukung core properties/features, device-daftar ekstensi, core/extension feature chains, format support (BC/ASTC), queue priority negotiation, fault-report function binding, dan logical-pembuatan perangkat.
- Pertahankan Presenter's swapchain/present-ID/present-wait negotiation in Presenter. Pertahankan Pipeline's layout descriptor-set, layout pipeline/cache dan shader-module/pipeline resource operations in Pipeline. Move hanya device discovery/creation/capability ownership into Device, then make Provider Context call Device::Create directly.

**B2.27 validation completed:** CTest dan the BO2 Mesa Switch SDK probe passed untuk `d1868eb23cbf26879432155a485a6fbe15b730e1`. Job SDK berhasil mengompilasi 27 Vulkan runtime TUs; two translation unit renderer yang bergantung pada PPC privat masih ditunda. Diagnostic NRO artifact: https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42898842463/artifacts/13800489828 (ZIP SHA256 `059bc5209216400aebbbd8013cd427302fb87c7b8858a0d7e49e4ff2c225c7ed`). Ini bukan proses link PES secara penuh or rendering scene.

### Pipeline kini menggunakan snapshot kapabilitas milik Device (2026-11-11)

- Pipeline mempertahankan a non-owning `Device` pointer alongside its raw operational handles. Both headless Provider-owned dan Presenter-borrowed paths set this pointer dari the sebenarnya Provider Context.
- Properti physical-device used by Pipeline Cache dan diagnostik crash are copied dari the Device snapshot. Properti memori, core physical features, depth-resolve support, device name, BC/ASTC support, anisotropy, precise queries, dynamic rendering/state, pipeline-library dan legacy/static-state capability accessors kini delegate to Device.
- Menghapus superseded `pipeline::CreateDevice` API dan its duplikat 400-line pembuatan perangkat/capability negotiation implementation. Device::Create is kini the single logical-pembuatan perangkat dan capability owner; Pipeline masih responsible untuk descriptor/layout pipeline, cache dan modul shader.
- Device fault reports kini delegate to `Device::ReportFault()`; the duplikat Pipeline-level device-dispatch pelaporan gangguan cache telah dihapus.
- Validasi CI untuk migrasi ini masih menunggu.
- Follow-up cleanup: removed Pipeline's now-unused duplikat capability flags dan copied memory/core-feature/depth-resolve snapshots. Pipeline keeps hanya its non-owning Device pointer, operational handle aliases dan the physical-properties copy diperlukan to validate persistent pipeline-cache identity.
- Device snapshot cleanup: removed a redundant second copy of `VkPhysicalDeviceFeatures` dan the unused physical-device snapshot marker; core didukung features are kini queried satu kali per Device creation.
- Context identity guard: `Pipeline::Initialise` is idempotent hanya untuk the exact same borrowed Provider Device/Instance or the already-owned headless context. It kini rejects attempts to silently reuse a different active Device.
- Device daftar ekstensi: `Device::Create` kini enumerates the yang dipilih perangkat fisik's advertised extensions once, then answers its optional-extension checks against that tersimpan inventory alih-alih repeatedly calling `vkEnumerateDeviceExtensionProperties` untuk each capability.
- Driver identity is kini part of the Device snapshot as well: `VkPhysicalDeviceDriverProperties` is queried satu kali when Vulkan 1.2 core or `VK_KHR_driver_properties` tersedia. Pipeline crash-report logging consumes that snapshot rather than issuing its own physical-device properties query.
- Follow-up: all opsional device-extension checks in `Device::Create` kini use the single tersimpan daftar ekstensi, termasuk global queue priority, image-format list, depth-resolve, maintenance/properties2, non-seamless cube, dynamic-rendering/state, pipeline-library dan device-fault checks. Tidak ada lagi Provider extension-enumeration calls remain in Device creation.
- Extension-list hardening: Device kini removes duplikat nama ekstensi setelah combining caller/WSI requirements dengan opsional capabilities. Hal ini mencegah duplikat names when an extension is requested both by Presenter dan Device policy.

### Audit siklus hidup Provider / Device / Pipeline (2026-11-11)

- Memastikan Provider Context owns Instance dan Device in both Presenter dan headless Pipeline paths. Presenter tears down swapchain/frame resources dan surface sebelum releasing Provider Context; Pipeline meminjam the Presenter context dan owns a Provider Context hanya in mode tanpa tampilan.
- Device memiliki logical-pembuatan perangkat, queue acquisition, snapshot kapabilitass/negotiation, daftar ekstensi dan dispatch pelaporan gangguan. Presenter mempertahankan WSI policy; Pipeline mempertahankan descriptor/layout pipelines, cache dan shader resources.
- No ownership refactor was made dari inspection alone; the next audit is renderer startup/rollback/shutdown versus Presenter worker teardown, then the sebenarnya frame submission path. The two PPC-dependent renderer translation units remain a build gate until private XenonRecomp output is supplied.

### Validasi ekstensi Device yang diwajibkan (2026-11-11)

- `Device::Create` kini checks caller-diperlukan nama ekstensi against its tersimpan ekstensi perangkat inventory sebelum mencoba `vkCreateDevice`. Nama yang tidak valid/kosong dan ekstensi wajib yang tidak didukung fail dengan a diagnostik yang spesifik. Hal ini tidak trigger a enumerasi ekstensi kedua.
- CTest dan the Switch BO2 Mesa SDK probe sedang berjalan untuk commit `6348024af52e3a565aefb4aa16aa325594953e8d`; results are recorded in the [CTest run](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42926195764) dan [SDK run](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42926188345).

### Vulkan draw/resolve kini dapat dikompilasi tanpa header PPC privat (2026-11-11)

- Menghapus broad `kernel/kernel.h` include dari `renderer_draw.cpp` dan `renderer_resolve.cpp`. They kini use the narrow physical-address declaration and, untuk resolve diagnostics, hanya the `DumpYieldStacks(int)` function declaration they need.
- The Switch SDK workflow kini attempts to compile every Vulkan runtime translation unit, termasuk draw dan resolve, alih-alih deferring those two files. Hal ini tidak remove the private PPC requirement dari the full PES game build/link.
- Final full-renderer SDK probe queued: [run 42926468631](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42926468631). Intermediate commits are also in CI; the final run is the acceptance gate.

- Repository cleanup: removed the zero-byte hidden file `runtime/gpu/vulkan/.!28804!renderer_resolve.cpp`; the real renderer source is preserved.

### Pengaman platform pada jalur resolve (2026-11-11)

- Full Switch SDK compilation reached `renderer_resolve.cpp` setelah `renderer_draw.cpp` compiled, then found two Android app-path debug toggles outside `PES17_ANDROID`. Both are kini guarded; non-Android builds explicitly disable those file-based toggles.
- Refreshed full-renderer SDK probe queued: [run 42926688441](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42926688441).

**Latest validation (2026-11-11):** CTest passed untuk the current documentation HEAD `baafb1ebf46d1af316fbfd0eadf49a6eb9397f74` (run [42925400050](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42925400050)). The BO2 Mesa Switch SDK probe also completed successfully untuk the Device extension-deduplication code commit `dc9d788ed72ecac4bb31538069d4138d62de63e4` (run [42925275792](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42925275792)); artifact `pes17-vulkan-bo2-probe` ID `13813836384`, 8,114,137 bytes, SHA-256 `82645e76d3736495d4a8d650022c22f206074d774372faf2334c8f91b0277e2e`, is tersedia [here](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42925275792/artifacts/13813836384). The probe compiled the Vulkan runtime translation units yang dipilih by the workflow; `renderer_draw.cpp` dan `renderer_resolve.cpp` masih ditunda because they require output PPC privat hasil XenonRecomp. This is a diagnostic entrypoint probe, not proof of link game PES secara penuhing, Vulkan rendering, boot, or gameplay.
