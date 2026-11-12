#pragma once
// Vulkan through function pointers, for a build that decides at run time
// which implementation to talk to.
//
// A desktop build links the loader and calls vkSomething directly. Android
// cannot: the driver may be one the player imported as a zip (Mesa's Turnip,
// runtime/android/driver.cpp), which the system's loader knows nothing about,
// and the platform's own libvulkan.so exports only the core entry points --
// everything with a KHR or EXT on the end has to be asked for by name anyway.
//
// So every entry point the runtime calls is a pointer with the same name as
// the function, filled in from vkGetInstanceProcAddr. The call sites do not
// change: `vkCmdDraw(...)` is a call through a pointer instead of a call to
// the loader's stub. The list is generated (tools/gen_vulkan_loader.py) from
// the calls the sources actually make.
//
// Device-level entry points are loaded again from vkGetDeviceProcAddr once
// the device exists. That skips the loader's dispatch trampoline on every
// draw call, which is a measurable share of a frame on a phone where the
// renderer submits thousands of them.
//
// This header is force-included into the Vulkan sources by CMake, so it is
// the first thing every one of them sees.
#if defined(PES17_VULKAN_DYNAMIC) && defined(PES17_HAVE_VULKAN)

#ifndef VK_NO_PROTOTYPES
#   define VK_NO_PROTOTYPES 1
#endif
#if (defined(__ANDROID__) || defined(PES17_ANDROID)) && !defined(VK_USE_PLATFORM_ANDROID_KHR)
#   define VK_USE_PLATFORM_ANDROID_KHR 1
#endif
#if defined(__SWITCH__) && !defined(VK_USE_PLATFORM_VI_NN)
#   define VK_USE_PLATFORM_VI_NN 1
#endif

#include <vulkan/vulkan.h>

