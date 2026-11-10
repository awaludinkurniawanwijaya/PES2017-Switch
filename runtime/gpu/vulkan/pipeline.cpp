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
bool vk::pipeline::CreateDevice(void*, uint32_t, const char* const*, uint32_t, void**, void**, void*)
{
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
        bool preciseQueries = false;
        float maxAnisotropy = 1.0f;
        bool nonSeamlessCubes = false;
        bool pipelineLibraries = false, fastLinking = false;
        bool hasDynamicRendering = false;
        bool hasExtendedDynamicState = false;
        bool legacyMode = false;
        // Culling and the depth and stencil tests built into each pipeline instead of set per draw.
        bool staticStates = false;
        bool textureCompressionBC = false;
        // BC1, BC2, BC3, BC4, BC5: whether the driver samples each (with linear filtering and as a
        // copy destination), which is what Xenia asks of each format before using it.
        bool bcSampled[5]{};
        // ASTC 4x4 LDR, UNORM and sRGB: what a BC1 texture is transcoded to where BC is absent.
        bool astcSampled = false;
        std::string name = "none";

        VkDescriptorSetLayout sets[3]{};
        VkPipelineLayout layout = VK_NULL_HANDLE;
        VkPipelineCache cache = VK_NULL_HANDLE;
        VkPhysicalDeviceProperties deviceProperties{};
        VkPhysicalDeviceMemoryProperties memoryProperties{};
        bool memoryPropertiesReady = false;
        bool devicePropertiesReady = false;
        bool depthStencilResolveSampleZero = false;
        VkPhysicalDeviceFeatures physicalFeatures{};
        bool physicalFeaturesReady = false;
        VkPhysicalDevice snapshotPhysical = VK_NULL_HANDLE;
        std::string lastError;
    };
    State g;

    // Clear all metadata derived from a physical/logical-device bring-up. A failed
    // creation must not leave capabilities from that attempt visible to a later one.
    void ResetDeviceSnapshot()
    {
        g.physical = VK_NULL_HANDLE;
        g.deviceContext = nullptr;
        g.preciseQueries = false;
        g.maxAnisotropy = 1.0f;
        g.nonSeamlessCubes = false;
        g.pipelineLibraries = false;
        g.fastLinking = false;
        g.hasDynamicRendering = false;
        g.hasExtendedDynamicState = false;
        g.legacyMode = false;
        g.staticStates = false;
        g.textureCompressionBC = false;
        for (bool& sampled : g.bcSampled) sampled = false;
        g.astcSampled = false;
        g.name = "none";
        g.deviceProperties = {};
        g.devicePropertiesReady = false;
        g.memoryProperties = {};
        g.memoryPropertiesReady = false;
        g.depthStencilResolveSampleZero = false;
        g.physicalFeatures = {};
        g.physicalFeaturesReady = false;
        g.snapshotPhysical = VK_NULL_HANDLE;
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
    // VK_EXT_device_fault, where the driver has it: what the GPU was doing when the device
    // was lost (a faulting address and what kind of access, the vendor's own fault codes).
    std::atomic<PFN_vkGetDeviceFaultInfoEXT> g_faultInfo{ nullptr };
    std::atomic<VkDevice> g_faultDevice{ VK_NULL_HANDLE };

    void ReportDeviceFault()
    {
        const PFN_vkGetDeviceFaultInfoEXT info = g_faultInfo.load();
        const VkDevice device = g_faultDevice.load();
        if (!info || !device) return;
        VkDeviceFaultCountsEXT counts{ VK_STRUCTURE_TYPE_DEVICE_FAULT_COUNTS_EXT };
        if (info(device, &counts, nullptr) != VK_SUCCESS && counts.addressInfoCount == 0 &&
            counts.vendorInfoCount == 0)
        {
            LOGE("vulkan: the driver gave no fault report");
            return;
        }
        std::vector<VkDeviceFaultAddressInfoEXT> addresses(counts.addressInfoCount);
        std::vector<VkDeviceFaultVendorInfoEXT> vendor(counts.vendorInfoCount);
        VkDeviceFaultInfoEXT fault{ VK_STRUCTURE_TYPE_DEVICE_FAULT_INFO_EXT };
        fault.pAddressInfos = addresses.empty() ? nullptr : addresses.data();
        fault.pVendorInfos = vendor.empty() ? nullptr : vendor.data();
        counts.vendorBinarySize = 0;   // the binary dump is not read
        const VkResult r = info(device, &counts, &fault);
        LOGE("vulkan: fault report (%d): %s; %u address(es), %u vendor record(s)", int(r), fault.description,
             counts.addressInfoCount, counts.vendorInfoCount);
        static const char* const kinds[] = { "none", "read invalid", "write invalid", "execute invalid",
                                             "instruction pointer unknown", "instruction pointer invalid",
                                             "instruction pointer fault" };
        for (const VkDeviceFaultAddressInfoEXT& a : addresses)
            LOGE("vulkan:   %s at %016llX (precision %llu)", a.addressType < 7 ? kinds[a.addressType] : "?",
                 (unsigned long long)a.reportedAddress, (unsigned long long)a.addressPrecision);
        for (const VkDeviceFaultVendorInfoEXT& v : vendor)
            LOGE("vulkan:   vendor: %s (code %llX, data %llX)", v.description,
                 (unsigned long long)v.vendorFaultCode, (unsigned long long)v.vendorFaultData);
    }
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
            ReportDeviceFault();
            if (auto handler = g_deviceLost.load()) handler("the Vulkan device was lost");
        }
    }
    return true;
}

