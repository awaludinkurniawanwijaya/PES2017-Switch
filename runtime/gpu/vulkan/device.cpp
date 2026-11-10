#include "device.h"
#include "provider.h"
#include "bc_decoder.h"
#include "../../env.h"
#include "../../log.h"
#include "loader.h"

#ifndef PES17_HAVE_VULKAN
struct vk::device::Device::Impl {};
std::unique_ptr<vk::device::Device> vk::device::Device::Create(void*, uint32_t, const char* const*, uint32_t, void*) { return nullptr; }
vk::device::Device::Device(std::unique_ptr<Impl> impl) : impl_(std::move(impl)) {}
vk::device::Device::~Device() = default;
void* vk::device::Device::Physical() const { return nullptr; }
void* vk::device::Device::Logical() const { return nullptr; }
void* vk::device::Device::Queue() const { return nullptr; }
uint32_t vk::device::Device::QueueFamily() const { return 0; }
bool vk::device::Device::Complete() const { return false; }
const char* vk::device::Device::Name() const { return "none"; }
bool vk::device::Device::GetMemoryProperties(void*, size_t) const { return false; }
bool vk::device::Device::GetDeviceProperties(void*, size_t) const { return false; }
bool vk::device::Device::GetPhysicalDeviceFeatures(void*, size_t) const { return false; }
bool vk::device::Device::DepthStencilResolveSampleZero() const { return false; }
bool vk::device::Device::PreciseOcclusionQueries() const { return false; }
float vk::device::Device::MaxAnisotropy() const { return 1.0f; }
bool vk::device::Device::NonSeamlessCubes() const { return false; }
bool vk::device::Device::PipelineLibraries() const { return false; }
bool vk::device::Device::FastLinking() const { return false; }
bool vk::device::Device::HasDynamicRendering() const { return false; }
bool vk::device::Device::HasExtendedDynamicState() const { return false; }
bool vk::device::Device::LegacyMode() const { return true; }
bool vk::device::Device::StaticStates() const { return true; }
bool vk::device::Device::TextureCompressionBC() const { return false; }
bool vk::device::Device::BcFormatSampled(uint32_t) const { return false; }
bool vk::device::Device::AstcSampled() const { return false; }
void vk::device::Device::ReportFault() const {}
#else
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <vector>
#include <vulkan/vulkan.h>

struct vk::device::Device::Impl
{
    VkPhysicalDevice physical = VK_NULL_HANDLE;
    VkDevice logical = VK_NULL_HANDLE;
    VkQueue queue = VK_NULL_HANDLE;
    uint32_t family = 0;
    bool preciseQueries = false;
    float maxAnisotropy = 1.0f;
    bool nonSeamlessCubes = false;
    bool pipelineLibraries = false, fastLinking = false;
    bool hasDynamicRendering = false;
    bool hasExtendedDynamicState = false;
    bool legacyMode = false;
    bool staticStates = false;
    bool textureCompressionBC = false;
    bool bcSampled[5]{};
    bool astcSampled = false;
    std::string name = "none";
    VkPhysicalDeviceProperties deviceProperties{};
    VkPhysicalDeviceMemoryProperties memoryProperties{};
    bool memoryPropertiesReady = false;
    bool devicePropertiesReady = false;
    bool depthStencilResolveSampleZero = false;
    VkPhysicalDeviceFeatures physicalFeatures{};
    bool physicalFeaturesReady = false;
    PFN_vkGetDeviceFaultInfoEXT faultInfo = nullptr;
};

