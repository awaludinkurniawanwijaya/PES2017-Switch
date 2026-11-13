#include "pipeline.h"
#include "provider.h"
#include "bindings.h"
#include "bc_decoder.h"
#include "../../env.h"
#include "../../log.h"
#include "../../report.h"

#ifndef PES17_HAVE_VULKAN
// No loader, so nothing here can be built. The callers all tolerate a device
// that never comes up, because that is what a machine with no GPU gives them.
bool vk::pipeline::Initialise(const vk::device::BorrowedContext*) { return false; }
void vk::pipeline::Shutdown() {}
void vk::pipeline::SaveCache() {}
void vk::pipeline::SaveCacheThrottled() {}
void vk::pipeline::FlushCache() {}
bool vk::pipeline::Ready() { return false; }
bool vk::pipeline::GetMemoryProperties(void*, size_t) { return false; }
bool vk::pipeline::GetDeviceProperties(void*, size_t) { return false; }
bool vk::pipeline::DepthStencilResolveSampleZero() { return false; }
bool vk::pipeline::GetPhysicalDeviceFeatures(void*, size_t) { return false; }
const char* vk::pipeline::DeviceName() { return "none"; }
void*    vk::pipeline::Instance() { return nullptr; }
void*    vk::pipeline::Device() { return nullptr; }
void*    vk::pipeline::PhysicalDevice() { return nullptr; }
void*    vk::pipeline::Queue() { return nullptr; }
uint32_t vk::pipeline::QueueFamily() { return 0; }
bool     vk::pipeline::PreciseOcclusionQueries() { return false; }
float    vk::pipeline::MaxAnisotropy() { return 1.0f; }
bool     vk::pipeline::NonSeamlessCubes() { return false; }
bool     vk::pipeline::PipelineLibraries() { return false; }
bool     vk::pipeline::HasDynamicRendering() { return false; }
bool     vk::pipeline::HasExtendedDynamicState() { return false; }
bool     vk::pipeline::LegacyMode() { return false; }
bool     vk::pipeline::StaticStates() { return true; }
bool     vk::pipeline::TextureCompressionBC() { return false; }
bool     vk::pipeline::BcFormatSampled(uint32_t) { return false; }
bool     vk::pipeline::AstcSampled() { return false; }
std::mutex& vk::pipeline::QueueMutex() { static std::mutex m; return m; }
void*    vk::pipeline::SetLayout(uint32_t) { return nullptr; }
void*    vk::pipeline::Layout() { return nullptr; }
void*    vk::pipeline::Cache() { return nullptr; }
bool vk::pipeline::CreateModule(const uint32_t*, size_t, const char** error)
{
    if (error) *error = "built without Vulkan";
    return false;
}
bool vk::pipeline::Failed(int vkResult, const char*) { return vkResult != 0; }
void vk::pipeline::OnDeviceLost(void (*)(const char*)) {}
#else

#include <algorithm>
#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#ifdef PES17_ANDROID
#include "../../android/android.h"
#endif
#include "../../env.h"

#include <vulkan/vulkan.h>
#include "loader.h"

#if defined(PES17_VULKAN_DYNAMIC)
namespace { bool OpenVulkan() { std::string error; return vk::loader::Open(error); } }
#else
namespace { bool OpenVulkan() { return true; } }
#endif

namespace
{
    namespace bindings = vk::bindings;
    constexpr uint32_t kTextureSlots = bindings::kTextureSlots;

    struct State
    {
        // Owns a headless Provider context only; Presenter contexts are borrowed.
        bool ownsContext = false;
        std::unique_ptr<vk::provider::Context> ownedProvider;
        const vk::device::Device* deviceContext = nullptr;
        VkInstance instance = VK_NULL_HANDLE;
        VkPhysicalDevice physical = VK_NULL_HANDLE;
        VkDevice device = VK_NULL_HANDLE;
        VkQueue queue = VK_NULL_HANDLE;
        uint32_t family = 0;
        VkDescriptorSetLayout sets[3]{};
        VkPipelineLayout layout = VK_NULL_HANDLE;
        VkPipelineCache cache = VK_NULL_HANDLE;
        VkPhysicalDeviceProperties deviceProperties{};
        std::string lastError;
    };
    State g;

