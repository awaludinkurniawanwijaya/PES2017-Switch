#pragma once

#include <cstddef>
#include <cstdint>

namespace gpu
{

// Hash shader microcode using FNV-1a.
inline uint64_t ShaderHash(const uint32_t* code, size_t words)
{
    uint64_t hash = 1469598103934665603ull;
    for (size_t i = 0; i < words; i++)
    {
        hash ^= code[i];
        hash *= 1099511628211ull;
    }
    return hash;
}

// What a PM4 draw packet carries beyond the register file.
struct DrawCall
{
    uint32_t primitive = 0;
    uint32_t indexCount = 0;
    bool indexed = false;
    bool index32 = false;
    uint32_t indexAddress = 0; // guest virtual, already resolved

    const uint32_t* vertexCode = nullptr;
    size_t vertexWords = 0;
    uint64_t vertexHash = 0;

    const uint32_t* pixelCode = nullptr;
    size_t pixelWords = 0;
    uint64_t pixelHash = 0;
};

} // namespace gpu
