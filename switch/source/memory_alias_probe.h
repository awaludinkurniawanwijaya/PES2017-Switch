#pragma once

#include <switch/types.h>

namespace switch_memory_probe
{
    struct ResultInfo
    {
        Result create = 0xFFFFFFFFu;
        Result map[3]{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu};
        bool coherent = false;
        bool available = false;
    };

    ResultInfo Run();
}