    // Invalidate Pipeline's non-owning aliases and its cache-identity copy.
    // The Provider Context / Device remains the sole authority for GPU state.
    void ResetDeviceSnapshot()
    {
        g.physical = VK_NULL_HANDLE;
        g.deviceContext = nullptr;
        g.deviceProperties = {};
    }

    const char* Explain(VkResult r)
    {
        switch (r)
        {
        case VK_SUCCESS: return "ok";
        case VK_ERROR_OUT_OF_HOST_MEMORY: return "out of host memory";
        case VK_ERROR_OUT_OF_DEVICE_MEMORY: return "out of device memory";
        case VK_ERROR_INVALID_SHADER_NV: return "driver rejected the shader";
        case VK_ERROR_INITIALIZATION_FAILED: return "initialisation failed";
        case VK_ERROR_EXTENSION_NOT_PRESENT: return "extension not present";
        case VK_ERROR_FEATURE_NOT_PRESENT: return "feature not present";
        case VK_ERROR_INCOMPATIBLE_DRIVER: return "incompatible driver";
        default: return "failed";
        }
    }

}

namespace
{
    std::atomic<void (*)(const char*)> g_deviceLost{ nullptr };

}

void vk::pipeline::OnDeviceLost(void (*handler)(const char*)) { g_deviceLost = handler; }

bool vk::pipeline::Failed(int vkResult, const char* where)
{
    if (vkResult == VK_SUCCESS) return false;
    if (vkResult == VK_ERROR_DEVICE_LOST)
    {
        static std::atomic<bool> reported{ false };
        if (!reported.exchange(true))
        {
            LOGE("vulkan: the device was lost at %s -- the driver reset the GPU under this"
                 " run (after a GPU page fault or a hang; `journalctl -k | grep amdgpu` has"
                 " the fault), and nothing submitted from here on will finish. Ending the run.",
                 where);
            if (g.deviceContext) g.deviceContext->ReportFault();
            if (auto handler = g_deviceLost.load()) handler("the Vulkan device was lost");
        }
    }
    return true;
}


namespace
{
    // Enough of a device to compile shaders on. No surface, no swapchain: the
    // point is to reach the driver's compiler, which needs neither.
    bool BringUpHeadless()
    {
        if (!OpenVulkan()) { LOGW("pipeline: no Vulkan library"); return false; }

        g.ownedProvider = vk::provider::Context::Create(true);
        if (!g.ownedProvider) return false;
        auto abandon = []() {
            g.ownedProvider.reset();
            g.instance = VK_NULL_HANDLE;
            g.device = VK_NULL_HANDLE;
            g.queue = VK_NULL_HANDLE;
            g.family = 0;
            g.ownsContext = false;
            ResetDeviceSnapshot();
            return false;
        };
        if (!g.ownedProvider->SelectHeadlessDevice() ||
            !g.ownedProvider->CreateLogicalDevice(nullptr, 0))
            return abandon();
        g.instance = g.ownedProvider->InstanceHandle();
        g.physical = g.ownedProvider->PhysicalHandle();
        g.device = g.ownedProvider->LogicalHandle();
        g.queue = g.ownedProvider->QueueHandle();
        g.family = g.ownedProvider->QueueFamily();
        g.deviceContext = g.ownedProvider->DeviceObject();
        g.ownsContext = true;
        return true;
    }

