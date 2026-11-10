# PES 2017 — Nintendo Switch Port

**Proyek eksperimen port native PES 2017 dari Xbox 360 ke Nintendo Switch.**

Repositori ini mengembangkan jalur recompilation PowerPC, runtime kompatibilitas Xbox 360, lapisan platform libnx, serta backend grafis Vulkan melalui NXVK. Target akhirnya adalah menjalankan PES 2017 sebagai aplikasi homebrew Nintendo Switch (NRO), bukan menjalankan emulator Xbox 360.

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
| Grafis yang dituju | Vulkan melalui NXVK |
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
| NXVK / VI WSI + GPU clear | Berhasil pada Switch fisik | 120/120 frame acquire-submit-present; `vkCmdClearColorImage` tiga fase warna; pengguna mengonfirmasi perubahan warna terlihat. CI graphics pipeline + `vkCmdDraw` berhasil dibangun (NRO PES-owned tersedia); visibilitas segitiga pada Switch fisik dan renderer PES belum diverifikasi |
| Switch runtime | Dalam integrasi | Platform, input, audio, storage dan grafis belum terverifikasi sebagai satu game |
| PES 2017 NRO | Belum tersedia | Belum ada full-game NRO yang terbukti boot atau playable |

### Arti hasil pengujian

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

### 4.4 Grafis Vulkan / NXVK

Eksperimen grafis menggunakan port NXVK yang dipatok pada revisi sumber tertentu. Build CI telah menghasilkan library NVK dan aplikasi smoke test untuk jalur Vulkan, termasuk uji offscreen/triangle dan VI swapchain.

Pada 10 November 2026, NRO PES-owned #147 berhasil pada Switch fisik: NVK Tegra X1, VI surface/swapchain, 120/120 acquire-submit-present, serta `vkCmdClearColorImage` dalam tiga fase warna. Pengguna mengonfirmasi perubahan warna terlihat pada layar. Dengan demikian operasi tulis GPU dan present visual dasar telah terbukti; tahap aktif berikutnya adalah graphics pipeline dan `vkCmdDraw`, sebelum integrasi renderer PES. Hasil ini belum membuktikan gambar game atau integrasi renderer PES.

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
- Portlib NXVK beserta dependensi yang digunakan oleh workflow.
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

Konfigurasi full runtime menggunakan toolchain `cmake/switch-toolchain.cmake`, opsi `PES17_SWITCH=ON`, PPC hasil recompilation, manifest XEX yang cocok, serta paket NXVK. Jalur build ini masih dalam tahap integrasi dan belum boleh dianggap sebagai build game yang telah tervalidasi.

## 7. Otomasi GitHub Actions

Workflow yang berada di repositori:

| Workflow | Fungsi | Batas pembuktian |
|---|---|---|
| `main.yml` | Test otomatis di GitHub Actions | Menguji test suite, bukan menjalankan game |
| `switch-nro.yml` | Build dan verifikasi bootstrap libnx NRO | Membuktikan bootstrap dapat dikompilasi dan dipaketkan |
| `switch-nvk-spike.yml` | Build NXVK dan aplikasi Vulkan smoke test | Membuktikan jalur build dan smoke test yang dicakup workflow |

Lihat [riwayat GitHub Actions](../../actions) untuk status run dan artefak yang tersedia.

Artefak smoke test NXVK adalah alat pengujian driver, bukan game. Jangan menyimpulkan keberhasilan boot pada Switch fisik hanya dari status workflow CI.

## 8. Tahapan pengerjaan berdasarkan pola pembanding

Urutan kerja diperbarui dengan membaca implementasi nyata **BO2-360-NX** (terutama `sdk/src/ui/vulkan/vulkan_presenter.cpp`) dan membandingkannya dengan jalur PES-owned yang sedang dibangun. Referensi dipakai untuk memahami urutan lifecycle renderer—inisialisasi platform/window, Vulkan device dan swapchain, strategi acquire/synchronization, resource, pipeline, draw, lalu present—bukan untuk menyalin seluruh renderer BO2 atau menganggap kodenya langsung kompatibel dengan PES.

**Keputusan kerja saat ini:** pertahankan NXVK sebagai jalur driver/feasibility yang sedang diuji. Jangan mengganti renderer atau mengulang tes warna. Gunakan hasil yang sudah terbukti sebagai fondasi, lalu naikkan kompleksitas satu lapis pada satu waktu. Pekerjaan recompilation, kernel compatibility, audio, dan input dapat berjalan paralel, tetapi integrasi full-game menunggu prasyaratnya.