namespace
{
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

vk::device::Device::Device(std::unique_ptr<Impl> impl) : impl_(std::move(impl)) {}

std::unique_ptr<vk::device::Device> vk::device::Device::Create(
    void* physicalDevice, uint32_t family, const char* const* extraExtensions,
    uint32_t extraCount, void* features)
{
    if (!physicalDevice || (extraCount && !extraExtensions))
    {
        LOGW("vulkan: invalid logical-device creation arguments");
        return nullptr;
    }
    auto impl = std::make_unique<Impl>();
    VkPhysicalDevice physical = static_cast<VkPhysicalDevice>(physicalDevice);
    impl->physical = physical;
    uint32_t familyCount = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(physical, &familyCount, nullptr);
    if (family >= familyCount)
    {
        LOGW("vulkan: queue family %u is outside the device's %u families", family, familyCount);
        return nullptr;
    }
    std::vector<VkQueueFamilyProperties> familyProperties(familyCount);
    vkGetPhysicalDeviceQueueFamilyProperties(physical, &familyCount, familyProperties.data());
    if (family >= familyCount || !familyProperties[family].queueCount)
    {
        LOGW("vulkan: queue family %u has no queues", family);
        return nullptr;
    }
    VkPhysicalDeviceProperties physicalProperties{};
    vkGetPhysicalDeviceProperties(physical, &physicalProperties);
    impl->deviceProperties = physicalProperties;
    impl->devicePropertiesReady = true;
    impl->name = physicalProperties.deviceName;
    vkGetPhysicalDeviceMemoryProperties(physical, &impl->memoryProperties);
    impl->memoryPropertiesReady = true;
    if (physicalProperties.apiVersion >= VK_API_VERSION_1_2 ||
        vk::provider::DeviceHasExtension(physical, VK_KHR_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME))
    {
        VkPhysicalDeviceDepthStencilResolveProperties resolve{
            VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES };
        VkPhysicalDeviceProperties2 properties2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 };
        properties2.pNext = &resolve;
        vkGetPhysicalDeviceProperties2(physical, &properties2);
        impl->depthStencilResolveSampleZero =
            (resolve.supportedDepthResolveModes & VK_RESOLVE_MODE_SAMPLE_ZERO_BIT) != 0;
    }
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
    impl->physicalFeatures = supported;
    impl->physicalFeaturesReady = true;
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
    impl->textureCompressionBC = supported.textureCompressionBC;
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
        impl->textureCompressionBC = false;
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
        impl->astcSampled = supported.textureCompressionASTC_LDR &&
                        (unorm.optimalTilingFeatures & kNeeded) == kNeeded &&
                        (srgb.optimalTilingFeatures & kNeeded) == kNeeded;
        LOGI("vulkan: ASTC 4x4 sampling %s", impl->astcSampled ? "supported" : "NOT supported");
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
            impl->bcSampled[i] = ok;
            LOGI("vulkan: %s sampling %s", kBc[i].name, ok ? "supported" : "NOT supported");
        }
    }
    // The title's occlusion queries are a sample count it compares against a
    // threshold, and without this a query is only allowed to answer "some".
    enabled.occlusionQueryPrecise = supported.occlusionQueryPrecise;
    impl->preciseQueries = supported.occlusionQueryPrecise;
    // The title asks for anisotropic filtering on nearly every world texture
    // (2:1, once 4:1), and a sampler cannot give it unless the device enables it.
    enabled.samplerAnisotropy = supported.samplerAnisotropy;
    if (supported.samplerAnisotropy)
    {
        impl->maxAnisotropy = physicalProperties.limits.maxSamplerAnisotropy;
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
    impl->nonSeamlessCubes = nonSeamless.nonSeamlessCubeMap;

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
    impl->hasDynamicRendering = hasDynamicRendering && !forceLegacy;
    impl->hasExtendedDynamicState = hasDynamicState && !forceLegacy;
    impl->legacyMode = !hasDynamicRendering || !hasDynamicState || forceLegacy;
    // The tests and culling baked into the pipelines, as the legacy path does, with dynamic
    // rendering kept: PES17_STATIC_DEPTH_STATE=1.
    // On by default for Qualcomm GPUs: an Adreno 740 (Retroid Pocket 6) drew the menus with
    // tile-shaped blocks missing and wrong while culling and the depth/stencil tests were set
    // per draw, and drew them right with the same dynamic rendering and the tests in the
    // pipelines. PES17_DYNAMIC_DEPTH_STATE=1 puts per-draw state back there.
    const bool qualcomm = physicalProperties.vendorID == 0x5143;
    impl->staticStates = impl->legacyMode || env::Flag("PES17_STATIC_DEPTH_STATE") ||
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

    if (impl->legacyMode)
    {
        LOGI("vulkan: legacy Vulkan 1.1 fallback active: classic VkRenderPass and static pipeline states%s",
             forceLegacy ? " (forced by PES17_FORCE_LEGACY_RENDERING)" : "");
    }

    if (dynamicRenderingExtension) extensions.push_back(VK_KHR_DYNAMIC_RENDERING_EXTENSION_NAME);
    if (dynamicStateExtension) extensions.push_back(VK_EXT_EXTENDED_DYNAMIC_STATE_EXTENSION_NAME);
    impl->pipelineLibraries =
        !impl->staticStates &&
        vk::provider::DeviceHasExtension(physical, VK_KHR_PIPELINE_LIBRARY_EXTENSION_NAME) &&
        vk::provider::DeviceHasExtension(physical, VK_EXT_GRAPHICS_PIPELINE_LIBRARY_EXTENSION_NAME) &&
        libraries.graphicsPipelineLibrary;
    if (impl->pipelineLibraries)
    {
        extensions.push_back(VK_KHR_PIPELINE_LIBRARY_EXTENSION_NAME);
        extensions.push_back(VK_EXT_GRAPHICS_PIPELINE_LIBRARY_EXTENSION_NAME);
        VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT linking{
            VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT };
        VkPhysicalDeviceProperties2 properties{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 };
        properties.pNext = &linking;
        vkGetPhysicalDeviceProperties2(physical, &properties);
        impl->fastLinking = linking.graphicsPipelineLibraryFastLinking;
    }
    else libraries.graphicsPipelineLibrary = VK_FALSE;

    void* chain = features;
    if (impl->pipelineLibraries)
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
    if (impl->nonSeamlessCubes) { nonSeamless.pNext = chain; info.pNext = &nonSeamless; }
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
        return nullptr;
    }
    if (queue.pNext) LOGI("vulkan: the queue runs at global priority %d", int(globalPriority.globalPriority));
    if (fault.deviceFault)
    {
        impl->faultInfo = reinterpret_cast<PFN_vkGetDeviceFaultInfoEXT>(vkGetDeviceProcAddr(device, "vkGetDeviceFaultInfoEXT"));
        LOGI("vulkan: device fault reports %s", impl->faultInfo ? "on" : "unavailable");
    }
    impl->logical = device;
    impl->queue = made;
    impl->family = family;
    return std::unique_ptr<vk::device::Device>(new vk::device::Device(std::move(impl)));
}
vk::device::Device::~Device()
{
    if (impl_ && impl_->logical)
    {
        VkDevice logical = impl_->logical;
        vk::provider::DestroyLogicalDevice(logical);
        impl_->logical = VK_NULL_HANDLE;
    }
}
void* vk::device::Device::Physical() const { return impl_ ? impl_->physical : nullptr; }
void* vk::device::Device::Logical() const { return impl_ ? impl_->logical : nullptr; }
void* vk::device::Device::Queue() const { return impl_ ? impl_->queue : nullptr; }
uint32_t vk::device::Device::QueueFamily() const { return impl_ ? impl_->family : 0; }
bool vk::device::Device::Complete() const { return impl_ && impl_->physical && impl_->logical && impl_->queue; }
const char* vk::device::Device::Name() const { return impl_ ? impl_->name.c_str() : "none"; }
bool vk::device::Device::GetMemoryProperties(void* p, size_t n) const
{
    if (!impl_ || !p || n != sizeof(VkPhysicalDeviceMemoryProperties) || !impl_->memoryPropertiesReady) return false;
    std::memcpy(p, &impl_->memoryProperties, sizeof(impl_->memoryProperties)); return true;
}
bool vk::device::Device::GetDeviceProperties(void* p, size_t n) const
{
    if (!impl_ || !p || n != sizeof(VkPhysicalDeviceProperties) || !impl_->devicePropertiesReady) return false;
    std::memcpy(p, &impl_->deviceProperties, sizeof(impl_->deviceProperties)); return true;
}
bool vk::device::Device::GetPhysicalDeviceFeatures(void* p, size_t n) const
{
    if (!impl_ || !p || n != sizeof(VkPhysicalDeviceFeatures) || !impl_->physicalFeaturesReady) return false;
    std::memcpy(p, &impl_->physicalFeatures, sizeof(impl_->physicalFeatures)); return true;
}
bool vk::device::Device::DepthStencilResolveSampleZero() const { return impl_ && impl_->depthStencilResolveSampleZero; }
bool vk::device::Device::PreciseOcclusionQueries() const { return impl_ && impl_->preciseQueries; }
float vk::device::Device::MaxAnisotropy() const { return impl_ ? impl_->maxAnisotropy : 1.0f; }
bool vk::device::Device::NonSeamlessCubes() const { return impl_ && impl_->nonSeamlessCubes; }
bool vk::device::Device::PipelineLibraries() const { return impl_ && impl_->pipelineLibraries; }
bool vk::device::Device::FastLinking() const { return impl_ && impl_->fastLinking; }
bool vk::device::Device::HasDynamicRendering() const { return impl_ && impl_->hasDynamicRendering; }
bool vk::device::Device::HasExtendedDynamicState() const { return impl_ && impl_->hasExtendedDynamicState; }
bool vk::device::Device::LegacyMode() const { return !impl_ || impl_->legacyMode; }
bool vk::device::Device::StaticStates() const { return !impl_ || impl_->staticStates; }
bool vk::device::Device::TextureCompressionBC() const { return impl_ && impl_->textureCompressionBC; }
bool vk::device::Device::BcFormatSampled(uint32_t i) const { return impl_ && i < 5 && impl_->bcSampled[i]; }
bool vk::device::Device::AstcSampled() const { return impl_ && impl_->astcSampled; }
void vk::device::Device::ReportFault() const
{
    if (!impl_ || !impl_->faultInfo || !impl_->logical) return;
    const PFN_vkGetDeviceFaultInfoEXT info = impl_->faultInfo;
    const VkDevice device = impl_->logical;
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
    counts.vendorBinarySize = 0;
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
#endif