    bool CreateSetLayouts()
    {
        const VkShaderStageFlags both = VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT;

        // The constant blocks, dynamic because every draw takes its own snapshot
        // of the register file into the arena and points at it by offset.
        VkDescriptorSetLayoutBinding constants[bindings::kConstantBlocks]{};
        for (uint32_t i = 0; i < bindings::kConstantBlocks; i++)
        {
            constants[i].binding = i;
            constants[i].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
            constants[i].descriptorCount = 1;
            constants[i].stageFlags = both;
        }

        // The layout declares every texture slot, so every shader -- each
        // declaring only the slots it samples -- is compatible with it.
        VkDescriptorSetLayoutBinding textures[kTextureSlots]{};
        for (uint32_t i = 0; i < kTextureSlots; i++)
        {
            textures[i].binding = i;
            textures[i].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            textures[i].descriptorCount = 1;
            textures[i].stageFlags = both;
        }

        VkDescriptorSetLayoutBinding memory{};
        memory.binding = bindings::kArenaBinding;
        // Dynamic: bound with the slot's offset into the arena, so the shaders see one slot's share as the
        // whole buffer and the arena may be larger than maxStorageBufferRange (which is 128 MB on an Adreno 735).
        memory.descriptorType = VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC;
        memory.descriptorCount = 1;
        memory.stageFlags = both;

        struct Set { const VkDescriptorSetLayoutBinding* bindings; uint32_t count; };
        Set sets[3];
        sets[bindings::kConstantSet] = { constants, bindings::kConstantBlocks };
        sets[bindings::kTextureSet] = { textures, kTextureSlots };
        sets[bindings::kArenaSet] = { &memory, 1 };
        for (uint32_t i = 0; i < 3; i++)
        {
            VkDescriptorSetLayoutCreateInfo info{ VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO };
            info.bindingCount = sets[i].count;
            info.pBindings = sets[i].bindings;
            VkResult r = vkCreateDescriptorSetLayout(g.device, &info, nullptr, &g.sets[i]);
            if (r != VK_SUCCESS)
            {
                LOGW("pipeline: descriptor set layout %u failed (%s)", i, Explain(r));
                return false;
            }
        }

        // Register state, not shader state, so not part of a pipeline key.
        // A stage has one range, so each runs on to the scaled slots both read.
        constexpr uint32_t kEnd = bindings::kScaledPushOffset + bindings::kScaledPushBytes;
        VkPushConstantRange ranges[2]{};
        ranges[0].stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
        ranges[0].offset = bindings::kPixelPushOffset;
        ranges[0].size = kEnd - bindings::kPixelPushOffset;
        ranges[1].stageFlags = VK_SHADER_STAGE_VERTEX_BIT;
        ranges[1].offset = bindings::kVertexPushOffset;
        ranges[1].size = kEnd - bindings::kVertexPushOffset;

        VkPipelineLayoutCreateInfo info{ VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO };
        info.setLayoutCount = 3;
        info.pSetLayouts = g.sets;
        info.pushConstantRangeCount = 2;
        info.pPushConstantRanges = ranges;
        VkResult r = vkCreatePipelineLayout(g.device, &info, nullptr, &g.layout);
        if (r != VK_SUCCESS) { LOGW("pipeline: layout failed (%s)", Explain(r)); return false; }
        return true;
    }

    // Without it the cache still works, just only within one run.
    const char* CachePath()
    {
        static std::string pathStr;
        if (!pathStr.empty()) return pathStr.c_str();
        if (env::Flag("PES17_NO_PIPELINE_CACHE")) return nullptr;
        if (const char* path = env::Text("PES17_PIPELINE_CACHE"))
        {
            pathStr = path;
            return pathStr.c_str();
        }
#ifdef PES17_ANDROID
        if (!android::GetPaths().cache.empty())
        {
            pathStr = android::GetPaths().cache + "/pipeline.vkcache";
            return pathStr.c_str();
        }
#endif
        return nullptr;
    }

    struct PipelineCacheHeader
    {
        uint32_t magic = 0x32435056; // 'VPC2' (Vulkan Pipeline Cache 2)
        uint32_t version = 1;
        uint32_t vendorID = 0;
        uint32_t deviceID = 0;
        uint32_t driverVersion = 0;
        uint8_t  pipelineCacheUUID[VK_UUID_SIZE]{};
        uint64_t dataSize = 0;
    };

    // Whether this GPU's VkPipelineCache is persisted to disk across sessions.
    // Mali has historically had driver bugs with cross-session cache blobs, which is why
    // it was off for it; but without it every launch rebuilds every pipeline the match
    // load meets -- hundreds at 300-464 ms on a Poco X6 Pro (Mali-G615), and on a POCO X7
    // Pro (Mali-G720, driver 1.3.278) a slow stretch of twenty seconds after kick-off that
    // a filled cache cut to a few. On that driver the blob loads and verifies run after run
    // (248 KB, then 1991 KB as more pipelines are met). If a driver rejects a blob,
    // CreateCache logs it and falls back to an empty cache, so a failure is soft.
    // PES17_PERSIST_PIPELINE_CACHE=0 turns it off for a GPU that misbehaves.
    bool IsMali() { return g.deviceProperties.vendorID == 0x13B5; }