| Tahap | Pekerjaan dan urutan teknis | Kriteria lulus | Status |
|---|---|---|---|
| 0. Kunci sumber dan hasil recompilation | Validasi identitas XEX; hasilkan PPC; audit instruksi dan jump table; jaga kecocokan manifest dengan executable. | XEX cocok, PPC lengkap untuk target, seluruh gap instruksi/dispatch dijelaskan atau ditangani. | **Sebagian selesai** — XEX tervalidasi, 1.413 file PPC pernah dihasilkan lokal; 44 word dan 2 dispatch masih perlu ditinjau. |
| 1. Fondasi Horizon/libnx | Pastikan toolchain, NRO, lifecycle applet, filesystem, thread/synchronization, HID dan logging dasar. | Bootstrap berjalan dan probe platform lulus pada CI/hardware sesuai jenis uji. | **Build CI berhasil**; belum merupakan game. |
| 2. Vulkan device dan VI presentation path | Ikuti urutan presenter pembanding: instance, physical device, queue family, logical device, VI surface, capability/format, swapchain, image enumeration, acquire, submit, present. | Seluruh API penting sukses dan frame benar-benar tampil di Switch fisik. | **Lulus** — VI swapchain PES-owned dan 120/120 acquire-submit-present telah diuji pada perangkat. |
| 3. Sinkronisasi dan jalur present yang stabil | Verifikasi semaphore/fence lifetime, queue ownership, image layout, present mode dan WSI fallback. Bandingkan strategi acquire BO2, termasuk CPU-wait acquire fence sebagai opsi diagnosis bila ada bukti stall; jangan aktifkan tanpa kebutuhan terukur. | Tidak ada deadlock, reuse semaphore yang prematur, atau frame yang gagal dipresentasikan dalam uji berulang. | **Lulus untuk jalur smoke saat ini** — CPU-copy fallback digunakan; optimasi/ketahanan lanjutan tetap perlu diuji saat beban meningkat. |
| 4. GPU write/clear yang terlihat | Rekam command buffer, transition image, `vkCmdClearColorImage`, submit, present dan tunggu penyelesaian. | Perubahan pixel terlihat di layar dan log menunjukkan semua frame selesai. | **Lulus** — NRO #147, 120/120 frame; tiga fase warna dikonfirmasi terlihat pengguna. |
| 5. Graphics pipeline dan primitive draw | Buat swapchain image view, render pass, framebuffer per image, shader module, pipeline layout, graphics pipeline; rekam `vkCmdDraw` dan present. Acuan shader/draw: pola `nvk_tri` dari revisi NXVK yang dipatok. | Segitiga RGB benar-benar terlihat di layar Switch; log pipeline, draw, submit dan present konsisten. | **Implementasi sudah dikomit; CI dan konfirmasi visual fisik masih menunggu. Ini checkpoint aktif.** |
| 6. Resource grafis dasar | Setelah primitive lulus, tambahkan vertex/index buffer, buffer upload, image/texture, sampler, descriptor, depth/stencil, render target dan lifetime resource secara bertahap. | Setiap jenis resource punya smoke test visual/readback tersendiri dan lulus pada perangkat. | **Belum dimulai.** |
| 7. Validasi shader dan semantik Xenos | Uji translator Xenos-to-SPIR-V dengan shader PES representatif; validasi konstanta, format, texture sampling, blending, depth, render target dan perilaku pipeline terhadap referensi hasil yang diketahui. | Scene/fixture sintetis dan shader representatif menghasilkan output yang dapat dibandingkan; incompatibility dicatat dan ditangani. | **Belum tervalidasi.** |
| 8. Integrasi renderer PES | Hubungkan command/resource model Xenos, shader, texture, render target dan synchronization ke backend Vulkan yang telah lulus tahap sebelumnya. | Render test PES-owned memakai aset/fixture legal milik pengguna dan menampilkan geometri/texture yang benar, bukan hanya primitive smoke. | **Belum dimulai sebagai integrasi game yang tervalidasi.** |
| 9. Runtime kompatibilitas dan loader | Secara paralel, prioritaskan kernel imports berdasarkan jalur startup; selesaikan guest memory, thread/event, dynamic library/symbol loading, filesystem dan startup path. | PPC dapat dimuat dan alur startup guest mencapai entry point tanpa import stub kritis atau kegagalan memory/thread. | **Belum lengkap** — catatan terakhir menyebut 69 kernel import masih stub; perlu audit ulang berdasarkan call graph/startup trace. |
| 10. Audio, input dan penyimpanan | Integrasikan XMA/audio, pemetaan controller, save/data path dan lifecycle suspend/resume. | Audio, kontrol dan penyimpanan berfungsi bersama pada runtime game, bukan hanya probe terpisah. | **Belum tervalidasi sebagai satu alur game.** |
| 11. Full-game NRO | Gabungkan PPC yang cocok, loader/runtime, backend grafis, platform, audio/input dan data path; build dengan data game privat lokal. | NRO full-game ter-link dan memuat executable/data yang cocok tanpa placeholder atau translation unit kosong. | **Belum tersedia.** |
| 12. Validasi gameplay di Switch | Uji boot, menu, pertandingan, rendering, audio, kontrol, save, stabilitas, memory pressure, suspend/resume dan sesi panjang. | Bukti visual dan log menunjukkan gameplay berjalan stabil pada Switch fisik. | **Belum dilakukan; status playable belum tercapai.** |