// The Switch build links Mesa's Vulkan implementation statically. Its archive
// exports the public vk* function symbols, so the runtime's dispatch-pointer
// variables must use private names rather than interposing on those symbols.
// Keep the Vulkan API spelling at call sites through these local aliases.
#define vkAcquireNextImageKHR pes17_vkAcquireNextImageKHR
#define vkAllocateCommandBuffers pes17_vkAllocateCommandBuffers
#define vkAllocateDescriptorSets pes17_vkAllocateDescriptorSets
#define vkAllocateMemory pes17_vkAllocateMemory
#define vkBeginCommandBuffer pes17_vkBeginCommandBuffer
#define vkBindBufferMemory pes17_vkBindBufferMemory
#define vkBindImageMemory pes17_vkBindImageMemory
#define vkCmdBeginQuery pes17_vkCmdBeginQuery
#define vkCmdBeginRenderPass pes17_vkCmdBeginRenderPass
#define vkCmdBindDescriptorSets pes17_vkCmdBindDescriptorSets
#define vkCmdBindIndexBuffer pes17_vkCmdBindIndexBuffer
#define vkCmdBindPipeline pes17_vkCmdBindPipeline
#define vkCmdBlitImage pes17_vkCmdBlitImage
#define vkCmdClearColorImage pes17_vkCmdClearColorImage
#define vkCmdClearDepthStencilImage pes17_vkCmdClearDepthStencilImage
#define vkCmdCopyBufferToImage pes17_vkCmdCopyBufferToImage
#define vkCmdCopyImage pes17_vkCmdCopyImage
#define vkCmdCopyImageToBuffer pes17_vkCmdCopyImageToBuffer
#define vkCmdDispatch pes17_vkCmdDispatch
#define vkCmdDraw pes17_vkCmdDraw
#define vkCmdDrawIndexed pes17_vkCmdDrawIndexed
#define vkCmdEndQuery pes17_vkCmdEndQuery
#define vkCmdEndRenderPass pes17_vkCmdEndRenderPass
#define vkCmdPipelineBarrier pes17_vkCmdPipelineBarrier
#define vkCmdPushConstants pes17_vkCmdPushConstants
#define vkCmdResetQueryPool pes17_vkCmdResetQueryPool
#define vkCmdResolveImage pes17_vkCmdResolveImage
#define vkCmdSetDepthBias pes17_vkCmdSetDepthBias
#define vkCmdSetScissor pes17_vkCmdSetScissor
#define vkCmdSetStencilCompareMask pes17_vkCmdSetStencilCompareMask
#define vkCmdSetStencilReference pes17_vkCmdSetStencilReference
#define vkCmdSetStencilWriteMask pes17_vkCmdSetStencilWriteMask
#define vkCmdSetViewport pes17_vkCmdSetViewport
#define vkCmdUpdateBuffer pes17_vkCmdUpdateBuffer
#define vkCmdWriteTimestamp pes17_vkCmdWriteTimestamp
#define vkCreateAndroidSurfaceKHR pes17_vkCreateAndroidSurfaceKHR
#define vkCreateBuffer pes17_vkCreateBuffer
#define vkCreateCommandPool pes17_vkCreateCommandPool
#define vkCreateComputePipelines pes17_vkCreateComputePipelines
#define vkCreateDescriptorPool pes17_vkCreateDescriptorPool
#define vkCreateDescriptorSetLayout pes17_vkCreateDescriptorSetLayout
#define vkCreateDevice pes17_vkCreateDevice
#define vkCreateFence pes17_vkCreateFence
#define vkCreateFramebuffer pes17_vkCreateFramebuffer
#define vkCreateGraphicsPipelines pes17_vkCreateGraphicsPipelines
#define vkCreateImage pes17_vkCreateImage
#define vkCreateImageView pes17_vkCreateImageView
#define vkCreateInstance pes17_vkCreateInstance
#define vkCreatePipelineCache pes17_vkCreatePipelineCache
#define vkCreatePipelineLayout pes17_vkCreatePipelineLayout
#define vkCreateQueryPool pes17_vkCreateQueryPool
#define vkCreateRenderPass pes17_vkCreateRenderPass
#define vkCreateSampler pes17_vkCreateSampler
#define vkCreateSemaphore pes17_vkCreateSemaphore
#define vkCreateShaderModule pes17_vkCreateShaderModule
#define vkCreateSwapchainKHR pes17_vkCreateSwapchainKHR
#define vkCreateViSurfaceNN pes17_vkCreateViSurfaceNN
#define vkDestroyBuffer pes17_vkDestroyBuffer
#define vkDestroyCommandPool pes17_vkDestroyCommandPool
#define vkDestroyDescriptorPool pes17_vkDestroyDescriptorPool
#define vkDestroyDescriptorSetLayout pes17_vkDestroyDescriptorSetLayout
#define vkDestroyDevice pes17_vkDestroyDevice
#define vkDestroyFence pes17_vkDestroyFence
#define vkDestroyFramebuffer pes17_vkDestroyFramebuffer
#define vkDestroyImage pes17_vkDestroyImage
#define vkDestroyImageView pes17_vkDestroyImageView
#define vkDestroyInstance pes17_vkDestroyInstance
#define vkDestroyPipeline pes17_vkDestroyPipeline
#define vkDestroyPipelineCache pes17_vkDestroyPipelineCache
#define vkDestroyPipelineLayout pes17_vkDestroyPipelineLayout
#define vkDestroyQueryPool pes17_vkDestroyQueryPool
#define vkDestroyRenderPass pes17_vkDestroyRenderPass
#define vkDestroySampler pes17_vkDestroySampler
#define vkDestroySemaphore pes17_vkDestroySemaphore
#define vkDestroyShaderModule pes17_vkDestroyShaderModule
#define vkDestroySurfaceKHR pes17_vkDestroySurfaceKHR
#define vkDestroySwapchainKHR pes17_vkDestroySwapchainKHR
#define vkDeviceWaitIdle pes17_vkDeviceWaitIdle
#define vkEndCommandBuffer pes17_vkEndCommandBuffer
#define vkEnumerateDeviceExtensionProperties pes17_vkEnumerateDeviceExtensionProperties
#define vkEnumerateInstanceExtensionProperties pes17_vkEnumerateInstanceExtensionProperties
#define vkEnumerateInstanceVersion pes17_vkEnumerateInstanceVersion
#define vkEnumeratePhysicalDevices pes17_vkEnumeratePhysicalDevices
#define vkFreeDescriptorSets pes17_vkFreeDescriptorSets
#define vkFreeMemory pes17_vkFreeMemory
#define vkGetBufferMemoryRequirements pes17_vkGetBufferMemoryRequirements
#define vkGetDeviceProcAddr pes17_vkGetDeviceProcAddr
#define vkGetDeviceQueue pes17_vkGetDeviceQueue
#define vkGetFenceStatus pes17_vkGetFenceStatus
#define vkGetImageMemoryRequirements pes17_vkGetImageMemoryRequirements
#define vkGetPhysicalDeviceFeatures pes17_vkGetPhysicalDeviceFeatures
#define vkGetPhysicalDeviceFeatures2 pes17_vkGetPhysicalDeviceFeatures2
#define vkGetPhysicalDeviceFormatProperties pes17_vkGetPhysicalDeviceFormatProperties
#define vkGetPhysicalDeviceMemoryProperties pes17_vkGetPhysicalDeviceMemoryProperties
#define vkGetPhysicalDeviceProperties pes17_vkGetPhysicalDeviceProperties
#define vkGetPhysicalDeviceProperties2 pes17_vkGetPhysicalDeviceProperties2
#define vkGetPhysicalDeviceQueueFamilyProperties pes17_vkGetPhysicalDeviceQueueFamilyProperties
#define vkGetPhysicalDeviceQueueFamilyProperties2 pes17_vkGetPhysicalDeviceQueueFamilyProperties2
#define vkGetPhysicalDeviceSurfaceCapabilitiesKHR pes17_vkGetPhysicalDeviceSurfaceCapabilitiesKHR
#define vkGetPhysicalDeviceSurfaceFormatsKHR pes17_vkGetPhysicalDeviceSurfaceFormatsKHR
#define vkGetPhysicalDeviceSurfacePresentModesKHR pes17_vkGetPhysicalDeviceSurfacePresentModesKHR
#define vkGetPhysicalDeviceSurfaceSupportKHR pes17_vkGetPhysicalDeviceSurfaceSupportKHR
#define vkGetPipelineCacheData pes17_vkGetPipelineCacheData
#define vkGetQueryPoolResults pes17_vkGetQueryPoolResults
#define vkGetSwapchainImagesKHR pes17_vkGetSwapchainImagesKHR
#define vkMapMemory pes17_vkMapMemory
#define vkQueuePresentKHR pes17_vkQueuePresentKHR
#define vkQueueSubmit pes17_vkQueueSubmit
#define vkResetCommandBuffer pes17_vkResetCommandBuffer
#define vkResetCommandPool pes17_vkResetCommandPool
#define vkResetFences pes17_vkResetFences
#define vkUnmapMemory pes17_vkUnmapMemory
#define vkUpdateDescriptorSets pes17_vkUpdateDescriptorSets
#define vkWaitForFences pes17_vkWaitForFences

