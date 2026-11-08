#include "memory_alias_probe.h"

#include <switch/result.h>
#include <switch/kernel/svc.h>
#include <switch/kernel/shmem.h>

#include <cstdint>

switch_memory_probe::ResultInfo switch_memory_probe::Run()
{
    ResultInfo out{};
    constexpr size_t kProbeSize = 0x1000;

    SharedMemory bank{};
    out.create = shmemCreate(&bank, kProbeSize, Perm_Rw, Perm_DontCare);
    if (R_FAILED(out.create)) return out;

    SharedMemory aliases[2]{};
    shmemLoadRemote(&aliases[0], bank.handle, kProbeSize, Perm_Rw);
    shmemLoadRemote(&aliases[1], bank.handle, kProbeSize, Perm_Rw);

    out.map[0] = shmemMap(&bank);
    if (R_SUCCEEDED(out.map[0]))
        out.map[1] = shmemMap(&aliases[0]);
    if (R_SUCCEEDED(out.map[0]) && R_SUCCEEDED(out.map[1]))
        out.map[2] = shmemMap(&aliases[1]);

    if (R_SUCCEEDED(out.map[0]) && R_SUCCEEDED(out.map[1]) &&
        R_SUCCEEDED(out.map[2]))
    {
        auto* first = static_cast<volatile uint32_t*>(bank.map_addr);
        auto* second = static_cast<volatile uint32_t*>(aliases[0].map_addr);
        auto* third = static_cast<volatile uint32_t*>(aliases[1].map_addr);
        *first = 0x50455331u;
        out.coherent = (*second == 0x50455331u) && (*third == 0x50455331u);
        out.available = out.coherent;
    }

    if (aliases[1].map_addr) shmemUnmap(&aliases[1]);
    if (aliases[0].map_addr) shmemUnmap(&aliases[0]);
    if (bank.map_addr) shmemUnmap(&bank);
    svcCloseHandle(bank.handle);
    return out;
}
