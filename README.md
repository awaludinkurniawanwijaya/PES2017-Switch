# PES 2017 — Nintendo Switch Port

**Proyek eksperimen port native PES 2017 dari Xbox 360 ke Nintendo Switch.**

Repositori ini mengembangkan jalur recompilation PowerPC, runtime kompatibilitas Xbox 360, lapisan platform libnx, serta backend grafis Vulkan melalui NXVK. Target akhirnya adalah menjalankan PES 2017 sebagai aplikasi homebrew Nintendo Switch (NRO), bukan menjalankan emulator Xbox 360.

> [!WARNING]
> **Status per 9 November 2026: belum playable.** Yang sudah terbukti saat ini adalah proses recompilation lokal, bootstrap libnx, pemeriksaan kompilasi beberapa subsistem Switch, serta build CI untuk eksperimen NXVK. Belum ada bukti bahwa keseluruhan game berhasil boot, masuk menu, atau menjalankan pertandingan di perangkat Switch.

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
| NXVK | Build CI berhasil | Library dan NRO smoke test berhasil dibuat |
| Switch runtime | Dalam integrasi | Platform, input, audio, storage dan grafis belum terverifikasi sebagai satu game |
| PES 2017 NRO | Belum tersedia | Belum ada full-game NRO yang terbukti boot atau playable |

### Arti hasil pengujian

- **Build berhasil** berarti compiler dan linker berhasil menghasilkan target yang diuji.
- **Syntax check berhasil** berarti file yang diperiksa dapat dikompilasi pada tahap pemeriksaan tersebut; belum membuktikan perilaku runtime.
- **Smoke test berhasil** berarti jalur API tertentu berhasil diuji oleh aplikasi kecil.
- **Playable** baru dapat dinyatakan setelah game benar-benar berjalan di Switch dan fungsi permainan penting telah diverifikasi.

Keberhasilan CI tidak boleh dianggap sebagai bukti bahwa PES 2017 sudah berjalan di perangkat fisik.

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

Integrasi grafis PES masih membutuhkan validasi lebih jauh pada resource, shader, command submission, sinkronisasi, format tekstur, render target, dan presentasi dari workload game.

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

## 8. Tahapan proyek dan posisi saat ini

Tahapan berikut adalah urutan milestone yang dipakai untuk mengendalikan pekerjaan. Status mengacu pada bukti yang benar-benar tersedia; keberhasilan build tidak otomatis berarti runtime atau game sudah berjalan.

| Tahap | Sasaran | Status |
|---|---|---|
| 0. Validasi sumber dan recompilation | Mengunci identitas XEX, menghasilkan PPC, mencatat gap analisis | **Sebagian selesai** — XEX tervalidasi dan 1.413 file PPC pernah dihasilkan lokal; 44 word dan 2 dispatch masih perlu ditinjau |
| 1. Fondasi Switch | Bootstrap libnx, toolchain, input/platform probe, test mandiri CI | **Build CI berhasil** — bukan game dan belum membuktikan runtime game |
| 2. Kelayakan Vulkan/NVK + VI | Memastikan loader, instance, GPU, device, surface, swapchain, image, dan present | **Sedang dikerjakan** — jalur sampai device dan surface sudah pernah berhasil pada Switch; smoke upstream NVK/VI pernah lulus. NRO diagnostik PES kini benar-benar memanggil `vkCreateSwapchainKHR`; hasil pemanggilan aktual itulah checkpoint berikutnya |
| 3. Keputusan arsitektur renderer | Menilai jalur NXVK yang ada dan referensi renderer Vulkan dari proyek BO2-360-NX; menentukan apakah tetap, diadaptasi, atau diganti | **Belum diputuskan** — referensi BO2 adalah bahan evaluasi, bukan bukti kompatibilitas/performa PES dan bukan migrasi yang sudah disetujui |
| 4. Integrasi backend grafis PES | Menghubungkan resource, shader, texture, render target, command submission, sinkronisasi, dan present dengan backend terpilih | **Belum dimulai sebagai integrasi game yang tervalidasi** |
| 5. Runtime kompatibilitas dan loader | Menuntaskan kernel imports prioritas, guest memory/thread, dynamic library/symbol loading, filesystem dan startup path | **Belum lengkap** — 69 kernel import masih tercatat sebagai stub; jumlah dan prioritas perlu diperbarui berdasarkan audit terbaru |
| 6. Audio, input, dan penyimpanan | Menghubungkan XMA/audio, controller, save dan data persisten | **Belum tervalidasi sebagai satu alur game** |
| 7. Integrasi full-game | Menggabungkan runtime, backend, dan PPC privat yang cocok menjadi satu full-game NRO | **Belum tersedia** — bootstrap NRO bukan full-game NRO |
| 8. Validasi akhir di Switch | Membuktikan boot, menu, pertandingan, audio, kontrol, save, stabilitas dan performa | **Belum dilakukan** — ini satu-satunya tahap yang dapat membuktikan status playable pada perangkat sasaran |

