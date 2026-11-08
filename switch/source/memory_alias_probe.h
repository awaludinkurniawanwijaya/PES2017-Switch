#pragma once

#include <switch/types.h>

namespace switch_memory_probe
{
    struct ResultInfo
    {
        Result create = 0;
        Result map[3]{};
        bool coherent = false;
        bool available = false;
    };

    ResultInfo Run();
}