    bool PersistCache()
    {
        const char* value = env::Text("PES17_PERSIST_PIPELINE_CACHE");
        return !(value && value[0] == '0');
    }

    void CreateCache()
    {
        std::lock_guard lock(vk::pipeline::CacheMutex());
        if (env::Flag("PES17_NO_PIPELINE_CACHE"))
        {
            LOGI("pipeline: VkPipelineCache bypassed (PES17_NO_PIPELINE_CACHE)");
            return;
        }

        std::vector<uint8_t> initial;
        // PES17_PERSIST_PIPELINE_CACHE=0 keeps it to this session (see PersistCache above),
        // which still lets pipelines that share shaders reuse each other's ISA.
        if (PersistCache())
        {
            if (const char* path = CachePath())
            {
                LOGI("pipeline: checking persistent pipeline cache at: %s", path);
                if (std::FILE* f = std::fopen(path, "rb"))
                {
                    std::fseek(f, 0, SEEK_END);
                    const long fileSize = std::ftell(f);
                    std::fseek(f, 0, SEEK_SET);

                    if (fileSize > (long)sizeof(PipelineCacheHeader) && fileSize <= 64 * 1024 * 1024)
                    {
                        PipelineCacheHeader header{};
                        if (std::fread(&header, sizeof(header), 1, f) == 1)
                        {
                            const bool valid = (header.magic == 0x32435056 &&
                                                header.version == 1 &&
                                                header.vendorID == g.deviceProperties.vendorID &&
                                                header.deviceID == g.deviceProperties.deviceID &&
                                                header.driverVersion == g.deviceProperties.driverVersion &&
                                                std::memcmp(header.pipelineCacheUUID, g.deviceProperties.pipelineCacheUUID, VK_UUID_SIZE) == 0 &&
                                                header.dataSize == (uint64_t)(fileSize - sizeof(PipelineCacheHeader)));

                            if (valid)
                            {
                                initial.resize(header.dataSize);
                                if (std::fread(initial.data(), 1, header.dataSize, f) == header.dataSize)
                                {
                                    LOGI("pipeline: verified valid cache header for GPU %04X:%04X driver %08X (%zu KB payload)",
                                         header.vendorID, header.deviceID, header.driverVersion, initial.size() / 1024);
                                }
                                else
                                {
                                    initial.clear();
                                    LOGW("pipeline: truncated cache payload in %s, starting empty", path);
                                }
                            }
                            else
                            {
                                LOGW("pipeline: cache header in %s invalidated (driver/device update or UUID mismatch), starting fresh", path);
                            }
                        }
                    }
                    else if (fileSize > 0)
                    {
                        LOGW("pipeline: cache file %s size invalid (%ld bytes), ignoring", path, fileSize);
                    }
                    std::fclose(f);
                }
            }
        }
        else
        {
            LOGI("pipeline: the pipeline cache is not kept across runs (PES17_PERSIST_PIPELINE_CACHE=0)");
        }

        VkPipelineCacheCreateInfo info{ VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO };
        info.initialDataSize = initial.size();
        info.pInitialData = initial.empty() ? nullptr : initial.data();
        if (vkCreatePipelineCache(g.device, &info, nullptr, &g.cache) != VK_SUCCESS)
        {
            LOGW("pipeline: driver rejected pipeline cache data, falling back to empty cache");
            info.initialDataSize = 0;
            info.pInitialData = nullptr;
            vkCreatePipelineCache(g.device, &info, nullptr, &g.cache);
        }
        else if (!initial.empty())
        {
            LOGI("pipeline: successfully loaded and verified %zu KB of persistent pipeline cache", initial.size() / 1024);
        }
    }

