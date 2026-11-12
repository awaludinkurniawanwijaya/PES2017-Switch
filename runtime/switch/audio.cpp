#include "audio.h"

extern "C"
{
#include <switch/services/audout.h>
}

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstring>

namespace
{
    constexpr uint32_t kSampleRate = 48000;
    constexpr uint32_t kChannels = 2;
    constexpr uint32_t kPoolSize = 8;
    constexpr uint32_t kBufferBytes = 0x1000;
    constexpr uint32_t kSamplesPerFrame = 256;
    constexpr uint32_t kFrameBytes = kSamplesPerFrame * kChannels * sizeof(int16_t);

    // audout requires each backing buffer and its capacity to be 0x1000 aligned.
    alignas(0x1000) uint8_t g_storage[kPoolSize][kBufferBytes]{};
    AudioOutBuffer g_buffers[kPoolSize]{};
    bool g_initialised = false;
    bool g_started = false;
    uint32_t g_outputRate = 0;
    uint32_t g_outputChannels = 0;
    PcmFormat g_format = PcmFormat_Invalid;

    int16_t ToPcm16(float value)
    {
        value = std::max(-1.0f, std::min(1.0f, value));
        const long scaled = std::lrintf(value * 32767.0f);
        return static_cast<int16_t>(std::max(-32768L, std::min(32767L, scaled)));
    }
}

bool switch_audio::Initialise()
{
    if (g_initialised) return true;
    Result rc = audoutInitialize();
    if (R_FAILED(rc)) return false;

    char deviceName[0x100]{};
    AudioOutState state{};
    rc = audoutOpenAudioOut("Default", deviceName, kSampleRate, kChannels,
                            &g_outputRate, &g_outputChannels, &g_format, &state);
    if (R_FAILED(rc))
    {
        audoutExit();
        return false;
    }
    if (g_outputRate != kSampleRate || g_outputChannels != kChannels ||
        g_format != PcmFormat_Int16)
    {
        audoutExit();
        return false;
    }

    for (uint32_t i = 0; i < kPoolSize; ++i)
    {
        g_buffers[i] = {};
        g_buffers[i].buffer = g_storage[i];
        g_buffers[i].buffer_size = kBufferBytes;
    }
    rc = audoutStartAudioOut();
    if (R_FAILED(rc))
    {
        audoutExit();
        return false;
    }
    g_started = true;
    g_initialised = true;
    return true;
}

uint32_t switch_audio::QueuedFrames()
{
    if (!g_initialised) return 0;
    uint32_t count = 0;
    for (uint32_t i = 0; i < kPoolSize; ++i)
    {
        bool queued = false;
        if (R_SUCCEEDED(audoutContainsAudioOutBuffer(&g_buffers[i], &queued)) && queued)
            ++count;
    }
    return count;
}

bool switch_audio::Submit(const float* input, uint32_t samples)
{
    if (!g_initialised || !input || samples != kSamplesPerFrame) return false;

    AudioOutBuffer* freeBuffer = nullptr;
    for (uint32_t i = 0; i < kPoolSize; ++i)
    {
        bool queued = false;
        if (R_FAILED(audoutContainsAudioOutBuffer(&g_buffers[i], &queued))) continue;
        if (!queued) { freeBuffer = &g_buffers[i]; break; }
    }
    if (!freeBuffer) return false;

    auto* output = static_cast<int16_t*>(freeBuffer->buffer);
    for (uint32_t i = 0; i < samples; ++i)
    {
        // Guest order: FL, FR, FC, LFE, BL, BR. The handheld output is stereo.
        const float left = input[i * 6 + 0] + 0.70710678f * input[i * 6 + 2]
                         + 0.5f * input[i * 6 + 4];
        const float right = input[i * 6 + 1] + 0.70710678f * input[i * 6 + 2]
                          + 0.5f * input[i * 6 + 5];
        output[i * 2 + 0] = ToPcm16(left);
        output[i * 2 + 1] = ToPcm16(right);
    }

    freeBuffer->data_offset = 0;
    freeBuffer->data_size = kFrameBytes;
    return R_SUCCEEDED(audoutAppendAudioOutBuffer(freeBuffer));
}