### 8.1 Pola pembanding yang benar-benar diterapkan

Dari presenter BO2-360-NX, hal yang relevan untuk alur PES adalah pemisahan tanggung jawab window/VI, swapchain, acquire, command submission, dan present. Ada juga strategi opsional `present_wait_acquire_on_cpu`: acquire menggunakan fence lalu CPU menunggu fence tanpa menahan queue lock, sehingga submit tidak bergantung pada acquire semaphore. Strategi ini disimpan sebagai opsi diagnosis untuk kasus stall yang terbukti, bukan perubahan default tanpa pengukuran.

Untuk tahap grafis, pola `nvk_tri` NXVK menyediakan contoh konkret shader vertex/fragment, pipeline tanpa vertex buffer, dan draw berbasis `gl_VertexIndex`. Pola tersebut kini diadaptasi pada smoke PES-owned. Kode BO2/NXVK tidak otomatis menjadi backend PES: perbedaan API, resource model Xenos, shader, dan perilaku game tetap harus divalidasi.

### 8.2 Checkpoint aktif dan langkah setelahnya

Checkpoint aktif adalah **Tahap 5: visible graphics-pipeline draw**. Source sudah membuat image view, render pass/framebuffer, shader module dan graphics pipeline lalu merekam `vkCmdDraw(3, 1, 0, 0)`. Urutan berikutnya bukan mengulang VI atau color-clear: selesaikan CI build NRO ini, jalankan NRO pada Switch, dan terima hanya jika segitiga RGB terlihat secara nyata serta log membuktikan pipeline/draw/submit/present. Jika gagal, perbaiki penyebab yang ditunjuk log lalu build ulang.

Setelah primitive lulus, lanjut ke resource grafis (Tahap 6), kemudian shader Xenos representatif (Tahap 7), dan integrasi renderer PES (Tahap 8). Pekerjaan runtime/recompiler/audio/input tetap berjalan paralel dengan prioritas berdasarkan dependency startup. Full-game NRO baru dirakit setelah jalur grafis, loader, PPC dan subsistem wajib saling terhubung.

### 8.3 Aturan bukti dan efisiensi pengujian

- Jangan mengulang pengujian yang sudah lulus kecuali ada perubahan kode atau pertanyaan teknis baru.
- Setiap NRO diagnostik harus menguji satu lapisan baru dan memiliki kriteria lulus visual/log yang eksplisit.
- CI membuktikan build dan packaging; hanya Switch fisik yang membuktikan perilaku Horizon/NVK dan tampilan layar.
- Jika kegagalan ditemukan, telusuri marker/log sampai penyebab, perbaiki sumbernya, lalu jalankan ulang CI sebelum meminta pengujian fisik lagi.
- Jangan menyebut game playable sebelum Tahap 12 lulus.

## 9. Privasi file game dan aturan artefak

File berikut merupakan input/output lokal privat dan tidak boleh masuk ke commit publik atau artefak CI publik:

- `default.xex` dan `default.pe`.
- Dump disc, CPK, dan aset game.
- File hasil ekstraksi game.
- Direktori PPC hasil XenonRecomp dan manifest yang terkait dengan executable pribadi.
- Log atau dump yang tanpa sengaja berisi konten proprietary dari game.

CI publik hanya boleh menguji source code, fixture sintetis, bootstrap, dan artefak smoke test yang aman dibagikan. Jangan mengunggah executable atau aset game ke GitHub Actions.

## 10. Asal-usul komponen dan penghargaan

Proyek ini menggunakan serta mengadaptasi ekosistem open-source berikut:

- [XenonRecomp](https://github.com/hedge-dev/XenonRecomp) — analisis dan recompilation PowerPC Xbox 360.
- [NXVK](https://github.com/PalindromicBreadLoaf/nxvk) — basis eksperimen Vulkan/NVK di Nintendo Switch.
- [devkitPro / libnx](https://devkitpro.org/) — toolchain dan API homebrew Nintendo Switch.
- [Xenia](https://xenia.jp/) — referensi teknis perilaku Xbox 360.

Kode upstream tetap tunduk pada lisensi dan pemberitahuan hak cipta masing-masing. Lihat file lisensi serta pemberitahuan pada direktori komponen terkait.

## 11. Lisensi dan disclaimer

Repositori ini merupakan proyek independen untuk riset kompatibilitas dan porting. Proyek ini tidak berafiliasi dengan, disponsori, atau didukung oleh Konami maupun Nintendo.

PES 2017, merek, executable, dan aset game adalah milik pemegang hak masing-masing. Pengguna bertanggung jawab memastikan kepemilikan dan penggunaan salinan game sesuai hukum yang berlaku.

Lisensi source code repositori mengikuti file [LICENSE](LICENSE), dengan tetap menghormati lisensi komponen pihak ketiga yang disertakan.

## 12. Retensi riwayat GitHub Actions

Workflow `.github/workflows/cleanup-actions.yml` menyediakan audit dan pembersihan selektif melalui `workflow_dispatch`. Kebijakan perlindungannya:

- Hanya run **completed** pada branch `work/switch-libnx-platform` yang dipertimbangkan; run aktif dan branch lain tidak disentuh.
- Mempertahankan 10 run terbaru per workflow ID (dapat diatur saat dispatch).
- Selalu melindungi checkpoint NVK #102, #112, #115, #116, dan #118.
- **Run dengan artefak yang belum kedaluwarsa selalu dipertahankan**, termasuk artefak NRO/build. Jika pemeriksaan artefak gagal, run juga dipertahankan (fail-closed).
- Pada mode penghapusan, status artefak diperiksa ulang tepat sebelum setiap run dihapus.
- Mode awal adalah **dry-run**. Penghapusan memerlukan `dry_run=false` dan konfirmasi persis `DELETE_OLD_RUNS`.
- Penghapusan run menghilangkan log run; kebijakan baru ini mencegah penghapusan artefak yang masih berlaku, tetapi artefak kedaluwarsa tidak menjadi alasan untuk mempertahankan run.

Audit baca-saja terakhir pada 9 November 2026 menemukan **542 run** di repositori, dengan **532 run selesai** pada branch kerja. Kebijakan lama menghasilkan 501 kandidat sebelum pemeriksaan artefak. Angka kandidat final hanya boleh diambil dari job summary dry-run setelah workflow versi terbaru berjalan; jangan gunakan angka audit lama sebagai instruksi penghapusan.

Buka [Cleanup old GitHub Actions runs](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/workflows/cleanup-actions.yml) untuk meninjau simulasi. Workflow ini tidak memiliki jadwal otomatis.


**Kegagalan build diagnostik lanjutan (9 November 2026, run [42657607364](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42657607364)):** toolchain NXVK berhasil dibangun, tetapi kompilasi `wsi_common.c` gagal karena marker `[WSI-BLIT] before final_barrier` tersisip di tengah argumen pemanggilan `CmdPipelineBarrier`. Ini merupakan kesalahan anchor instrumentasi workflow, bukan kegagalan driver pada perangkat. Diperbaiki pada commit `e29cd0a60b7661e5f04a381b589e03319b04da98`: marker kini dipasang sebelum awal pemanggilan `CmdPipelineBarrier`, di luar daftar argumen. Build ulang otomatis dipicu oleh perubahan workflow. Belum ada NRO baru dari run yang gagal; tahap 2 tetap belum lulus.


**Kegagalan build diagnostik (run [42658774603](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42658774603)):** kompilasi `wsi_common.c` gagal pada `wsi_cmd_blit_image_to_buffer`. Pemeriksaan terhadap sumber NXVK pinned dan skrip workflow menemukan akar masalah: patch marker final barrier mengganti dua baris awal pemanggilan `CmdPipelineBarrier`, tetapi sekaligus menyisipkan ulang seluruh daftar argumen dan penutup panggilan. Sisa argumen asli menjadi ekspresi koma C yang tidak valid. Diperbaiki pada commit `f406a528e5292a9badbd1a407c15a3c5adc62b69`: marker hanya disisipkan sebelum dua baris awal, sedangkan pemanggilan fungsi dan argumen asli tetap utuh. Build ulang otomatis dipicu; belum ada NRO baru dari run gagal ini.


**Hasil pengujian fisik terbaru — log diterima 10 November 2026 (pes_loader_smoke.nro):**
- NXVK ICD berhasil dimuat tanpa entry point hilang; instance, VI surface, enumerasi GPU Tegra X1/NVK gm20b, device, dan seluruh query surface berhasil.
- `vkCreateSwapchainKHR` belum kembali. Zero-copy gagal dan fallback CPU-copy berjalan. Pembuatan image, alokasi/map memory, bind image, pembuatan command buffer, serta initial image barrier berhasil.
- Log terakhir adalah `[WSI-BLIT] before copy_image_to_buffer`. Tidak ada marker sesudahnya. Ini mempersempit titik berhenti ke dispatch `CmdCopyImageToBuffer` di dalam helper WSI CPU-copy, tetapi belum membuktikan apakah masalah berada pada parameter WSI, dispatch entrypoint, atau implementasi NVK copy.
- `nvk_mesa.log` hanya mencatat shader cache dan `nvk wsi: zero-copy FAILED`; pesan zero-copy bukan penyebab tunggal karena CPU-copy fallback memang berjalan.
- Belum ada bukti swapchain dibuat, swapchain images dienumerasi, queue submit, atau present. Keberhasilan tampilan warna dari NRO upstream `nvk_vi_swapchain.nro` tidak boleh disamakan dengan keberhasilan loader PES.
- **Langkah teknis berikutnya:** instrumentasikan nilai handle image/buffer, extent, row pitch, dan pointer dispatch tepat sebelum `CmdCopyImageToBuffer`; tambahkan trace entry/branch pada implementasi NVK `nvk_CmdCopyImageToBuffer2`/copy-engine untuk membedakan crash di dispatch dari kegagalan internal driver. Setelah itu bangun NRO diagnostik baru dan uji ulang.

**Status tahap 2 tetap belum lulus.** Kriteria tetap mensyaratkan swapchain creation, image enumeration, queue submit, dan present sukses pada perangkat fisik.


**Instrumentasi batas WSI/NVK copy (10 November 2026):** commit [b283095](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/commit/b283095dd38f57ac26c6502d2c5ad9644be3333d) memperluas diagnostik di workflow: tepat sebelum dispatch WSI kini dicatat handle command buffer/image/buffer, pointer fungsi, extent, offset, row pitch/image height, aspek/mip/layer; pada NVK ditambahkan trace saat entrypoint `nvk_CmdCopyImageToBuffer2` dimasuki, queue flags, dukungan compute, dan cabang meta-compute atau copy-engine. Ini adalah instrumentasi untuk membedakan dispatch yang tidak masuk dari kegagalan di dalam implementasi copy; **belum merupakan perbaikan runtime**.

Build workflow untuk commit instrumentasi belum menghasilkan job build yang dapat diperiksa (run [42664742361](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42664742361) berakhir gagal tanpa job). Pemeriksaan terpisah pada workflow tes repositori berjalan pada [42664754376](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42664754376), tetapi bukan build NRO NXVK. Karena itu belum ada NRO diagnostik baru untuk diuji dan belum ada dasar menyatakan penyebab copy sudah ditemukan atau diperbaiki. Langkah langsung berikutnya adalah memperbaiki pemicu/validasi workflow NXVK agar instrumentasi benar-benar ter-build, lalu menggunakan log fisik untuk menetapkan dan memperbaiki penyebab runtime.

**Pembaruan lanjutan 9 November 2026 — NVK copy-dispatch diagnostic build:**
- Workflow [Switch NVK feasibility spike #126](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42665439623) selesai dengan **success** pada commit `edfc52baabe8d5528677e95e0a7691e8dbb74f28`.
- Penyebab workflow sebelumnya gagal sebelum job berjalan adalah blok patch diagnostik Python yang tertanam di YAML workflow. Patch tersebut dipindahkan ke skrip mandiri `switch/smoke/patch-nxvk-copy-trace.py`; workflow kemudian berhasil melewati checkout, instrumentasi, build toolchain, build library, pembuatan NRO, dan unggah artefak.
- Instrumentasi baru mencatat argumen dispatch WSI `CmdCopyImageToBuffer` serta entrypoint NVK `nvk_CmdCopyImageToBuffer2`, queue flags, dukungan compute, dan cabang copy yang dipilih. Ini menyiapkan bukti untuk mengisolasi titik berhenti pada pembuatan swapchain.
- Artefak: [nxvk-switch-smoke-nros-c3abea1](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42665439623/artifacts/13696977643), [pes-nxvk-properties2-diagnostic-nro](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42665439623/artifacts/13697596037), dan [nxvk-switch-build-diagnostics](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42665439623/artifacts/13697915707).
- Log CI mengonfirmasi `libnvk.a`, `libnvk_support.a`, `nvk_tri.nro`, `nvk_vi_swapchain.nro`, dan `pes_loader_smoke.nro` berhasil dibuat dan diunggah.
- **Batas bukti tetap berlaku:** build NRO berhasil bukan bukti bahwa dispatch copy atau `vkCreateSwapchainKHR` berhasil pada Switch fisik. Tahap 2 belum lulus sampai NRO diagnostik terbaru dijalankan di perangkat dan log runtime yang memuat marker `[WSI-BLIT]` / `[NVK-COPY]` diperiksa. Full-game PES 2017 NRO juga belum dibangun atau diuji.


**Pembaruan NVK copy-dispatch trace build #133 (10 November 2026):**
- Workflow [Switch NVK feasibility spike #133](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42668636596) selesai **success** pada commit `749f550063ba4d1685fdd26836713261c2a68388`; seluruh 12 langkah job berhasil.
- Skrip patch berhasil memasang tracepoint pada WSI, wrapper legacy-to-`vkCmdCopyImageToBuffer2`, dan entrypoint NVK. Toolchain NXVK, library, serta smoke NRO berhasil dibangun dan diunggah.
- Artefak NRO diagnostik PES: [pes-nxvk-properties2-diagnostic-nro](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42668636596/artifacts/13697394428). Artefak kumpulan NRO/library: [nxvk-switch-smoke-nros-c3abea1](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42668636596/artifacts/13697164926). Log/metadata: [nxvk-switch-build-diagnostics](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42668636596/artifacts/13699260155).
- Pemeriksaan string pada NRO diagnostik hasil build menemukan marker `[WSI-BLIT]` dan `[NVK-COPY]`, termasuk marker setelah dispatch NVK kembali. Marker `[COMMON-COPY]` dari wrapper legacy tidak ditemukan pada binary final. Jadi instrumentasi wrapper memang terpasang pada source saat build, tetapi belum terbukti ikut masuk ke NRO; jalur kompilasi/link wrapper perlu ditelusuri sebelum mengandalkan marker tersebut.
- **Batas bukti:** build sukses tidak membuktikan copy dispatch, pembuatan swapchain, atau present berhasil di Switch. Tahap 2 tetap menunggu log runtime dari NRO terbaru; full-game NRO belum dibangun.


**Tindak lanjut log Switch dan jalur copy WSI (10 November 2026):**
- Log terbaru yang diterima menunjukkan `vkCreateSwapchainKHR` masih berhenti pada pemanggilan fungsi dispatch WSI. Pembuatan image, CPU buffer, pemetaan memori, command buffer, dan initial barrier telah selesai. Marker `[COMMON-COPY]` dan `[NVK-COPY]` tidak muncul, sehingga belum ada bukti wrapper legacy maupun implementasi NVK copy dimasuki.
- Penyebab spesifik belum boleh dinyatakan final. Investigasi sumber menunjukkan WSI memperoleh callback melalui `nvk_wsi_proc_addr`/instance proc lookup; karena itu jalur legacy yang diharapkan melewati wrapper umum belum terbukti mencapai fungsi yang ditandai.
- Commit `3d13cbf9477051bb3bf7cac42eb0684a784b219c` menambahkan callback WSI `vkCmdCopyImageToBuffer2` langsung, mempertahankan legacy sebagai fallback, serta memasang trace dispatch baru. Commit `532872b8929daff3925795b0d357b742e18d1064` menambahkan validasi build bahwa marker WSI direct-2 dan NVK benar-benar ada pada NRO final.
- Build NXVK untuk perubahan tersebut sedang berjalan pada [run #42749853074](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42749853074). Status terakhir saat dokumentasi ini ditulis: job build masih berjalan; belum ada NRO baru yang dapat diuji.
- **Kriteria tahap 2 tidak berubah:** perlu log fisik yang membuktikan swapchain selesai dibuat, images dienumerasi, queue submit, dan present sukses. Build sukses atau marker binary saja bukan bukti runtime. Full-game PES 2017 NRO belum tersedia.

## Latest hardware diagnostic: NVK VI image acquisition (10 November 2026)

The latest Switch log confirms that the PES-owned Vulkan loader, NVK physical-device initialization, VI surface creation, three-image swapchain creation, CPU-copy WSI image allocation, and NVK copy-engine command dispatch all return successfully. The log then stops immediately after `[FRAME 0] before acquire`; no matching `after acquire` marker is present. This localizes the current stall to the first `vkAcquireNextImageKHR` call, before queue submission or presentation.

The next diagnostic build instruments the Horizon WSI acquire path in `wsi_switch.c`, including the selected libnx dequeue path and the underlying buffer-queue dequeue. This will distinguish a block inside `nwindowDequeueBuffer` from a problem in the event-driven dequeue path. This remains a diagnostic milestone, not evidence that PES 2017 is playable.


**Pembaruan WSI acquire trace build #140 (10 November 2026):**
- Run [Switch NVK feasibility spike #140](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42755100046) berhasil melewati pemasangan seluruh tracepoint dan build toolchain NXVK, tetapi kompilasi `wsi_switch.c` berhenti karena format `%u` dipakai untuk field `u64` (`nw->slots_configured`) pada tracepoint dequeue.
- Diperbaiki pada commit [5543174](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/commit/5543174e379b855a8f8a33dae37c00b2e3d0d3ea) dengan `%llu` dan cast `unsigned long long`.
- Build ulang otomatis berjalan sebagai [run #141](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42755914370); status terakhir saat pembaruan ini ditulis: **queued**. Belum ada NRO baru untuk pengujian.
- Titik runtime yang hendak diisolasi tetap `vkAcquireNextImageKHR` pada frame pertama. Jangan menganggap kegagalan format trace ini sebagai kegagalan WSI di Switch; tahap 2 tetap menunggu NRO build baru dan log fisik.


**Hasil uji Switch dari NRO #142 (10 November 2026):**
- `vkAcquireNextImageKHR()` kini kembali `VK_SUCCESS` dan dequeue WSI menghasilkan `slot=1`; titik macet lama pada acquire sudah terlewati.
- Log PES berhenti setelah `[FRAME 0] after acquire result=0 image=1`. Belum ada marker reset/begin command buffer, submit, atau present.
- Karena marker sesudah acquire yang seharusnya tercatat belum muncul, penyebab belum boleh ditetapkan sebagai masalah `vkResetCommandBuffer`. Commit diagnostik `a033cd4665657b6d903f2dbee22f0206a2d58e65` menambahkan trace di sekitar `consoleUpdate` pada log acquire serta sebelum/sesudah pemeriksaan batas `imageIndex`, untuk membedakan apakah eksekusi tertahan saat pembaruan konsol atau tepat setelahnya.
- Tahap 2 masih belum lulus: belum ada bukti queue submit dan present sukses pada Switch fisik.

- Follow-up commit `b480a65ba260f43a1804f3a9a35b6c931bb7c29d` corrects the diagnostic marker newline escapes and verifies that both `[LOG-TRACE]` strings are present as separate log lines. This is a source-level correction; it is not a runtime result or proof of a successful build.


## WSI ownership fix based on BO2-360-NX reference (10 November 2026)

The BO2-360-NX 1.1.0 reference wraps `nwindowGetDefault()` in its `ViNWindowSurface` and routes Vulkan presentation through that VI surface. Its Vulkan presenter does not call libnx `consoleUpdate()` while presenting through the same window. The PES smoke test previously continued to print and call `consoleUpdate()` after `vkCreateViSurfaceNN`, even though both the libnx console and Vulkan VI WSI use the default `NWindow`.

This is a concrete ownership conflict in the PES diagnostic harness and a strong explanation for the last observed stop: after `vkAcquireNextImageKHR` returned `VK_SUCCESS`, the next `Log()` call synchronously called `consoleUpdate()` on the same default window. The exact runtime deadlock still requires confirmation on Switch; source inspection alone is not runtime proof.

- Commit `d923082773440f1bdc27bb6fa60a442a5cf10d91` disables screen-console output and `consoleUpdate()` immediately after successful `vkCreateViSurfaceNN`; all later diagnostics continue to be flushed to the SD-card log.
- Commit `1d130d92a64510ec9be1cbc592b29953effeebe7` corrects the newline escape in the guarded screen-output path.
- This is a targeted correction to the harness, not a claim that the full frame loop or PES renderer is working. The next hardware result must show command-buffer recording, queue submission, and `vkQueuePresentKHR` completing.
- The BO2 presenter also documents a separate NVK/Horizon synchronization issue: waiting on the acquire semaphore inside the GPU channel can stall subsequent GPU work. Its optional `present_wait_acquire_on_cpu` path uses an acquire fence and waits on the CPU instead. We will only adopt that path if the new log reaches submit and demonstrates the corresponding stall; it is not mixed into this first fix.


## PES-owned GPU clear hardware checkpoint (10 November 2026)

NRO #147 was tested on the physical Switch. The log records `vkCmdClearColorImage` for all 120 acquired swapchain images, followed on every frame by successful `vkQueueSubmit`, `vkQueuePresentKHR`, and `vkDeviceWaitIdle`. The run finished with `presented 120 / 120` and `exit=0`. NVK zero-copy was unavailable and the CPU-copy WSI fallback remained active. The user confirmed that the display visibly showed the changing color background during this test. Therefore the PES-owned path has passed a visible GPU transfer-clear test, not merely a log-level completion check. The PES-owned graphics-pipeline implementation is now committed and undergoing CI validation: it adapts the pinned upstream `nvk_tri` shaders and `vkCmdDraw` pattern to the VI swapchain. Physical visibility and PES scene rendering remain unvalidated.


## Graphics pipeline bring-up (10 November 2026)

The PES-owned smoke path has advanced beyond `vkCmdClearColorImage` to an RGB triangle generated by the pinned NXVK `nvk_tri` vertex/fragment shaders and `vkCmdDraw(3, 1, 0, 0)`. The current implementation uses a PES-owned offscreen color image and copies it into the acquired VI image before present. The latest physical log confirms offscreen image creation, memory allocation/binding, image-view creation, and render-pass creation, but stops inside the first `vkCreateFramebuffer`; pipeline creation and draw are not reached. The next controlled test reduces the render target to the upstream sample's 256x256 size and matches its single post-render subpass dependency, while retaining the 1280x720 VI presentation path. This tests alignment with the reference; it does not yet prove the framebuffer hang is caused by target dimensions.


**Tindak lanjut log framebuffer dan adaptasi pola NXVK (10 November 2026):**
- Log Switch terbaru berhenti tepat pada `[PIPELINE] before vkCreateFramebuffer image=0`. `vkCreateRenderPass` berhasil; tidak ada bukti bahwa `vkCreateGraphicsPipelines` atau `vkCmdDraw` sudah dipanggil. Jadi kegagalan saat ini berada pada pembuatan framebuffer yang memakai image view milik swapchain WSI, bukan pada shader yang belum sempat diproses.
- Pemeriksaan langsung terhadap sumber pembanding pada commit NXVK yang dipin menunjukkan `nvk_tri.c` tidak memasang framebuffer ke swapchain image. Ia menggunakan helper `nvk_color_target()` dari `nvk_gfx.h`: membuat image optimal-tiled milik aplikasi, mengalokasikan dan mengikat memorinya, membuat image view, render pass, lalu framebuffer. Hasil render dipindahkan ke host untuk diverifikasi pixel.
- Adaptasi PES sekarang mengikuti pola sumber tersebut: gambar segitiga ke offscreen color image milik PES; setelah render pass, salin hasilnya ke swapchain image yang sudah di-acquire, ubah layout ke PRESENT, lalu present. Ini mempertahankan target visual nyata sambil menghindari framebuffer langsung pada image WSI yang menjadi titik macet.
- Perubahan source ada pada commit `3e2b77814f96a977c8137b6dc6123f65333ade2b`. Build otomatis perlu membuktikan kompilasi. Setelah itu log fisik harus menunjukkan framebuffer offscreen dibuat, pipeline berhasil dibuat, `vkCmdDraw` tercatat, dan frame berhasil dipresentasikan. Belum ada klaim bahwa segitiga sudah terlihat.


**Follow-up log 10 November 2026 — framebuffer isolation:** The new `log.zip` confirms the CPU-copy WSI fallback (`nvk_mesa.log: nvk wsi: zero-copy FAILED`) completed swapchain creation; it is not itself a failure of the PES render target. The PES log then records successful offscreen image allocation/binding, image view, and render pass, and stops at `vkCreateFramebuffer`. The upstream pinned `nvk_tri.c` / `nvk_gfx.h` creates its color target at 256x256 and uses one post-render dependency. Commit `635a92fb31147dbf97eab50c91ac7ef794c05866` aligns the PES diagnostic target/dependency with that known-good pattern, clears the full VI image, and copies the 256x256 RGB triangle target into its center. CI run [42792640688](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42792640688) is in progress. Physical Switch confirmation is still pending; do not mark the pipeline/draw gate passed until the new log reaches `vkCreateGraphicsPipelines`, `vkCmdDraw`, submit, and present.