    void SaveCache()
    {
        // Do not persist cache blobs to disk on Mali by default --
        // in-session use only. PES17_PERSIST_PIPELINE_CACHE=1 keeps saving.
        if (!PersistCache()) return;
        const char* path = CachePath();
        if (!path || !g.cache) return;
        // The driver's blob is copied under the lock the compiles also take, and
        // the file is written after it is let go: a 2 MB write to flash held a
        // lock every pipeline build waits on, and a draw waits on those.
        std::vector<uint8_t> data;
        {
            std::lock_guard lock(vk::pipeline::CacheMutex());
            size_t size = 0;
            if (vkGetPipelineCacheData(g.device, g.cache, &size, nullptr) != VK_SUCCESS || !size) return;
            data.resize(size);
            if (vkGetPipelineCacheData(g.device, g.cache, &size, data.data()) != VK_SUCCESS) return;
            data.resize(size);
        }
        const size_t size = data.size();

        PipelineCacheHeader header{};
        header.vendorID = g.deviceProperties.vendorID;
        header.deviceID = g.deviceProperties.deviceID;
        header.driverVersion = g.deviceProperties.driverVersion;
        std::memcpy(header.pipelineCacheUUID, g.deviceProperties.pipelineCacheUUID, VK_UUID_SIZE);
        header.dataSize = size;

        std::string tmpPath = std::string(path) + ".tmp";
        if (std::FILE* f = std::fopen(tmpPath.c_str(), "wb"))
        {
            const size_t writtenHdr = std::fwrite(&header, sizeof(header), 1, f);
            const size_t writtenData = std::fwrite(data.data(), 1, size, f);
            const int closed = std::fclose(f);
            if (writtenHdr == 1 && writtenData == size && closed == 0 && std::rename(tmpPath.c_str(), path) == 0)
            {
                LOGI("pipeline: wrote verified %zu KB pipeline cache to %s", (size + sizeof(header)) / 1024, path);
            }
            else
            {
                std::remove(tmpPath.c_str());
                LOGW("pipeline: failed to write pipeline cache to %s", path);
            }
        }
    }

    VkShaderModule MakeModule(const uint32_t* spirv, size_t words, VkResult& result)
    {
        VkShaderModuleCreateInfo info{ VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO };
        info.codeSize = words * 4;
        info.pCode = spirv;
        VkShaderModule module = VK_NULL_HANDLE;
        result = vkCreateShaderModule(g.device, &info, nullptr, &module);
        return module;
    }
}

bool vk::pipeline::Initialise(const vk::device::BorrowedContext* borrowedContext)
{
    if (g.device)
    {
        const bool sameBorrowed = borrowedContext && borrowedContext->Complete() &&
            !g.ownsContext && g.deviceContext == borrowedContext->device &&
            g.instance == borrowedContext->instance->Handle();
        const bool sameHeadless = !borrowedContext && g.ownsContext;
        if (sameBorrowed || sameHeadless) return true;
        LOGW("pipeline: refusing to reinitialise with a different Device context");
        return false;
    }

    // A borrowed device is an all-or-nothing tuple. Falling through to the
    // headless path when only some handles were supplied would silently ignore
    // the caller's device and could create a second, unrelated GPU context.
    if (borrowedContext && !borrowedContext->Complete())
    {
        LOGW("pipeline: incomplete borrowed Vulkan device context");
        return false;
    }
    if (borrowedContext)
    {
        g.instance = static_cast<VkInstance>(borrowedContext->instance->Handle());
        g.device = static_cast<VkDevice>(borrowedContext->device->Logical());
        g.physical = static_cast<VkPhysicalDevice>(borrowedContext->device->Physical());
        g.queue = static_cast<VkQueue>(borrowedContext->device->Queue());
        g.family = borrowedContext->device->QueueFamily();
        g.deviceContext = borrowedContext->device;
        g.ownsContext = false;
    }
    else if (!BringUpHeadless())
    {
        return false;
    }

    if (!g.deviceContext || !g.deviceContext->Complete() ||
        !g.deviceContext->GetDeviceProperties(&g.deviceProperties, sizeof(g.deviceProperties)))
    {
        LOGW("pipeline: Provider supplied no complete Device capability snapshot");
        Shutdown();
        return false;
    }
    const VkPhysicalDeviceProperties props = g.deviceProperties;

    // A bug report is read against the driver's known faults.
    if (report::On())
    {
        VkPhysicalDeviceDriverProperties driver{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES };
        g.deviceContext->GetDriverProperties(&driver, sizeof(driver));
        LOGI("report: graphics %s (%04X:%04X), driver %s %s (%08X), Vulkan %u.%u.%u", props.deviceName,
             props.vendorID, props.deviceID, driver.driverName, driver.driverInfo, props.driverVersion,
             VK_API_VERSION_MAJOR(props.apiVersion), VK_API_VERSION_MINOR(props.apiVersion),
             VK_API_VERSION_PATCH(props.apiVersion));
    }

    if (!CreateSetLayouts()) { Shutdown(); return false; }
    CreateCache();
    LOGI("pipeline: layout ready on %s", vk::pipeline::DeviceName());
    return true;
}

