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

Perbaikan diagnostik terbaru menutup celah pada pengujian sebelumnya: marker `stage 9` dahulu tidak diikuti pemanggilan `vkCreateSwapchainKHR`. Kode sekarang benar-benar memanggil fungsi tersebut, memeriksa `VK_SUCCESS`, mencatat handle, lalu melanjutkan enumerasi swapchain images. Karena itu, log lama yang berhenti pada marker stage 9 tidak boleh ditafsirkan sebagai bukti bahwa fungsi pembuatan swapchain macet.

Status CI yang terakhir diperiksa pada 9 November 2026:
- Tests #243: berhasil.
- Nintendo Switch NRO #156: berhasil membuat **bootstrap NRO saja**; bukan NRO diagnostik Vulkan dan bukan game.
- Switch NVK feasibility #97: masih berjalan pada pemeriksaan terakhir. Tunggu workflow ini selesai, lalu periksa job, log, dan artefak. Jangan menguji bootstrap NRO sebagai pengganti NRO diagnostik.

**Kriteria lulus tahap 2:** NRO diagnostik yang benar-benar menjalankan `vkCreateSwapchainKHR` berhasil pada Switch, swapchain images dapat dienumerasi, dan present dapat dibuktikan. Jika gagal, gunakan log untuk menentukan batas kegagalan sebelum memilih langkah berikutnya.

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
