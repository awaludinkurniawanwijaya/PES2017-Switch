#pragma once
#include <cstdint>

namespace switch_audio
{
    // Opens the Switch stereo PCM output. Returns false when the service/device
    // is unavailable; callers must continue advancing the guest mixer silently.
    bool Initialise();
    uint32_t QueuedFrames();
    bool Submit(const float* interleaved5_1, uint32_t samples);
}