### 8.1 Checkpoint aktif: tahap 2 — swapchain Vulkan/NVK

NRO diagnostik PES memanggil `vkCreateSwapchainKHR` secara nyata, memeriksa hasilnya, mencatat handle, dan mengenumerasi swapchain images. Setelah image diperoleh, smoke test kini juga merekam command buffer dengan image barrier dari `VK_IMAGE_LAYOUT_UNDEFINED` ke `VK_IMAGE_LAYOUT_PRESENT_SRC_KHR`, mengirimkannya melalui `vkQueueSubmit` dengan acquire semaphore, memberi sinyal semaphore render-complete, lalu memanggil `vkQueuePresentKHR` dengan semaphore tersebut. Semaphore render-complete dibuat per swapchain image agar tidak digunakan ulang sebelum operasi present mengonsumsinya. Ini memperbaiki urutan sinkronisasi yang sebelumnya belum menguji alur submit/present Vulkan yang benar.

Status CI yang terakhir diperiksa pada 9 November 2026:
- **Switch NVK feasibility spike #121: berhasil.** Semua langkah job selesai dengan sukses: checkout sumber NXVK yang dipatok, instrumentasi NVK, build toolchain, build library NVK, build smoke NRO, dan upload tiga artefak.
- Commit proyek yang diuji: `656ba14217254343a4ba66577ff704549db3270d`.
- Revisi NXVK yang digunakan: `c3abea1efde44027b7e3e20b48eb55beeecd5ab4`.
- [Lihat GitHub Actions Build #121](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42610350047).
- Artefak NRO diagnostik tunggal: [pes-nxvk-properties2-diagnostic-nro](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42610350047/artifacts/13670921124). Arsip artefak berukuran 2.836.635 bytes; berisi `pes_loader_smoke.nro`.
- Artefak kumpulan smoke NRO dan library: [nxvk-switch-smoke-nros-c3abea1](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42610350047/artifacts/13670288907). Berisi NRO diagnostik PES, NRO smoke upstream, library NVK/support, metadata pkg-config, header Vulkan, dan lisensi.
- Artefak log/diagnostik build: [nxvk-switch-build-diagnostics](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42610350047/artifacts/13670372644).

**Pemeriksaan hasil #121:** log build mengonfirmasi toolchain NXVK selesai, `libnvk.a` dan `libnvk_support.a` dihasilkan, dua NRO smoke upstream dibangun, dan NRO diagnostik PES berhasil di-link. Step summary secara eksplisit menyatakan PES runtime link tidak dijalankan, full-game NRO tidak dibangun, dan tes perangkat Switch fisik belum dilakukan. Peringatan compiler tentang aggregate initializer tidak menggagalkan build.

**Batas bukti:** status success hanya membuktikan kompilasi dan pengemasan. Kode kini memiliki urutan acquire → command buffer/image layout transition → queue submit → render-complete semaphore → present, tetapi keberhasilan pemanggilan API tersebut pada Horizon/NVK belum terbukti sampai NRO dijalankan di Switch dan log runtime diperiksa. Belum ada bukti full-game boot atau gameplay.

**Pembaruan CI 9 November 2026 (commit `a2c67a77b92aab5aced54e6a6a4f2f91c94330b4`):** perbaikan logging diagnostik menggunakan `va_copy` terpisah untuk output file dan layar agar pemanggilan `vfprintf` tidak menghabiskan argumen sebelum `vprintf`. Tiga workflow pada commit ini berhasil:
- [Tests](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42612820154) — **11/11 CTest lulus**.
- [Nintendo Switch NRO](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42612812471) — bootstrap NRO berhasil dibangun dan diunggah; ini bukan full-game NRO.
- [Switch NVK feasibility spike](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42612812430) — seluruh 11 langkah job berhasil, termasuk build toolchain NXVK, library, dan NRO smoke/diagnostik. Artefak terbaru:
  - [pes-nxvk-properties2-diagnostic-nro](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42612812430/artifacts/13671866255) — NRO diagnostik PES untuk pengujian di perangkat.
  - [nxvk-switch-smoke-nros-c3abea1](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42612812430/artifacts/13671207722) — NRO smoke NXVK dan library/header.
  - [nxvk-switch-build-diagnostics](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42612812430/artifacts/13671936084) — log dan metadata build.

Log job terbaru memastikan file NRO diagnostik PES berhasil di-link dan diunggah. Namun step summary tetap menyatakan PES runtime link tidak dijalankan, full-game NRO tidak dibangun, dan tes fisik masih menunggu. Peringatan compiler terkait initializer Vulkan dan deprecation Node tidak menggagalkan build. Perubahan logging juga belum membuktikan hasil Vulkan runtime; tahap 2 tetap menunggu hasil menjalankan NRO diagnostik di Switch.

**Hasil pengujian perangkat fisik (log yang diterima 9 November 2026):**
- NXVK static ICD, `vkCreateInstance`, VI surface, enumerasi GPU/physical device, dan `vkCreateDevice` berhasil.
- GPU terdeteksi sebagai NVIDIA Tegra X1 (NVK gm20b); surface mengiklankan 3 image, extent 1280×720, format 37, dan FIFO.
- `vkCreateSwapchainKHR` belum kembali. Trace WSI menunjukkan jalur zero-copy gagal lalu fallback CPU-copy berjalan; pembuatan image, alokasi/map memory, bind image, dan awal perekaman command buffer berhasil.
- Log berhenti setelah marker `[WSI-FINISH] before blit_image_to_buffer`. Karena itu belum ada bukti swapchain berhasil dibuat, enumerasi swapchain image, queue submit, atau present.
- `nvk_mesa.log` mencatat `nvk wsi: zero-copy FAILED`; pesan ini sendiri bukan diagnosis akhir karena fallback CPU-copy juga dijalankan.
- Commit diagnostik berikutnya `77d4b2cbc29eb9c717703da1632e43c09a73cdb7` menambahkan marker sebelum/sesudah setiap dispatch Vulkan dalam helper CPU-copy (`CmdPipelineBarrier` dan `CmdCopyImageToBuffer`) untuk mengisolasi titik berhenti pada pengujian ulang.
- **Catatan CI instrumentasi (9 November 2026):**
- Percobaan workflow `42657374423` gagal pada langkah instrumentasi, sebelum kompilasi NXVK, karena pencocokan batas helper CPU-copy memakai pola newline yang keliru.
- Ini adalah kegagalan skrip diagnostik, bukan kegagalan build NVK atau hasil pengujian Switch.
- Diperbaiki pada commit `a17cdcbbabff61a50213827d991b8d05c8dfc5a1`: sekarang memakai anchor sumber WSI yang persis dan menambahkan marker sebelum/sesudah kedua barrier serta copy-image-to-buffer.
- Build ulang dari commit perbaikan diperlukan sebelum NRO diagnostik baru dapat dibagikan.

**Status tahap 2: belum lulus; menunggu build diagnostik terbaru dan log pengujian ulang.**

**Kriteria lulus tahap 2:** jalankan `pes_loader_smoke.nro` pada Switch; pastikan log menunjukkan pembuatan swapchain sukses, jumlah dan enumerasi image, submit sukses, present sukses, serta tidak ada error NVK/WSI. Simpan log yang dihasilkan NRO dan kirimkan untuk dianalisis. Jika gagal, gunakan trace WSI/NVK dan marker tahap terakhir untuk mengisolasi operasi yang gagal. Setelah runtime present terbukti, baru lanjut ke integrasi backend grafis PES.

### 8.2 Kebijakan pemilihan renderer

NXVK tetap merupakan jalur feasibility yang sedang diukur, bukan keputusan final. Arsitektur Vulkan pada referensi BO2-360-NX dapat dipelajari untuk desain dan pola integrasi, tetapi tidak boleh diasumsikan langsung kompatibel dengan PES atau otomatis lebih cepat. Vulkan adalah API; implementasi driver Vulkan untuk Switch tetap diperlukan. Tidak ada migrasi permanen sampai hasil perbandingan teknis cukup kuat dan keputusan tersebut disetujui.

### 8.3 Cara mengurangi pengujian perangkat

Maksimalkan CI, code review, pemeriksaan statis, build, dan smoke test yang dapat direproduksi. Gabungkan pemeriksaan hardware yang memang tidak dapat dibuktikan CI ke checkpoint NRO diagnostik yang terencana; hindari NRO uji berulang tanpa pertanyaan teknis baru. Pengujian akhir pada Switch tetap diperlukan untuk membuktikan Horizon runtime, driver, VI/present, dan gameplay. Jangan mengklaim playable sebelum tahap 8 selesai.

### 8.4 Pekerjaan subsistem yang berjalan paralel

- **Recompiler:** telusuri 44 word yang belum ter-decode dan dua dispatch jump table; verifikasi batas fungsi serta target branch.
- **Kernel/services:** audit 69 import stub, prioritaskan jalur startup, lalu implementasikan dan uji thread, event, synchronization, memory, dan file I/O.
- **Loader/data:** tuntaskan dynamic library loading dan symbol resolution; pastikan struktur SD, validasi executable, update, save dan data persisten.
- **Grafis:** setelah checkpoint renderer dipilih, uji shader, texture, render target, depth/stencil, format, synchronization, memory, dan present.
- **Audio/input:** hubungkan XMA/audio, validasi sample rate/buffer/latency, serta controller selama permainan.

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
