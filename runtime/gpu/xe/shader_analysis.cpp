#include "shader_analysis.h"

#include <algorithm>
#include <string>
#include <vector>

namespace xenos
{
    namespace
    {
        void RecordConstant(
            const Alu& op, uint32_t source, ShaderAnalysis& result)
        {
            if (op.SourceConstantIsAddressed(source))
            {
                result.addressedConstants = true;
                return;
            }

            const uint32_t index =
                op.SourceRegister(source) % kFloatConstantCount;
            result.constantsRead = std::max(result.constantsRead, index + 1);
        }

        void AnalyzeAluConstants(const Alu& op, ShaderAnalysis& result)
        {
            const VectorOpcode vector = op.Vector();
            const bool isKill =
                vector == VectorOpcode::KillEq ||
                vector == VectorOpcode::KillGt ||
                vector == VectorOpcode::KillGe ||
                vector == VectorOpcode::KillNe;

            if (isKill ||
                (op.IsExport()
                    ? op.VectorResultMask() != 0
                    : op.VectorWriteMask() != 0))
            {
                const uint32_t operands = VectorOperandCount(vector);
                for (uint32_t source = 1; source <= operands; source++)
                {
                    if (!op.SourceIsTemp(source))
                        RecordConstant(op, source, result);
                }
            }

            const ScalarOpcode scalar = op.Scalar();
            if (op.ScalarWriteMask() ||
                scalar != ScalarOpcode::RetainPrev)
            {
                if (scalar == ScalarOpcode::RetainPrev ||
                    scalar == ScalarOpcode::SetpClr)
                    return;

                const bool scalarConstant =
                    scalar >= ScalarOpcode::Mulsc0 &&
                    scalar <= ScalarOpcode::Subsc1;

                if (scalarConstant || !op.SourceIsTemp(3))
                    RecordConstant(op, 3, result);
            }
        }
    }

    bool AnalyzeShader(
        ShaderType type,
        const uint32_t* words,
        size_t count,
        std::vector<ControlFlow>& flow,
        ShaderAnalysis& result,
        std::string& error)
    {
        result = {};
    flow.clear();

        if (!words || count < 3)
        {
            error = "program is too short";
            return false;
        }

            size_t i = 0;

        while (i + 3 <= count && flow.size() < 512)
        {
            ControlFlow first, second;
            UnpackControlFlow(
                words[i], words[i + 1], words[i + 2],
                first, second);
            i += 3;

            flow.push_back(first);
            if (first.IsEnd())
                goto control_flow_decoded;

            flow.push_back(second);
            if (second.IsEnd())
                goto control_flow_decoded;
        }

        error = "control flow does not terminate";
        return false;

    control_flow_decoded:
        result.linear = true;
        result.forwardJumpsOnly = true;

        uint32_t jumps = 0;

        for (uint32_t n = 0; n < flow.size(); n++)
        {
            const ControlFlow& cf = flow[n];

            switch (cf.Opcode())
            {
            case ControlFlowOpcode::Nop:
            case ControlFlowOpcode::Alloc:
            case ControlFlowOpcode::MarkVsFetchDone:
            case ControlFlowOpcode::Exec:
            case ControlFlowOpcode::ExecEnd:
            case ControlFlowOpcode::CondExec:
            case ControlFlowOpcode::CondExecEnd:
            case ControlFlowOpcode::CondExecPred:
            case ControlFlowOpcode::CondExecPredEnd:
            case ControlFlowOpcode::CondExecPredClean:
            case ControlFlowOpcode::CondExecPredCleanEnd:
                break;

            case ControlFlowOpcode::CondJmp:
                result.linear = false;
                jumps++;
                if (cf.Target() <= n)
                    result.forwardJumpsOnly = false;
                break;

            default:
                result.linear = false;
                result.forwardJumpsOnly = false;
                break;
            }
        }

        if (jumps == 0 && result.linear)
            result.forwardJumpsOnly = false;

        uint32_t lastSlot = kVertexFetchSlotCount;

        for (const ControlFlow& cf : flow)
        {
            if (!cf.IsExec())
                continue;

            for (uint32_t n = 0; n < cf.Count(); n++)
            {
                const size_t at = size_t(cf.Address() + n) * 3;
                if (at + 3 > count)
                    continue;

                if (cf.IsFetch(n))
                {
                    Fetch f{ words[at], words[at + 1], words[at + 2] };

                    if (type == ShaderType::Pixel &&
                        f.SourceRegister() < kInterpolatorCount)
                    {
                        result.interpolatorMask |=
                            1u << f.SourceRegister();
                    }

                    if (f.Opcode() == FetchOpcode::TextureFetch)
                    {
                        const uint32_t slot = f.ConstantIndex() & 31;
                        result.textureMask |= 1u << slot;
                        result.textureDimensions[slot] = f.Dimension();
                    }
                    else if (f.Opcode() == FetchOpcode::VertexFetch)
                    {
                        result.vertexFetchMask |=
                            1u << f.ConstantIndex();

                        if (!f.IsMiniFetch() && f.MustBeOne())
                        {
                            result.haveFetchBase = true;

                            if (f.ConstantSelect() < 3)
                            {
                                result.vertexFetchSubs[f.ConstantSelect()] |=
                                    1u << f.ConstantIndex();
                                lastSlot = f.VertexFetchSlot();
                            }
                        }

                        if (lastSlot < kVertexFetchSlotCount)
                        {
                            uint32_t& stride =
                                result.vertexFetchStride[lastSlot];
                            uint32_t& tail =
                                result.vertexFetchTail[lastSlot];

                            stride = std::max(stride, f.Stride());
                            tail = std::max(
                                tail,
                                uint32_t(std::max(f.Offset(), 0)) + 4);
                        }
                    }

                    continue;
                }

                Alu a{ words[at], words[at + 1], words[at + 2] };
                AnalyzeAluConstants(a, result);

                if (type == ShaderType::Pixel)
                {
                    for (uint32_t s = 1; s <= 3; s++)
                    {
                        if (a.SourceIsTemp(s))
                        {
                            const uint32_t reg =
                                a.SourceRegister(s) & 0x3F;

                            if (reg < kInterpolatorCount)
                                result.interpolatorMask |= 1u << reg;
                        }
                    }
                }

                if (!a.IsExport())
                    continue;

                const uint32_t dest = a.VectorDest();

                if (type == ShaderType::Vertex)
                {
                    if (dest >= kExportMemoryAddress &&
                        dest <= kExportMemoryLast)
                    {
                        result.writesMemory = true;
                    }
                }
                else
                {
                    if (dest < 4)
                        result.colourMask |= 1u << dest;
                    else if (dest == kExportDepth)
                        result.writesDepth = true;
                }
            }
        }

        if (type == ShaderType::Vertex)
        {
            result.interpolatorMask =
                (1u << kInterpolatorCount) - 1;
        }

        error.clear();
        return true;
    }
}
