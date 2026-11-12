# PES 2017 untuk Nintendo Switch

Proyek eksperimental untuk mem-porting **Pro Evolution Soccer 2017 (PES 2017)** ke Nintendo Switch.

> **Status proyek: masih dalam pengembangan.** NRO penuh PES 2017 sedang dalam proses kompilasi. NRO game lengkap belum berhasil diproduksi, dijalankan, atau diverifikasi dapat dimainkan. Probe Vulkan terpisah hanya digunakan untuk menguji lingkungan build dan bukan merupakan game.

## Progres saat ini

| Bagian | Status |
|---|---|
| Persiapan source code game PPC | Source hasil generate tersedia |
| Jumlah file source PPC | 1.418 file |
| Penanganan kernel import/runtime | 212 sudah diimplementasikan; 69 masih berupa stub |
| Checkout dan staging source | Berhasil |
| Pengunduhan dan verifikasi BO2 Switch build kit yang dipatok | Berhasil |
| Build dan linking probe Vulkan/Mesa | Berhasil — hanya smoke test lingkungan build |
| Kompilasi penuh dan pengemasan NRO PES 2017 | Sedang berlangsung |
| Artefak NRO penuh PES 2017 | Belum tersedia |
| Pengujian peluncuran dan runtime | Belum dimulai |
| Pengujian gameplay | Belum dimulai |

Angka progres menggambarkan kondisi pengembangan saat ini dan dapat berubah seiring berjalannya pekerjaan.

## Lingkungan build dan tools

Proyek ini saat ini menggunakan:

- **Platform tujuan:** Nintendo Switch
- **Alat recompilation PowerPC:** [XenonRecomp](https://github.com/hedge-dev/XenonRecomp)
- **Lingkungan build Switch:** BO2 Switch build kit dengan versi yang dipatok
- **Compiler/toolchain:** [devkitPro](https://devkitpro.org/) dan [devkitA64](https://github.com/devkitPro/pacman-packages)
- **Komponen grafis:** [Vulkan](https://www.vulkan.org/) dan komponen [Mesa](https://www.mesa3d.org/) yang disediakan oleh lingkungan build yang dikonfigurasi

Skrip build dan konfigurasi proyek dikelola di repositori ini. Build penuh juga membutuhkan direktori source PPC yang telah disiapkan agar tersedia bagi proses build. Aset game dikelola secara terpisah dan tidak disertakan di repositori ini.

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

Build penuh menggunakan skrip build repositori dan toolchain Nintendo Switch yang telah dikonfigurasi.

Build baru dapat dinyatakan berhasil apabila seluruh tahapan berikut selesai:

1. Seluruh target source PPC berhasil dikompilasi.
2. Aplikasi Switch berhasil di-link.
3. Aplikasi berhasil dikemas menjadi NRO.
4. Artefak NRO penuh PES 2017 berhasil dibuat dan tersedia.

Build yang berhasil hanya membuktikan proses kompilasi dan pengemasan. Hal tersebut belum membuktikan bahwa game dapat dijalankan, aset telah terintegrasi, atau gameplay berfungsi.

## Tahapan pengujian berikutnya

Setelah NRO penuh berhasil dibuat, pekerjaan validasi direncanakan berlangsung secara bertahap:

1. **Validasi NRO** — memastikan file hasil pengemasan tersedia dan memiliki struktur yang valid.
2. **Integrasi data dan aset game** — memastikan data game yang dibutuhkan, seperti tekstur, model, data stadion, audio, dan sumber daya lainnya, dapat ditemukan serta dibaca oleh aplikasi. Sumber daya tersebut tidak otomatis ikut disertakan hanya karena NRO berhasil dikompilasi.
3. **Pengujian peluncuran** — menjalankan aplikasi pada emulator yang sesuai atau perangkat Nintendo Switch dan memeriksa kegagalan saat startup.
4. **Pengujian menu dan rendering** — memeriksa layar judul, menu, model, tekstur, stadion, serta keluaran grafis.
5. **Pengujian gameplay** — menguji pemilihan tim, memulai pertandingan, kontrol pemain, audio, dan satu pertandingan penuh.
6. **Stabilitas dan performa** — menyelidiki crash, sumber daya yang hilang, masalah grafis, penggunaan memori, frame rate, dan kompatibilitas.

Tahapan tersebut merupakan rencana validasi, bukan pengujian yang sudah dinyatakan berhasil.

## Pemberitahuan hukum

Proyek ini merupakan proyek independen dan eksperimental, serta tidak berafiliasi dengan, didukung oleh, atau disponsori oleh Konami. PES 2017 dan seluruh konten gamenya tetap menjadi milik pemegang hak masing-masing. Repositori ini tidak menyediakan game komersial maupun aset berhak cipta miliknya. Gunakan hanya data game yang secara hukum berhak Anda gunakan.

Tools dan library pihak ketiga tetap tunduk pada lisensi serta ketentuan masing-masing. Tinjau dan patuhi ketentuan tersebut sebelum melakukan build atau mendistribusikan binary.

## Kontribusi, tools, dan ucapan terima kasih

Proyek ini masih bersifat eksperimental. Kontribusi, laporan bug yang dapat direproduksi, perbaikan build, laporan kompatibilitas, dan masukan pengujian dapat disampaikan melalui [GitHub Issues](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/issues).

Tools, library, dan proyek driver berikut berkaitan dengan pengembangan serta dukungan driver grafis:

### Tools build dan pengembangan

- [XenonRecomp](https://github.com/hedge-dev/XenonRecomp) — alat recompilation PowerPC.
- [BO2 Switch build kit](https://github.com/AlvaroEPena/bo2-360-nx) — referensi lingkungan build Nintendo Switch yang digunakan dalam konfigurasi proyek.
- [devkitPro](https://devkitpro.org/) / [devkitA64](https://github.com/devkitPro/pacman-packages) — toolchain homebrew Nintendo Switch.
- [Vulkan](https://www.vulkan.org/) — API grafis.
- [Mesa](https://www.mesa3d.org/) — proyek driver grafis open-source dan upstream dari Turnip.

### Sumber driver Vulkan Nintendo Switch

Driver grafis Switch yang digunakan oleh BO2 Switch build kit adalah **Mesa NVK (Nouveau Vulkan)** untuk GPU NVIDIA Tegra X1 GM20B pada Horizon OS. Driver ini bukan Android Adreno Turnip.

- [danfromtico/mesa-switch](https://github.com/danfromtico/mesa-switch) — port Mesa untuk Nintendo Switch; BO2 build kit menggunakan base commit `1a8c1a66d6f`.
- [BO2 Switch build kit](https://github.com/AlvaroEPena/bo2-360-nx) — membangun driver Mesa/NVK melalui `tools/build_mesa.sh` dan menerapkan patch [`patches/mesa-bo2zm.patch`](https://github.com/AlvaroEPena/bo2-360-nx/blob/main/patches/mesa-bo2zm.patch).
- Proses build menghasilkan library statis `libvulkan.a`, yang di-link ke NRO Switch melalui konfigurasi CMake Switch milik build kit. Dengan demikian, driver ini dibundel ke dalam NRO dan bukan dipasang sebagai paket driver Android terpisah pada SD card.

Tiga sumber paket Turnip yang sebelumnya tercantum di sini (K11MCH1, StevenMXZ, dan MrPurple666), bersama libadrenotools, merupakan bagian dari fitur opsional driver Adreno untuk port Android. Keduanya bukan sumber driver Vulkan untuk NRO Nintendo Switch.

### Library lainnya

- [SDL](https://github.com/libsdl-org/SDL) — library input dan windowing lintas platform.
- [Dear ImGui](https://github.com/ocornut/imgui) — library antarmuka pengguna immediate-mode.
- [FFmpeg](https://ffmpeg.org/) — framework multimedia; proyek ini menyertakan komponen yang berfokus pada XMA.

Saat melaporkan masalah, sertakan log build, lingkungan perangkat atau emulator, serta langkah-langkah untuk mereproduksi masalah. Jangan lampirkan file game atau aset berhak cipta ke laporan issue.
