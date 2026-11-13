#pragma once
#include <cstdint>
#include <cstddef>
#include "../xe/shader_analysis.h"
#include <string>
#include <vector>

// Xenos shader microcode -> SPIR-V.
//
// The title compiles nothing at runtime: it hands the GPU microcode its offline
// compiler produced. A Vulkan backend has to translate that while the title
// runs, so this lives in the runtime rather than in a tool.
//
// What comes out has a fixed interface, which is what lets one pipeline layout
// serve every shader: a vertex shader writes gl_Position and its interpolators
// to locations 0..15; a pixel shader reads those and writes colours to 0..3.
namespace shader
{
    using Type = xenos::ShaderType;

    struct Translation
    {
        bool ok = false;
        std::string error;                  // why not, when not
        std::vector<uint32_t> spirv;

        // Xenos-level resource and output analysis, shared by GPU backends.
        xenos::ShaderAnalysis analysis;

        // SPIR-V interface metadata: 0 = 2D, 1 = cube, 2 = 3D.
        uint8_t textureKinds[xenos::kTextureSlotCount]{};

        uint32_t instructionCount = 0;
        // Exports the hardware has no output for, dropped rather than failed.
        uint32_t droppedExports = 0;
        // Writes to guest memory, dropped for want of anywhere to put them.
        uint32_t droppedMemoryExports = 0;
    };

    // `words` is the program in host byte order, `count` its length in dwords.
    // `scale` is how many times wider and taller than the title's the render
    // targets are; past 1 the shader takes bindings::kScaledPushOffset.
    Translation Translate(Type type, const uint32_t* words, size_t count, uint32_t scale = 1);

    std::string Describe(const Translation& result);
}
