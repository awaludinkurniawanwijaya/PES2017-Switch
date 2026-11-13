#pragma once

// Keep the C++ prerequisites in one forced-include file. CMake de-duplicates
// compile options; two separate "-include" pairs can lose the second "-include"
// and accidentally pass loader.h to the compiler as another source file.
#include <cstdint>
#include "gpu/vulkan/loader.h"