void vk::pipeline::Shutdown()
{
    if (!g.device)
    {
        // Presenter may have created a Device but failed before Pipeline
        // adopted its borrowed context. Clear metadata from that attempt.
        g.ownedProvider.reset();
        g.instance = VK_NULL_HANDLE;
        g.queue = VK_NULL_HANDLE;
        g.family = 0;
        g.ownsContext = false;
        g.deviceContext = nullptr;
        ResetDeviceSnapshot();
        return;
    }
    SaveCache();
    // The fault callback is device-scoped. Clear it before an owned device is
    // destroyed, and also when the device is borrowed and will be destroyed by
    // the presenter after pipeline resources have gone away.
    if (g.cache) vkDestroyPipelineCache(g.device, g.cache, nullptr);
    if (g.layout) vkDestroyPipelineLayout(g.device, g.layout, nullptr);
    for (VkDescriptorSetLayout& set : g.sets)
        if (set) { vkDestroyDescriptorSetLayout(g.device, set, nullptr); set = VK_NULL_HANDLE; }
    g.cache = VK_NULL_HANDLE;
    g.layout = VK_NULL_HANDLE;
    if (g.ownsContext)
    {
        g.ownedProvider.reset();
    }
    // Pipeline keeps only a borrowed copy of Presenter-owned handles. Clear
    // those copies too: after Shutdown no accessor may expose a dead/stale
    // context, even though Pipeline must not destroy the presenter's objects.
    g.device = VK_NULL_HANDLE;
    g.instance = VK_NULL_HANDLE;
    g.deviceContext = nullptr;
    ResetDeviceSnapshot();
    g.queue = VK_NULL_HANDLE;
    g.family = 0;
    g.ownsContext = false;
}

