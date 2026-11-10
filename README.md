# PES 2017 — Nintendo Switch Port

**Proyek eksperimen port native PES 2017 dari Xbox 360 ke Nintendo Switch.**

Repositori ini mengembangkan jalur recompilation PowerPC, runtime kompatibilitas Xbox 360, lapisan platform libnx, serta backend grafis Vulkan native mengikuti arsitektur BO2-360-NX. Eksperimen NXVK dihentikan dan dipertahankan sebagai cadangan. Target akhirnya adalah menjalankan PES 2017 sebagai aplikasi homebrew Nintendo Switch (NRO), bukan menjalankan emulator Xbox 360.

> [!WARNING]
> **Status per 10 November 2026: belum playable.** Selain recompilation lokal dan bootstrap libnx, smoke test yang memakai loader PES sendiri kini berhasil menjalankan NVK pada Tegra X1, membuat VI swapchain, serta menyelesaikan 120 siklus acquire–submit–present pada Switch fisik. Ini membuktikan jalur loader/WSI dasar. Pada 10 November 2026, CI juga berhasil membangun NRO PES-owned dengan graphics pipeline dan `vkCmdDraw(3, 1, 0, 0)` menggunakan shader RGB dari contoh `nvk_tri`; binary sudah diverifikasi memuat jalur pipeline/draw. Hasil gambar segitiga pada Switch fisik masih menunggu pengujian, sehingga ini belum membuktikan renderer game atau boot PES 2017.

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
| Vulkan native (jalur aktif) | Probe NRO BO2 Mesa berhasil dibangun dan berhasil dijalankan pada Switch | CI memverifikasi SDK, static link, dan packaging; pengguna melaporkan probe tampil dan menunggu HOME untuk keluar. Hasil teks `GIPA: PASS/FAIL` belum dicatat, jadi keberhasilan pemanggilan Vulkan belum terkonfirmasi |
| Switch runtime | Dalam integrasi | Platform, input, audio, storage dan grafis belum terverifikasi sebagai satu game |
| PES 2017 NRO | Belum tersedia | Belum ada full-game NRO yang terbukti boot atau playable |

### Arti hasil pengujian

- **Probe BO2 Mesa (10 November 2026):** CI berhasil membangun NRO dan pengguna mengonfirmasi aplikasi terbuka pada Switch hingga menampilkan instruksi menekan HOME untuk keluar. Ini membuktikan NRO dapat diluncurkan dan mencapai loop aplikasi. Karena baris diagnostik `GIPA: PASS` atau `FAIL` belum dilaporkan secara eksplisit, pemanggilan entrypoint Vulkan dan hasil `vkEnumerateInstanceVersion` belum boleh dinyatakan lulus.
- **Build berhasil** berarti compiler dan linker berhasil menghasilkan target yang diuji.
- **Syntax check berhasil** berarti file yang diperiksa dapat dikompilasi pada tahap pemeriksaan tersebut; belum membuktikan perilaku runtime.
- **Smoke test berhasil** berarti jalur API tertentu berhasil diuji oleh aplikasi kecil. NRO PES-owned #147 telah menyelesaikan 120/120 frame dan GPU color-clear tiga fase; perubahan warna terlihat di layar Switch menurut konfirmasi pengguna. Ini belum membuktikan graphics pipeline atau renderer PES.
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

Audit BO2 dan inventaris ketergantungan PES dicatat dalam [dokumen migrasi](docs/vulkan-bo2-port-plan.md). Adapter entrypoint driver Switch kini dipisah ke `switch_driver.h/.cpp`. Ini belum berarti provider/device/presenter BO2-style sudah dipindahkan.

**Keputusan arsitektur:** pengembangan NXVK dihentikan. Tidak ada lagi pekerjaan fitur, debugging, atau penambahan integrasi pada jalur NXVK. Source, konfigurasi, workflow, dan artefak NXVK yang sudah ada wajib dipertahankan sebagai cadangan yang terpisah. Jangan menghapusnya dahulu.

Backend aktif yang baru adalah **Vulkan native bergaya BO2-360-NX**. BO2-360-NX menjadi referensi utama dan sumber pembanding implementasi; NXVK bukan lagi referensi arsitektur utama. Tujuannya bukan sekadar membuat Vulkan smoke test, melainkan membangun jalur render PES dengan urutan tanggung jawab dan lifecycle seperti BO2, lalu mengganti bagian game-specific dengan runtime dan resource model PES/Xenos.

### 8.1 Pemisahan jalur dan status

| Jalur | Kebijakan | Status |
|---|---|---|
| NXVK | Bekukan; jangan hapus atau tambah fitur. Workflow diubah menjadi manual-only. Source/config dan histori uji dipertahankan. CMake hanya memilih jalur NXVK jika `PES17_SWITCH_USE_LEGACY_NXVK=ON`. | **Dihentikan — opsi legacy eksplisit saja** |
| Vulkan native (BO2-style) | Satu-satunya arah grafis aktif. SDK statis BO2 dipakai oleh workflow link-probe; probe NRO sudah dibuka pada Switch. Provider/device/presenter PES belum dipisahkan. | **Arah kerja aktif — build dan peluncuran NRO terkonfirmasi; hasil GIPA perlu dicatat** |

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
| V2. Vulkan native foundation | Ekstrak loader/entrypoint Vulkan dan instance/device dispatch menjadi komponen berorientasi objek mengikuti pola BO2; buat pemilihan physical device, queue family, logical device, dan lifecycle cleanup. | Instance/device memiliki ownership dan dispatch terpisah seperti BO2; init NRO berhasil dengan log per tahap. | **Sebagian — entrypoint publik `vkGetInstanceProcAddr` diarahkan ke `libvulkan.a`; workflow link-probe NRO disiapkan; lifecycle masih monolitik** |
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