extern "C"
{
    // The one that is not loaded from anything else: it comes out of the
    // library, and everything else comes out of it.
    extern PFN_vkGetInstanceProcAddr vkGetInstanceProcAddrFn;

#define PES17_VK_GLOBAL(name)   extern PFN_##name name;
#define PES17_VK_INSTANCE(name) extern PFN_##name name;
#define PES17_VK_DEVICE(name)   extern PFN_##name name;
#include "vulkan_functions.inc"
#undef PES17_VK_GLOBAL
#undef PES17_VK_INSTANCE
#undef PES17_VK_DEVICE
}

#include <string>

namespace vk::loader
{
    // Opens the implementation -- the player's driver where there is one,
    // the system's otherwise -- and loads what can be loaded without an
    // instance. Safe to call more than once; only the first does anything.
    bool Open(std::string& error);
    bool Opened();

    // After vkCreateInstance and after vkCreateDevice. Entry points an
    // extension owns come back null when the extension is not there, which
    // is what the callers already check for.
    void LoadInstance(VkInstance instance);
    bool LoadDevice(VkDevice device);
    // The device is about to be destroyed: its entry points go back to the
    // instance's, which stay valid.
    void ForgetDevice();
    // The instance is gone: reset instance/device dispatch to global entry points.
    void ForgetInstance();

    // What was opened, for the log ("the system's libvulkan.so", a driver's
    // file name).
    const char* Description();
    // How many of the entry points the runtime wants this implementation has.
    // A driver missing one the renderer needs would otherwise crash on a null
    // pointer somewhere far from here.
    uint32_t Missing();
}

#endif  // PES17_VULKAN_DYNAMIC && PES17_HAVE_VULKAN