bool vk::pipeline::CreateDevice(void* physicalDevice, uint32_t family,
                                const char* const* extraExtensions, uint32_t extraCount,
                                void** deviceOut, void** queueOut, void* features)
{
    // A previous device may have exposed VK_EXT_device_fault. Never carry its
    // function pointer or handle into a new creation attempt.
    g_faultInfo.store(nullptr);
    g_faultDevice.store(VK_NULL_HANDLE);
    if (deviceOut) *deviceOut = nullptr;
    if (queueOut) *queueOut = nullptr;
    if (!physicalDevice || !deviceOut || !queueOut || (extraCount && !extraExtensions))
    {
        LOGW("vulkan: invalid logical-device creation arguments");
        return false;
    }
    if (g.device)
    {
        LOGW("vulkan: refusing to replace an active Pipeline device");
        return false;
    }
    ResetDeviceSnapshot();
    VkPhysicalDevice physical = static_cast<VkPhysicalDevice>(physicalDevice);
    uint32_t familyCount = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(physical, &familyCount, nullptr);
    if (family >= familyCount)
    {
        LOGW("vulkan: queue family %u is outside the device's %u families", family, familyCount);
        return false;
    }
    std::vector<VkQueueFamilyProperties> familyProperties(familyCount);
    vkGetPhysicalDeviceQueueFamilyProperties(physical, &familyCount, familyProperties.data());
    if (family >= familyCount || !familyProperties[family].queueCount)
    {
        LOGW("vulkan: queue family %u has no queues", family);
        return false;
    }
    VkPhysicalDeviceProperties physicalProperties{};
    vkGetPhysicalDeviceProperties(physical, &physicalProperties);
    g.deviceProperties = physicalProperties;
    g.devicePropertiesReady = true;
    g.physical = physical;

    const float priority = 1.0f;
    VkDeviceQueueCreateInfo queue{ VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO };
    queue.queueFamilyIndex = family;
    queue.queueCount = 1;
    queue.pQueuePriorities = &priority;

    // PES17_QUEUE_PRIORITY=low|medium|high|realtime: the queue's priority against other
    // processes' GPU work (the compositor's, a screen recorder's), where the driver offers
    // VK_KHR/EXT_global_priority and lists that level for the family. Unset asks for nothing.
    VkDeviceQueueGlobalPriorityCreateInfoKHR globalPriority{
        VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR };
    const char* priorityExtension = nullptr;
    {
        const char* wanted = env::Text("PES17_QUEUE_PRIORITY");
        VkQueueGlobalPriorityKHR level = VkQueueGlobalPriorityKHR(0);
        if (wanted)
        {
            if (std::strcmp(wanted, "low") == 0) level = VK_QUEUE_GLOBAL_PRIORITY_LOW_KHR;
            else if (std::strcmp(wanted, "medium") == 0) level = VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_KHR;
            else if (std::strcmp(wanted, "high") == 0) level = VK_QUEUE_GLOBAL_PRIORITY_HIGH_KHR;
            else if (std::strcmp(wanted, "realtime") == 0) level = VK_QUEUE_GLOBAL_PRIORITY_REALTIME_KHR;
        }
        if (level && vk::provider::DeviceHasExtension(physical, VK_KHR_GLOBAL_PRIORITY_EXTENSION_NAME))
            priorityExtension = VK_KHR_GLOBAL_PRIORITY_EXTENSION_NAME;
        else if (level && vk::provider::DeviceHasExtension(physical, VK_EXT_GLOBAL_PRIORITY_EXTENSION_NAME))
            priorityExtension = VK_EXT_GLOBAL_PRIORITY_EXTENSION_NAME;
        if (priorityExtension)
        {
            // The levels the family lists (VK_KHR_global_priority's query); a driver without
            // the query is asked anyway and may refuse with VK_ERROR_NOT_PERMITTED.
            uint32_t families = 0;
            vkGetPhysicalDeviceQueueFamilyProperties2(physical, &families, nullptr);
            std::vector<VkQueueFamilyGlobalPriorityPropertiesKHR> levels(
                families, { VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR });
            std::vector<VkQueueFamilyProperties2> properties(families, { VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2 });
            for (uint32_t i = 0; i < families; i++) properties[i].pNext = &levels[i];
            vkGetPhysicalDeviceQueueFamilyProperties2(physical, &families, properties.data());
            std::string listed;
            bool offered = family >= families || levels[family].priorityCount == 0;
            if (family < families)
                for (uint32_t i = 0; i < levels[family].priorityCount; i++)
                {
                    listed += " " + std::to_string(int(levels[family].priorities[i]));
                    if (levels[family].priorities[i] == level) offered = true;
                }
            LOGI("vulkan: queue priorities listed:%s; asking for %d (%s)", listed.empty() ? " none" : listed.c_str(),
                 int(level), offered ? "listed" : "not listed, not asked");
            if (offered)
            {
                globalPriority.globalPriority = level;
                queue.pNext = &globalPriority;
            }
            else priorityExtension = nullptr;
        }
    }

    VkPhysicalDeviceFeatures supported{};
    vkGetPhysicalDeviceFeatures(physical, &supported);
    g.physicalFeatures = supported;
    g.physicalFeaturesReady = true;
    g.snapshotPhysical = physical;
    VkPhysicalDeviceFeatures enabled{};
    // Robust buffer access, because the vertex fetch path reads the frame arena
    // at indices the guest's own data computes. One index past the end is,
    // without it, a GPU page fault: the driver retries it until the queue
    // stalls, and enough of them hung the whole machine. With it the read
    // returns zero or something in bounds, and the draw is merely wrong. Xenia
    // asks for the same thing for the same reason.
    enabled.robustBufferAccess = supported.robustBufferAccess;
    if (!supported.robustBufferAccess)
        LOGW("vulkan: the device offers no robust buffer access; an out-of-range vertex"
             " fetch will fault");
    // Compressed BC textures (BC1..BC5) used throughout the title. Strict drivers
    // (Mali, etc.) require this feature to be explicitly enabled before creating BC images.
    enabled.textureCompressionBC = supported.textureCompressionBC;
    enabled.textureCompressionASTC_LDR = supported.textureCompressionASTC_LDR;
    g.textureCompressionBC = supported.textureCompressionBC;
    // Adreno's compressed-sampling path has a known BC1-with-1-bit-alpha flicker:
    // surfaces sampling as black one frame and lit the next, missing geometry,
    // and vertex garbage in vegetation. The screenshot ban against it is the
    // same picture the Poco X6 Pro testers sent on Snapdragon devices that Mali
    // phones never show. Mali keeps hardware BC; colour ranges, lighting and
    // fog render identically with the hardware path there. Push Snapdragon
    // devices to the software BC decoder, whose results are correct on both.
    // PES17_FORCE_BC_HW=1 puts it back when a driver proves clean.
    // The env flag is also available to users who hit this on another GPU vendor.
    const vk::bc::AdrenoBC adrenoBc = vk::bc::AdrenoMode();
    if (physicalProperties.vendorID == 0x5143 && supported.textureCompressionBC &&
        !env::Flag("PES17_FORCE_BC_HW") && adrenoBc == vk::bc::AdrenoBC::kAll)
    {
        enabled.textureCompressionBC = VK_FALSE;
        g.textureCompressionBC = false;
        LOGW("vulkan: Adreno BC sampling disabled (known black/missing-geometry flicker);"
             " textures decode in software -- PES17_FORCE_BC_HW=1 re-enables hardware BC,"
             " PES17_ADRENO_BC=dxt1 keeps it for everything but the BC1 family");
    }
    else if (physicalProperties.vendorID == 0x5143 && supported.textureCompressionBC &&
             adrenoBc != vk::bc::AdrenoBC::kAll)
    {
        LOGW("vulkan: PES17_ADRENO_BC=%s: the driver's BC sampling is on"
             " (was off as the Adreno workaround); the BC1 family still decodes in software",
             adrenoBc == vk::bc::AdrenoBC::kHardware ? "hw" : "dxt1");
    }
    if (!supported.textureCompressionBC)
        LOGW("vulkan: the device does not report textureCompressionBC support");
    {
        constexpr VkFormatFeatureFlags kNeeded = VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT |
            VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT | VK_FORMAT_FEATURE_TRANSFER_DST_BIT;
        VkFormatProperties unorm{}, srgb{};
        vkGetPhysicalDeviceFormatProperties(physical, VK_FORMAT_ASTC_4x4_UNORM_BLOCK, &unorm);
        vkGetPhysicalDeviceFormatProperties(physical, VK_FORMAT_ASTC_4x4_SRGB_BLOCK, &srgb);
        g.astcSampled = supported.textureCompressionASTC_LDR &&
                        (unorm.optimalTilingFeatures & kNeeded) == kNeeded &&
                        (srgb.optimalTilingFeatures & kNeeded) == kNeeded;
        LOGI("vulkan: ASTC 4x4 sampling %s", g.astcSampled ? "supported" : "NOT supported");
    }
    {
        static const struct { VkFormat format; VkFormat srgb; const char* name; } kBc[5] = {
            { VK_FORMAT_BC1_RGBA_UNORM_BLOCK, VK_FORMAT_BC1_RGBA_SRGB_BLOCK, "BC1" },
            { VK_FORMAT_BC2_UNORM_BLOCK, VK_FORMAT_BC2_SRGB_BLOCK, "BC2" },
            { VK_FORMAT_BC3_UNORM_BLOCK, VK_FORMAT_BC3_SRGB_BLOCK, "BC3" },
            { VK_FORMAT_BC4_UNORM_BLOCK, VK_FORMAT_UNDEFINED, "BC4" },
            { VK_FORMAT_BC5_UNORM_BLOCK, VK_FORMAT_UNDEFINED, "BC5" } };
        constexpr VkFormatFeatureFlags kNeeded = VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT |
            VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT | VK_FORMAT_FEATURE_TRANSFER_DST_BIT;
        for (int i = 0; i < 5; ++i)
        {
            VkFormatProperties props{};
            vkGetPhysicalDeviceFormatProperties(physical, kBc[i].format, &props);
            bool ok = supported.textureCompressionBC && (props.optimalTilingFeatures & kNeeded) == kNeeded;
            if (ok && kBc[i].srgb != VK_FORMAT_UNDEFINED)
            {
                vkGetPhysicalDeviceFormatProperties(physical, kBc[i].srgb, &props);
                ok = (props.optimalTilingFeatures & kNeeded) == kNeeded;
            }
            g.bcSampled[i] = ok;
            LOGI("vulkan: %s sampling %s", kBc[i].name, ok ? "supported" : "NOT supported");
        }
    }
    // The title's occlusion queries are a sample count it compares against a
    // threshold, and without this a query is only allowed to answer "some".
    enabled.occlusionQueryPrecise = supported.occlusionQueryPrecise;
    g.preciseQueries = supported.occlusionQueryPrecise;
    // The title asks for anisotropic filtering on nearly every world texture
    // (2:1, once 4:1), and a sampler cannot give it unless the device enables it.
    enabled.samplerAnisotropy = supported.samplerAnisotropy;
    if (supported.samplerAnisotropy)
    {
        g.maxAnisotropy = physicalProperties.limits.maxSamplerAnisotropy;
    }

    // The image format list lets a resolve destination carry an sRGB view beside
    // its own without the driver giving up compression; naming it in an image's
    // pNext without enabling it is invalid.
    std::vector<const char*> extensions;
    if (extraCount) extensions.assign(extraExtensions, extraExtensions + extraCount);
    if (vk::provider::DeviceHasExtension(physical, VK_KHR_IMAGE_FORMAT_LIST_EXTENSION_NAME))
        extensions.push_back(VK_KHR_IMAGE_FORMAT_LIST_EXTENSION_NAME);
    // MSAA depth surfaces are read back through a render pass resolve. That is
    // core in Vulkan 1.2 but an extension before it, so a 1.1-or-1.0 device
    // has to be asked for it by name -- its presence is what renderer.cpp
    // gates multisampling on.
    {
        if (physicalProperties.apiVersion < VK_API_VERSION_1_2 &&
            vk::provider::DeviceHasExtension(physical, VK_KHR_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME))
            extensions.push_back(VK_KHR_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME);
        // The depth resolve's own query goes through GetPhysicalDevice*
        // Properties2, and the 1.1 promoted Maintenance1 is where negative
        // viewport heights (the renderer's flipped clip space) live.
        if (physicalProperties.apiVersion < VK_API_VERSION_1_1)
        {
            if (vk::provider::DeviceHasExtension(physical, VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME))
                extensions.push_back(VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME);
            if (vk::provider::DeviceHasExtension(physical, VK_KHR_MAINTENANCE1_EXTENSION_NAME))
                extensions.push_back(VK_KHR_MAINTENANCE1_EXTENSION_NAME);
        }
    }

    // Direct3D 9 filters each cube face on its own, clamped at its edges; a
    // Vulkan cube blends across them unless told not to. Xenia asks for the
    // same thing.
    VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT nonSeamless{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT };
    if (vk::provider::DeviceHasExtension(physical, VK_EXT_NON_SEAMLESS_CUBE_MAP_EXTENSION_NAME))
    {
        VkPhysicalDeviceFeatures2 query{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        query.pNext = &nonSeamless;
        vkGetPhysicalDeviceFeatures2(physical, &query);
        query.pNext = nullptr;
        if (nonSeamless.nonSeamlessCubeMap)
            extensions.push_back(VK_EXT_NON_SEAMLESS_CUBE_MAP_EXTENSION_NAME);
    }
    g.nonSeamlessCubes = nonSeamless.nonSeamlessCubeMap;

    // Render passes give way to dynamic rendering, and cull mode, winding and
    // the depth and stencil tests become state set per draw: then a shader
    // compiled on its own, as a pipeline library, fits every target and every
    // draw it is used in, and can be compiled when the title loads it rather
    // than at the first draw -- which is what the console does, where a
    // shader is ready the moment it is loaded.
    const bool core13 = physicalProperties.apiVersion >= VK_API_VERSION_1_3;

    const bool dynamicRenderingExtension =
        vk::provider::DeviceHasExtension(physical, VK_KHR_DYNAMIC_RENDERING_EXTENSION_NAME);
    const bool dynamicStateExtension =
        vk::provider::DeviceHasExtension(physical, VK_EXT_EXTENDED_DYNAMIC_STATE_EXTENSION_NAME);
    const bool pipelineLibrariesExtension =
        vk::provider::DeviceHasExtension(physical, VK_EXT_GRAPHICS_PIPELINE_LIBRARY_EXTENSION_NAME);

    VkPhysicalDeviceDynamicRenderingFeaturesKHR dynamicRendering{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES_KHR };
    VkPhysicalDeviceExtendedDynamicStateFeaturesEXT dynamicState{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT };
    VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT libraries{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT };

    {
        VkPhysicalDeviceFeatures2 query{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        void** tail = &query.pNext;
        if (core13 || dynamicRenderingExtension)
        {
            *tail = &dynamicRendering;
            tail = &dynamicRendering.pNext;
        }
        if (core13 || dynamicStateExtension)
        {
            *tail = &dynamicState;
            tail = &dynamicState.pNext;
        }
        if (pipelineLibrariesExtension)
        {
            *tail = &libraries;
            tail = &libraries.pNext;
        }
        if (query.pNext)
        {
            vkGetPhysicalDeviceFeatures2(physical, &query);
        }
    }

    const bool hasDynamicRendering =
        dynamicRendering.dynamicRendering && (dynamicRenderingExtension || core13);
    const bool hasDynamicState =
        dynamicState.extendedDynamicState && (dynamicStateExtension || core13);

    const bool forceLegacy = env::Flag("PES17_FORCE_LEGACY_RENDERING");
    g.hasDynamicRendering = hasDynamicRendering && !forceLegacy;
    g.hasExtendedDynamicState = hasDynamicState && !forceLegacy;
    g.legacyMode = !hasDynamicRendering || !hasDynamicState || forceLegacy;
    // The tests and culling baked into the pipelines, as the legacy path does, with dynamic
    // rendering kept: PES17_STATIC_DEPTH_STATE=1.
    // On by default for Qualcomm GPUs: an Adreno 740 (Retroid Pocket 6) drew the menus with
    // tile-shaped blocks missing and wrong while culling and the depth/stencil tests were set
    // per draw, and drew them right with the same dynamic rendering and the tests in the
    // pipelines. PES17_DYNAMIC_DEPTH_STATE=1 puts per-draw state back there.
    const bool qualcomm = physicalProperties.vendorID == 0x5143;
    g.staticStates = g.legacyMode || env::Flag("PES17_STATIC_DEPTH_STATE") ||
                     (qualcomm && !env::Flag("PES17_DYNAMIC_DEPTH_STATE"));

    LOGI("vulkan: device reports Vulkan %u.%u.%u; dynamic rendering %s (extension %s),"
         " extended dynamic state %s (extension %s)",
         VK_VERSION_MAJOR(physicalProperties.apiVersion),
         VK_VERSION_MINOR(physicalProperties.apiVersion),
         VK_VERSION_PATCH(physicalProperties.apiVersion),
         dynamicRendering.dynamicRendering ? "yes" : "no",
         dynamicRenderingExtension ? "yes" : "no",
         dynamicState.extendedDynamicState ? "yes" : "no",
         dynamicStateExtension ? "yes" : "no");

    if (g.legacyMode)
    {
        LOGI("vulkan: legacy Vulkan 1.1 fallback active: classic VkRenderPass and static pipeline states%s",
             forceLegacy ? " (forced by PES17_FORCE_LEGACY_RENDERING)" : "");
    }

    if (dynamicRenderingExtension) extensions.push_back(VK_KHR_DYNAMIC_RENDERING_EXTENSION_NAME);
    if (dynamicStateExtension) extensions.push_back(VK_EXT_EXTENDED_DYNAMIC_STATE_EXTENSION_NAME);
    g.pipelineLibraries =
        !g.staticStates &&
        vk::provider::DeviceHasExtension(physical, VK_KHR_PIPELINE_LIBRARY_EXTENSION_NAME) &&
        vk::provider::DeviceHasExtension(physical, VK_EXT_GRAPHICS_PIPELINE_LIBRARY_EXTENSION_NAME) &&
        libraries.graphicsPipelineLibrary;
    if (g.pipelineLibraries)
    {
        extensions.push_back(VK_KHR_PIPELINE_LIBRARY_EXTENSION_NAME);
        extensions.push_back(VK_EXT_GRAPHICS_PIPELINE_LIBRARY_EXTENSION_NAME);
        VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT linking{
            VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT };
        VkPhysicalDeviceProperties2 properties{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 };
        properties.pNext = &linking;
        vkGetPhysicalDeviceProperties2(physical, &properties);
        g.fastLinking = linking.graphicsPipelineLibraryFastLinking;
    }
    else libraries.graphicsPipelineLibrary = VK_FALSE;

    void* chain = features;
    if (g.pipelineLibraries)
    {
        libraries.pNext = chain;
        chain = &libraries;
    }
    if (hasDynamicState || dynamicStateExtension || core13)
    {
        dynamicState.pNext = chain;
        chain = &dynamicState;
    }
    if (hasDynamicRendering || dynamicRenderingExtension || core13)
    {
        dynamicRendering.pNext = chain;
        chain = &dynamicRendering;
    }

    VkPhysicalDeviceFaultFeaturesEXT fault{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT };
    if (vk::provider::DeviceHasExtension(physical, VK_EXT_DEVICE_FAULT_EXTENSION_NAME))
    {
        VkPhysicalDeviceFeatures2 query{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        query.pNext = &fault;
        vkGetPhysicalDeviceFeatures2(physical, &query);
        fault.pNext = nullptr;
        fault.deviceFaultVendorBinary = VK_FALSE;
        if (fault.deviceFault)
        {
            extensions.push_back(VK_EXT_DEVICE_FAULT_EXTENSION_NAME);
            fault.pNext = chain;
            chain = &fault;
        }
    }
    if (priorityExtension) extensions.push_back(priorityExtension);

    VkDeviceCreateInfo info{ VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO };
    info.pNext = chain;
    if (g.nonSeamlessCubes) { nonSeamless.pNext = chain; info.pNext = &nonSeamless; }
    info.queueCreateInfoCount = 1;
    info.pQueueCreateInfos = &queue;
    info.enabledExtensionCount = uint32_t(extensions.size());
    info.ppEnabledExtensionNames = extensions.data();
    info.pEnabledFeatures = &enabled;
    VkDevice device = VK_NULL_HANDLE;
    VkQueue made = VK_NULL_HANDLE;
    VkResult r = vk::provider::CreateLogicalDevice(physical, info, family, device, made);
    if ((r == VK_ERROR_NOT_PERMITTED_KHR || r == VK_ERROR_INITIALIZATION_FAILED) && queue.pNext)
    {
        // The priority was refused (Android lets an app have some levels and not others).
        LOGW("vulkan: queue priority %d refused (%s); the default instead",
             int(globalPriority.globalPriority), Explain(r));
        queue.pNext = nullptr;
        extensions.erase(std::remove(extensions.begin(), extensions.end(), priorityExtension), extensions.end());
        info.enabledExtensionCount = uint32_t(extensions.size());
        info.ppEnabledExtensionNames = extensions.data();
        r = vk::provider::CreateLogicalDevice(physical, info, family, device, made);
    }
    if (r != VK_SUCCESS)
    {
        LOGW("vulkan: no device (%s)", Explain(r));
        ResetDeviceSnapshot();
        return false;
    }
    if (queue.pNext) LOGI("vulkan: the queue runs at global priority %d", int(globalPriority.globalPriority));
    if (fault.deviceFault)
    {
        g_faultInfo = reinterpret_cast<PFN_vkGetDeviceFaultInfoEXT>(vkGetDeviceProcAddr(device, "vkGetDeviceFaultInfoEXT"));
        g_faultDevice = device;
        LOGI("vulkan: device fault reports %s", g_faultInfo.load() ? "on" : "unavailable");
    }
    *deviceOut = device;
    *queueOut = made;
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
    if (g.device) return true;

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
    g.devicePropertiesReady = true;
    g.name = g.deviceContext->Name();
    const VkPhysicalDeviceProperties props = g.deviceProperties;

    // A bug report is read against the driver's known faults.
    if (report::On())
    {
        VkPhysicalDeviceDriverProperties driver{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES };
        if (props.apiVersion >= VK_API_VERSION_1_2)
        {
            VkPhysicalDeviceProperties2 more{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 };
            more.pNext = &driver;
            vkGetPhysicalDeviceProperties2(g.physical, &more);
        }
        LOGI("report: graphics %s (%04X:%04X), driver %s %s (%08X), Vulkan %u.%u.%u", props.deviceName,
             props.vendorID, props.deviceID, driver.driverName, driver.driverInfo, props.driverVersion,
             VK_API_VERSION_MAJOR(props.apiVersion), VK_API_VERSION_MINOR(props.apiVersion),
             VK_API_VERSION_PATCH(props.apiVersion));
    }

    if (!CreateSetLayouts()) { Shutdown(); return false; }
    CreateCache();
    LOGI("pipeline: layout ready on %s", g.name.c_str());
    return true;
}

void vk::pipeline::Shutdown()
{
    if (!g.device)
    {
        // Presenter may have created a Device but failed before Pipeline
        // adopted its borrowed context. Clear metadata from that attempt.
        g_faultInfo.store(nullptr);
        g_faultDevice.store(VK_NULL_HANDLE);
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
    g_faultInfo.store(nullptr);
    g_faultDevice.store(VK_NULL_HANDLE);
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