bool vk::pipeline::Ready() { return g.device != VK_NULL_HANDLE; }
bool vk::pipeline::GetMemoryProperties(void* properties, size_t size)
{
    return g.deviceContext && g.deviceContext->GetMemoryProperties(properties, size);
}
bool vk::pipeline::GetDeviceProperties(void* properties, size_t size)
{
    return g.deviceContext && g.deviceContext->GetDeviceProperties(properties, size);
}
bool vk::pipeline::DepthStencilResolveSampleZero()
{
    return g.deviceContext && g.deviceContext->DepthStencilResolveSampleZero();
}
bool vk::pipeline::GetPhysicalDeviceFeatures(void* features, size_t size)
{
    return g.deviceContext && g.deviceContext->GetPhysicalDeviceFeatures(features, size);
}
const char* vk::pipeline::DeviceName() { return g.deviceContext ? g.deviceContext->Name() : "none"; }
void*    vk::pipeline::Instance() { return g.instance; }
void*    vk::pipeline::Device() { return g.device; }
void*    vk::pipeline::PhysicalDevice() { return g.physical; }
void*    vk::pipeline::Queue() { return g.queue; }
uint32_t vk::pipeline::QueueFamily() { return g.family; }
bool     vk::pipeline::PreciseOcclusionQueries() { return g.deviceContext && g.deviceContext->PreciseOcclusionQueries(); }
float    vk::pipeline::MaxAnisotropy() { return g.deviceContext ? g.deviceContext->MaxAnisotropy() : 1.0f; }
bool     vk::pipeline::NonSeamlessCubes() { return g.deviceContext && g.deviceContext->NonSeamlessCubes(); }
// PES17_NO_PIPELINE_LIBRARIES=1 builds whole pipelines at the first draw instead.
bool     vk::pipeline::PipelineLibraries()
{
    static const bool refused = env::Flag("PES17_NO_PIPELINE_LIBRARIES");
    return g.deviceContext && g.deviceContext->PipelineLibraries() && g.deviceContext->FastLinking() && !refused;
}
bool     vk::pipeline::HasDynamicRendering() { return g.deviceContext && g.deviceContext->HasDynamicRendering(); }
bool     vk::pipeline::HasExtendedDynamicState() { return g.deviceContext && g.deviceContext->HasExtendedDynamicState(); }
bool     vk::pipeline::LegacyMode() { return !g.deviceContext || g.deviceContext->LegacyMode(); }
bool     vk::pipeline::StaticStates() { return !g.deviceContext || g.deviceContext->StaticStates(); }
bool     vk::pipeline::TextureCompressionBC() { return g.deviceContext && g.deviceContext->TextureCompressionBC(); }
bool     vk::pipeline::AstcSampled() { return g.deviceContext && g.deviceContext->AstcSampled(); }
bool     vk::pipeline::BcFormatSampled(uint32_t xenosFormat)
{
    switch (xenosFormat)
    {
    case 18: case 51: return g.deviceContext && g.deviceContext->BcFormatSampled(0);
    case 19: case 52: return g.deviceContext && g.deviceContext->BcFormatSampled(1);
    case 20: case 53: return g.deviceContext && g.deviceContext->BcFormatSampled(2);
    case 59:          return g.deviceContext && g.deviceContext->BcFormatSampled(3);
    case 49:          return g.deviceContext && g.deviceContext->BcFormatSampled(4);
    default:          return false;
    }
}
std::mutex& vk::pipeline::QueueMutex() { static std::mutex m; return m; }
std::mutex& vk::pipeline::CacheMutex() { static std::mutex m; return m; }
std::mutex& vk::pipeline::CreationMutex() { static std::mutex m; return m; }
void*    vk::pipeline::SetLayout(uint32_t set) { return set < 3 ? g.sets[set] : nullptr; }
void*    vk::pipeline::Layout() { return g.layout; }
void*    vk::pipeline::Cache()
{
    // Mali: return the handle for in-session ISA reuse.
    // (Not persisted to disk -- see SaveCache above.)
    static const bool noCache = env::Flag("PES17_NO_PIPELINE_CACHE");
    if (noCache) return nullptr;
    return g.cache;
}
void     vk::pipeline::SaveCache() { ::SaveCache(); }

// What the warmup worker calls after a compile: at most one write in 30 s. The
// blob only grows, so skipping one loses nothing but the last few pipelines, and
// Shutdown (and the pause flush, FlushCache) save the rest.
namespace
{
    std::atomic<bool> g_cacheDirty{ false };
    std::atomic<int64_t> g_lastCacheSaveMs{ 0 };
    int64_t NowMs()
    {
        return std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count();
    }
}

void vk::pipeline::SaveCacheThrottled()
{
    g_cacheDirty.store(true, std::memory_order_relaxed);
    const int64_t now = NowMs();
    if (now - g_lastCacheSaveMs.load(std::memory_order_relaxed) < 30000) return;
    g_lastCacheSaveMs.store(now, std::memory_order_relaxed);
    g_cacheDirty.store(false, std::memory_order_relaxed);
    ::SaveCache();
}

void vk::pipeline::FlushCache()
{
    if (!g_cacheDirty.exchange(false, std::memory_order_relaxed)) return;
    g_lastCacheSaveMs.store(NowMs(), std::memory_order_relaxed);
    ::SaveCache();
}

bool vk::pipeline::CreateModule(const uint32_t* spirv, size_t words, const char** error)
{
    if (!g.device) { if (error) *error = "no device"; return false; }
    VkResult r;
    VkShaderModule module = MakeModule(spirv, words, r);
    if (r != VK_SUCCESS)
    {
        g.lastError = Explain(r);
        if (error) *error = g.lastError.c_str();
        return false;
    }
    vkDestroyShaderModule(g.device, module, nullptr);
    return true;
}

#endif  // PES17_HAVE_VULKAN
