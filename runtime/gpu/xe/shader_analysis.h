#pragma once

#include <cstdint>
#include <cstddef>
#include <string>
#include <vector>

#include "xenos_ucode.h"

namespace xenos
{
    enum class ShaderType
    {
        Vertex,
        Pixel
    };

    struct ShaderAnalysis
    {
        uint32_t interpolatorMask = 0;
        uint32_t textureMask = 0;
        FetchDimension textureDimensions[kTextureSlotCount]{};

        uint32_t vertexFetchMask = 0;
        uint32_t vertexFetchSubs[3]{};
        uint32_t vertexFetchStride[kVertexFetchSlotCount]{};
        uint32_t vertexFetchTail[kVertexFetchSlotCount]{};

        // Float constant requirements shared by GPU backends.
        uint32_t constantsRead = 0;
        bool addressedConstants = false;

        uint32_t colourMask = 0;
        bool writesDepth = false;
        bool writesMemory = false;

        bool linear = false;
        bool forwardJumpsOnly = false;
        bool haveFetchBase = false;
    };

bool AnalyzeShader(
    ShaderType type,
    const uint32_t* words,
    size_t count,
    std::vector<ControlFlow>& flow,
    ShaderAnalysis& result,
    std::string& error);
}
