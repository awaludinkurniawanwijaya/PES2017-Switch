# Paket source investigasi memori Nintendo Switch

Folder ini mengumpulkan source yang relevan untuk menelusuri kegagalan alokasi shared memory PES 2017 pada Horizon OS.

## File proyek PES2017

- `guest_memory.cpp`
  - Mengambil statistik resource limit Horizon melalui `svcGetInfo`, `svcGetResourceLimitCurrentValue`, `svcGetResourceLimitLimitValue`, dan `svcGetResourceLimitPeakValue`.
  - Memuat log `Horizon memory resource current=... limit=... peak=...`.
  - Memanggil `svcCreateSharedMemory(&g_physicalBank, size, Perm_Rw, Perm_DontCare)`.
  - Ukuran bank fisik guest yang diminta adalah 512 MiB.
- `guest_memory.h`
  - Konstanta dan deklarasi rentang memori guest Xbox 360.
- `switch_platform.cpp`
  - Override weak symbol libnx `__nx_heap_size` dengan nilai saat ini `0x30000000` (768 MiB).
  - Nilai ini menentukan ukuran heap awal yang diminta libnx pada startup normal.
- `memory_alias_probe.cpp` dan `memory_alias_probe.h`
  - Probe terpisah untuk menguji reservasi alamat dan pemetaan alias shared memory kecil; probe ini bukan pengganti uji alokasi bank 512 MiB.

## Referensi upstream libnx

Subfolder `upstream-libnx/` berisi salinan referensi upstream:

- `libnx_init.c`: implementasi `__libnx_initheap()`. Di sinilah libnx membaca `__nx_heap_size` lalu memanggil `svcSetHeapSize(&addr, size)` saat tidak ada heap override dari loader.
- `libnx_svc.h`: deklarasi API SVC libnx, termasuk `svcSetHeapSize` dan `svcCreateSharedMemory`.

Sumber upstream: https://github.com/switchbrew/libnx
File: `nx/source/runtime/init.c` dan `nx/include/switch/kernel/svc.h`.
File upstream disalin sebagai bahan referensi; implementasi libnx yang dipakai saat build tetap berasal dari toolchain/devkitPro yang terpasang pada workflow dan belum tentu identik byte-per-byte dengan snapshot upstream ini.

## Urutan pemeriksaan yang disarankan

1. Periksa `switch_platform.cpp` untuk memastikan nilai `__nx_heap_size` yang tertanam pada build.
2. Periksa `libnx_init.c` untuk memahami kapan `svcSetHeapSize` dipanggil dan bagaimana heap awal dialokasikan.
3. Periksa `guest_memory.cpp` untuk membandingkan resource limit sebelum alokasi dengan hasil `svcCreateSharedMemory`.
4. Jangan langsung mengurangi ukuran bank guest 512 MiB tanpa validasi kompatibilitas memori Xbox 360.

Folder ini merupakan salinan untuk investigasi/review. File runtime utama tetap berada di `runtime/` dan tidak diubah oleh penyalinan ini.
