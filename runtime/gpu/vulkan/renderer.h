#pragma once
#include <cstdint>
#include <cstddef>
#include "../draw.h"

namespace gpu { struct RegisterFile; }

// The draw path: register file in, Vulkan out.
//
// A PM4 draw packet says only "go": everything it draws with is whatever the
// register file holds at that moment, so this takes the register file plus the
// handful of things the packet carries, and issues the draw.
//
// It builds an image per EDRAM surface rather than an emulation of EDRAM
// (docs/rendering.md): a resolve copies a surface out to an image a later fetch
// binds, clears it if the resolve asks, and the title's own clear idiom is
// answered with clears of the images it names.
namespace vk::renderer
{
    bool Initialise();
    void Shutdown();
    bool Ready();

    // The phone's thermal status, PowerManager's THERMAL_STATUS_* (0 none .. 6 shutdown). Any
    // thread; the dynamic scene scale (PES17_DYNAMIC_SCALE) reads it at the next frame.
    void SetThermalStatus(int status);

    // The title made a shader object over this microcode while loading a
    // level (shader_preload.cpp): it is translated and compiled on a worker
    // thread now, so its first draw finds it ready. Any thread; returns at once.
    void PrepareShader(bool pixel, const uint32_t* code, size_t words);

    void Draw(const gpu::RegisterFile& registers, const gpu::DrawCall& call);

    // A draw issued in copy mode: copy the colour or depth target where the
    // copy registers say it goes.
    void Resolve(const gpu::RegisterFile& registers);

    // The swap packet: the frame is what was resolved to this front buffer.
    void Swap(uint32_t frontBuffer);
    // Asks the render thread to write the shader and pipeline caches at its next frame
    // (the app was paused or is leaving: the periodic writes are throttled to 30 s).
    // Safe to call from any thread.
    void RequestCacheFlush();

    // The title's own occlusion query, bracketed by two EVENT_WRITE_ZPD events.
    // Everything drawn between the two is counted. The count is ready when the
    // GPU has got there, as on the console, where the title polls the record
    // the GPU writes: EndOcclusionQuery answers at once only when there is
    // nothing to count; otherwise the bracket goes out with the frame's
    // submission, and CollectOcclusionQueries hands the count, with `tag`, to
    // `deliver` once the GPU has finished.
    void BeginOcclusionQuery();
    bool EndOcclusionQuery(uint32_t tag, uint64_t& samples);
    void CollectOcclusionQueries(void (*deliver)(uint32_t tag, uint64_t samples));

    // F7, or Y on the pad during a flash hunt: somebody saw a flash. Logged at
    // once; the frames kept before it are written at the next present
    // (PES17_FLASH_FRAMES, PES17_FLASH_DIR). `how` names the key.
    void FlashSeen(const char* how);

    // The last submission the GPU has finished, for what keeps copies the GPU
    // reads (gpu/memory_watch.h).
    uint64_t CompletedSubmission();

    // The command stream is about to write [physical, physical + size) -- the
    // image pool's copy, at its draw. A texture a draw of the submission being
    // recorded already samples must not be re-read after the write, because
    // the refresh before a submit stages for every draw in it: those draws
    // would sample memory written after them. So such a submission goes now.
    void BeforeStreamWrite(uint32_t physical, uint32_t size);

    // The command processor is about to tell the title that the work before
    // this point has finished -- an end-of-pipe event's write, D3D's fence
    // among them, or anything it writes once it has waited for the GPU to go
    // idle. Once told, the title may free what those draws read and put
    // something else there; the console's GPU had read it by then. So every
    // read of guest memory owed to the draws so far is made now
    // (vk::textures::EndSegment), and nothing read later reaches them.
    void BeforeCompletion();

    // The resolves written back so far land in guest memory, once the submission their copies
    // went out in has finished. A write-back is a copy queued in the frame, not a wait of its
    // own: the title can only read what the GPU wrote after the GPU says so -- an end-of-pipe
    // write, an interrupt -- and the command processor calls this before each.
    void PublishWriteBacks();

    // True while files/dump_frame is writing a frame's draws to the log.
    bool DumpingDraws();

    void Report();
}
