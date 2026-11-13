# PES 2017 untuk Nintendo Switch

Proyek eksperimental untuk mem-porting **Pro Evolution Soccer 2017 (PES 2017)** dari Xbox 360 ke Nintendo Switch.

> **Status proyek per 13 November 2026: masih dalam pengembangan dan belum playable.** Perbaikan pengelolaan heap Horizon untuk mengatasi kegagalan alokasi shared memory 512 MiB telah diterapkan pada source code. Build NRO penuh PES 2017 sedang dijalankan melalui GitHub Actions. Artefak NRO dari build terbaru belum selesai diverifikasi, dan belum ada bukti bahwa game berhasil boot atau menjalankan gameplay pada Nintendo Switch.

## Progres saat ini

| Bagian | Status |
|---|---|
| Validasi executable Xbox 360 | Berhasil; metadata XEX dan SHA-256 tervalidasi |
| Source hasil XenonRecomp | Tersedia di repositori PPC privat dan dipakai workflow build |
| Jumlah file source PPC | 1.418 file pada inventaris source yang disiapkan |
| Penanganan kernel import/runtime | 212 sudah diimplementasikan; 69 masih berupa stub |
| Checkout dan staging source PPC di CI | Berhasil pada run full NRO terbaru |
| Pengunduhan dan verifikasi BO2 Switch build kit yang dipatok | Berhasil pada run full NRO terbaru |
| Integrasi Mesa NVK/Nouveau untuk Switch | Terpasang dalam jalur build BO2; bukan driver Android Turnip |
| Build dan linking probe Vulkan/Mesa | Berhasil pada pengujian sebelumnya; probe bukan game penuh |
| Perbaikan pengelolaan heap Horizon | Diterapkan; batas heap yang dituju 768 MiB saat loader menyediakan heap override |
| Alokasi shared memory guest 512 MiB setelah perbaikan | Belum diverifikasi pada perangkat Switch |
| Kompilasi dan pengemasan NRO penuh PES 2017 | Sedang berlangsung di GitHub Actions |
| Artefak NRO penuh terbaru | Belum tersedia / belum diverifikasi |
| Pengujian boot game pada Switch | Belum berhasil dikonfirmasi |
| Pengujian menu, rendering PES, dan gameplay | Belum dimulai |

### Perubahan teknis terbaru — 13 November 2026

Masalah runtime yang sebelumnya teridentifikasi adalah kegagalan membuat shared memory 512 MiB:

`svcCreateSharedMemory(536870912)` mengembalikan `0x00010801` (`LimitReached`). Log pengukuran menunjukkan penggunaan resource Horizon sekitar 3.185 MiB dari batas 3.189 MiB, sehingga ruang yang tersisa tidak cukup untuk alokasi bank memori guest.

Penyebab yang ditemukan adalah heap override dari loader homebrew: nilai `__nx_heap_size` saja tidak membatasi ukuran heap ketika loader memberikan heap override. Perubahan pada `pes2017/runtime/switch/platform.cpp` kini mengganti inisialisasi heap libnx agar mencoba mengecilkan heap proses menjadi **768 MiB** menggunakan `svcSetHeapSize` ketika ukuran heap override lebih besar dari batas tersebut. Jika tidak ada heap override, inisialisasi meminta heap 768 MiB secara langsung.

- Commit perubahan heap: [`6eb7844`](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/commit/6eb7844b5969e49a32bc50d50f0e8ced534eef7c).
- Source terkait: [`pes2017/runtime/switch/platform.cpp`](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/blob/main/pes2017/runtime/switch/platform.cpp).
- **Catatan validasi:** perubahan source sudah diterapkan, tetapi keberhasilan mengecilkan heap dan keberhasilan pemetaan shared memory 512 MiB masih harus dibuktikan melalui log saat NRO dijalankan pada Switch. Angka 768 MiB adalah batas yang diminta oleh patch, bukan hasil pengukuran runtime yang sudah dikonfirmasi.

### Status build NRO penuh

Workflow build penuh telah dipindahkan ke lokasi yang dikenali GitHub Actions, yaitu `.github/workflows/switch-full-nro.yml`. Workflow mengambil source proyek, mengambil source PPC privat melalui secret/token repositori, memvalidasi target XEX, menyiapkan BO2 Switch build kit, lalu mengompilasi dan mengemas NRO.

Run terbaru yang diperiksa:

- [GitHub Actions — full PES 2017 NRO, run 43405746920](https://github.com/awaludinkurniawijaya/PES2017-Switch/actions/runs/43405746920).
- Checkout source, checkout PPC privat, validasi/staging PPC, serta unduhan dan verifikasi build kit telah selesai.
- Job masih berada pada tahap **Compile and package full PES 2017 NRO** ketika status terakhir diperiksa.
- Tahap verifikasi checksum dan upload artefak belum berjalan. Karena itu, NRO terbaru belum dapat dinyatakan selesai atau dibagikan sebagai hasil build terverifikasi.

Sebuah kegagalan workflow sebelumnya terjadi setelah kompilasi karena direktori build dibuat oleh Docker sebagai milik root sehingga runner tidak dapat menulis checksum. Workflow kemudian diperbaiki dengan mengembalikan kepemilikan direktori build kepada runner sebelum verifikasi. Perbaikan workflow tersebut sedang diuji pada run terbaru di atas.

## Lingkungan build dan tools

Proyek ini saat ini menggunakan:

- **Platform tujuan:** Nintendo Switch / Horizon OS
- **Alat recompilation PowerPC:** [XenonRecomp](https://github.com/hedge-dev/XenonRecomp)
- **Lingkungan build Switch:** [BO2 Switch build kit](https://github.com/AlvaroEPena/bo2-360-nx) dengan versi/commit yang dipatok oleh workflow
- **Compiler/toolchain:** [devkitPro](https://devkitpro.org/) dan [devkitA64](https://github.com/devkitPro/pacman-packages)
- **API grafis:** [Vulkan](https://www.vulkan.org/)
- **Driver grafis Switch:** Mesa NVK/Nouveau untuk NVIDIA Tegra X1 GM20B, melalui port [danfromtico/mesa-switch](https://github.com/danfromtico/mesa-switch)

Skrip build dan konfigurasi proyek dikelola di repositori ini. Build penuh membutuhkan source PPC hasil XenonRecomp dan manifest XEX yang cocok. Aset game dikelola secara terpisah dan tidak disertakan di repositori ini.

## Informasi executable

Executable Xbox 360 yang digunakan sebagai input proyek memiliki identitas berikut:

| Properti | Nilai |
|---|---|
| Executable | `default.xex` |
| Title ID | `0x4A3007D1` |
| Versi XEX | `0x00000012` |
| Ukuran file | `32,493,568 bytes` |
| SHA-256 | `b914ec9a1abb3a9b42a64255b6aa8ff27312da126f7c18f8c880106b832779e6` |

Nilai tersebut digunakan untuk mengidentifikasi executable input. File executable itu sendiri tidak didistribusikan di repositori ini.

## Proses build

Build penuh menggunakan workflow GitHub Actions atau skrip build repositori dengan toolchain Nintendo Switch yang telah dikonfigurasi.

Build baru dapat dinyatakan berhasil apabila seluruh tahapan berikut selesai:

1. Source PPC yang sesuai dengan executable target berhasil disiapkan.
2. Seluruh target source berhasil dikompilasi.
3. Aplikasi Switch berhasil di-link.
4. Aplikasi berhasil dikemas menjadi NRO.
5. File NRO dan checksum berhasil diverifikasi serta artefak berhasil diunggah.

Build yang berhasil hanya membuktikan proses kompilasi dan pengemasan. Hal tersebut belum membuktikan bahwa game dapat dijalankan, aset telah terintegrasi, atau gameplay berfungsi.

## Struktur data pada SD card

Runtime menggunakan direktori berikut pada kartu SD Nintendo Switch:

```text
sdmc:/switch/PES2017/
├── pes17.nro
├── game/
│   ├── default.xex
│   └── *.cpk
├── config/
│   └── PES.toml
└── saves/
```

Letakkan executable dan CPK milik sendiri pada direktori `game/`. NRO hasil build ditempatkan pada direktori utama `PES2017/`. Struktur dan nama file final tetap dapat berubah mengikuti hasil integrasi runtime.

## Tahapan pengujian berikutnya

Setelah NRO penuh berhasil dibuat dan tersedia, validasi dilakukan bertahap:

1. **Validasi artefak** — memeriksa keberadaan NRO, ukuran file, dan checksum.
2. **Pengujian alokasi memori** — memeriksa log Horizon untuk memastikan heap berhasil dibatasi dan shared memory guest 512 MiB berhasil dibuat serta dipetakan.
3. **Pengujian startup runtime** — memeriksa inisialisasi XEX, kernel imports, thread, filesystem, dan subsistem runtime.
4. **Pengujian Vulkan** — memeriksa inisialisasi instance/device, pemilihan GPU, surface, swapchain, dan rendering awal.
5. **Pengujian menu dan aset** — memeriksa layar judul, menu, tekstur, model, stadion, serta audio.
6. **Pengujian gameplay** — menguji pemilihan tim, memulai pertandingan, kontrol pemain, audio, dan satu pertandingan penuh.
7. **Stabilitas dan performa** — menyelidiki crash, sumber daya yang hilang, masalah grafis, penggunaan memori, frame rate, dan kompatibilitas.

Tahapan tersebut adalah rencana validasi. Jangan menyimpulkan game sudah boot atau playable hanya dari keberhasilan build NRO atau probe Vulkan.

## Pemberitahuan hukum

Proyek ini merupakan proyek independen dan eksperimental, serta tidak berafiliasi dengan, didukung oleh, atau disponsori oleh Konami. PES 2017 dan seluruh konten gamenya tetap menjadi milik pemegang hak masing-masing. Repositori ini tidak menyediakan game komersial maupun aset berhak cipta miliknya. Gunakan hanya data game yang secara hukum berhak Anda gunakan.

Tools dan library pihak ketiga tetap tunduk pada lisensi serta ketentuan masing-masing. Tinjau dan patuhi ketentuan tersebut sebelum melakukan build atau mendistribusikan binary.

## Kontribusi, tools, dan ucapan terima kasih

Proyek ini masih bersifat eksperimental. Kontribusi, laporan bug yang dapat direproduksi, perbaikan build, laporan kompatibilitas, dan masukan pengujian dapat disampaikan melalui [GitHub Issues](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/issues).

### Tools build dan pengembangan

- [XenonRecomp](https://github.com/hedge-dev/XenonRecomp) — alat recompilation PowerPC.
- [BO2 Switch build kit](https://github.com/AlvaroEPena/bo2-360-nx) — referensi lingkungan build Nintendo Switch.
- [devkitPro](https://devkitpro.org/) / [devkitA64](https://github.com/devkitPro/pacman-packages) — toolchain homebrew Nintendo Switch.
- [Vulkan](https://www.vulkan.org/) — API grafis.
- [Mesa](https://www.mesa3d.org/) — proyek driver grafis open-source.

### Sumber driver Vulkan Nintendo Switch

Driver grafis Switch yang digunakan oleh BO2 Switch build kit adalah **Mesa NVK (Nouveau Vulkan)** untuk GPU NVIDIA Tegra X1 GM20B pada Horizon OS. Driver ini bukan Android Adreno Turnip.

- [danfromtico/mesa-switch](https://github.com/danfromtico/mesa-switch) — port Mesa untuk Nintendo Switch; BO2 build kit menggunakan base commit `1a8c1a66d6f`.
- [BO2 Switch build kit](https://github.com/AlvaroEPena/bo2-360-nx) — membangun driver Mesa/NVK melalui `tools/build_mesa.sh` dan menerapkan patch [`patches/mesa-bo2zm.patch`](https://github.com/AlvaroEPena/bo2-360-nx/blob/main/patches/mesa-bo2zm.patch).
- Proses build menghasilkan library statis `libvulkan.a`, yang di-link ke NRO Switch melalui konfigurasi CMake Switch milik build kit. Driver ini dibundel ke dalam NRO, bukan dipasang sebagai paket driver Android terpisah pada SD card.

Tiga sumber paket Turnip yang sebelumnya tercantum di sini (K11MCH1, StevenMXZ, dan MrPurple666), bersama libadrenotools, merupakan bagian dari fitur opsional driver Adreno untuk port Android. Keduanya bukan sumber driver Vulkan untuk NRO Nintendo Switch.

### Library lainnya

- [SDL](https://github.com/libsdl-org/SDL) — library input dan windowing lintas platform.
- [Dear ImGui](https://github.com/ocornut/imgui) — library antarmuka pengguna immediate-mode.
- [FFmpeg](https://ffmpeg.org/) — framework multimedia; proyek ini menyertakan komponen yang berfokus pada XMA.

Saat melaporkan masalah, sertakan log build, lingkungan perangkat atau emulator, serta langkah-langkah untuk mereproduksi masalah. Jangan lampirkan file game atau aset berhak cipta ke laporan issue.
