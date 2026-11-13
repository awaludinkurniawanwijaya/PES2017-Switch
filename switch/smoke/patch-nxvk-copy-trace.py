from pathlib import Path

def replace_once(path, old, new, label):
    source = path.read_text()
    if old not in source:
        raise SystemExit(f"Missing expected source anchor for {label}: {path}")
    path.write_text(source.replace(old, new, 1))
    print(f"Installed {label}")

# Log the exact WSI arguments and dispatch target before calling NVK.
replace_once(
    Path("nxvk/src/vulkan/wsi/wsi_common.c"),
    """   fprintf(stderr, "[WSI-BLIT] before copy_image_to_buffer\\n"); fflush(stderr);
   wsi->CmdCopyImageToBuffer(cmd_buffer,
                             image->image,
                             VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                             image->blit.buffer,
                             1, &buffer_image_copy);""",
    """   fprintf(stderr, "[WSI-BLIT] dispatch cmd=%p image=0x%llx buffer=0x%llx fn=%p "
                   "extent=%ux%u offset=%d,%d,%d rowLength=%u imageHeight=%u "
                   "aspect=0x%x mip=%u layer=%u\\n",
           (void *)cmd_buffer,
           (unsigned long long)image->image,
           (unsigned long long)image->blit.buffer,
           (void *)wsi->CmdCopyImageToBuffer,
           buffer_image_copy.imageExtent.width,
           buffer_image_copy.imageExtent.height,
           buffer_image_copy.imageOffset.x,
           buffer_image_copy.imageOffset.y,
           buffer_image_copy.imageOffset.z,
           buffer_image_copy.bufferRowLength,
           buffer_image_copy.bufferImageHeight,
           buffer_image_copy.imageSubresource.aspectMask,
           buffer_image_copy.imageSubresource.mipLevel,
           buffer_image_copy.imageSubresource.baseArrayLayer);
   fflush(stderr);
   wsi->CmdCopyImageToBuffer(cmd_buffer,
                             image->image,
                             VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                             image->blit.buffer,
                             1, &buffer_image_copy);""",
    "WSI copy dispatch tracepoints",
)

# Trace Mesa's legacy-command compatibility wrapper. WSI stores and calls
# vkCmdCopyImageToBuffer (legacy); that common wrapper converts to the
# Vulkan 2 command and then dispatches through the device dispatch table.
p = Path("nxvk/src/vulkan/runtime/vk_cmd_copy.c")
s = p.read_text()
if "#include <stdio.h>" not in s:
    s = s.replace('#include "vk_util.h"', '#include "vk_util.h"\n\n#include <stdio.h>', 1)
old = """   disp->device->dispatch_table.CmdCopyImageToBuffer2(commandBuffer, &info);"""
new = """   fprintf(stderr, "[COMMON-COPY] legacy wrapper entered cmd=%p disp=%p device=%p regions=%u\\n",
           (void *)commandBuffer, (void *)disp, (void *)disp->device,
           regionCount);
   fflush(stderr);
   fprintf(stderr, "[COMMON-COPY] dispatch2 fn=%p image=0x%llx buffer=0x%llx extent=%ux%u rowLength=%u imageHeight=%u\\n",
           (void *)disp->device->dispatch_table.CmdCopyImageToBuffer2,
           (unsigned long long)srcImage, (unsigned long long)dstBuffer,
           info.pRegions[0].imageExtent.width,
           info.pRegions[0].imageExtent.height,
           info.pRegions[0].bufferRowLength,
           info.pRegions[0].bufferImageHeight);
   fflush(stderr);
   disp->device->dispatch_table.CmdCopyImageToBuffer2(commandBuffer, &info);
   fprintf(stderr, "[COMMON-COPY] dispatch2 returned\\n");
   fflush(stderr);"""
if old not in s:
    raise SystemExit("Missing common legacy copy dispatch anchor")
s = s.replace(old, new, 1)
p.write_text(s)
print("Installed common legacy-to-2 copy dispatch tracepoints")

# Log entry into the actual NVK implementation and the selected copy engine.
p = Path("nxvk/src/nouveau/vulkan/nvk_cmd_meta.c")
s = p.read_text()
if "#include <stdio.h>" not in s:
    anchor = '#include "nvk_physical_device.h"'
    if anchor not in s:
        raise SystemExit("Missing NVK stdio include anchor")
    s = s.replace(anchor, anchor + "\n#include <stdio.h>", 1)

old = """   VK_FROM_HANDLE(nvk_cmd_buffer, cmd, commandBuffer);
   VK_FROM_HANDLE(nvk_image, src, pCopyImageToBufferInfo->srcImage);

   VkQueueFlags queue_flags = nvk_cmd_buffer_queue_flags(cmd);
   if ((queue_flags & VK_QUEUE_COMPUTE_BIT) &&
       !nvk_copy_prefers_copy_engine(cmd) &&
       nvk_meta_image_copy_compute_supported(src)) {
      nvk_cmd_copy_image_to_buffer_meta(cmd, pCopyImageToBufferInfo);
   } else {
      nvk_cmd_copy_image_to_buffer_ce(cmd, pCopyImageToBufferInfo);
   }"""
new = """   fprintf(stderr, "[NVK-COPY] entered cmd=%p info=%p srcImage=0x%llx dstBuffer=0x%llx regions=%u\\n",
           (void *)commandBuffer, (const void *)pCopyImageToBufferInfo,
           (unsigned long long)pCopyImageToBufferInfo->srcImage,
           (unsigned long long)pCopyImageToBufferInfo->dstBuffer,
           pCopyImageToBufferInfo->regionCount);
   fflush(stderr);
   VK_FROM_HANDLE(nvk_cmd_buffer, cmd, commandBuffer);
   VK_FROM_HANDLE(nvk_image, src, pCopyImageToBufferInfo->srcImage);

   VkQueueFlags queue_flags = nvk_cmd_buffer_queue_flags(cmd);
   bool prefers_copy_engine = nvk_copy_prefers_copy_engine(cmd);
   bool compute_supported = nvk_meta_image_copy_compute_supported(src);
   bool use_compute = (queue_flags & VK_QUEUE_COMPUTE_BIT) &&
                      !prefers_copy_engine && compute_supported;
   fprintf(stderr, "[NVK-COPY] resolved cmd=%p src=%p queue_flags=0x%x "
                   "prefers_copy_engine=%u compute_supported=%u branch=%s\\n",
           (void *)cmd, (void *)src, (unsigned)queue_flags,
           prefers_copy_engine, compute_supported,
           use_compute ? "meta-compute" : "copy-engine");
   fflush(stderr);
   if (use_compute) {
      nvk_cmd_copy_image_to_buffer_meta(cmd, pCopyImageToBufferInfo);
   } else {
      nvk_cmd_copy_image_to_buffer_ce(cmd, pCopyImageToBufferInfo);
   }
   fprintf(stderr, "[NVK-COPY] branch returned\\n");
   fflush(stderr);"""
if old not in s:
    raise SystemExit("Missing exact NVK CmdCopyImageToBuffer2 implementation")
s = s.replace(old, new, 1)
p.write_text(s)
print("Installed NVK copy entrypoint and branch tracepoints")


# Prefer the Vulkan 1.3 copy-commands2 entrypoint for the Switch WSI CPU-copy
# path. The legacy WSI callback is resolved from the instance proc table and
# does not reliably reach the device's common legacy-to-2 wrapper in this
# static-ICD configuration. Keep the legacy callback as a compatibility
# fallback, but select the direct 2 entrypoint when available.
p = Path("nxvk/src/vulkan/wsi/wsi_common.h")
s = p.read_text()
old = "   WSI_CB(CmdCopyImageToBuffer);"
new = "   WSI_CB(CmdCopyImageToBuffer);\n   WSI_CB(CmdCopyImageToBuffer2);"
if old not in s:
    raise SystemExit("Missing WSI callback declaration anchor")
s = s.replace(old, new, 1)
p.write_text(s)
print("Added direct WSI CmdCopyImageToBuffer2 callback")

p = Path("nxvk/src/vulkan/wsi/wsi_common.c")
s = p.read_text()
old = "   WSI_GET_CB(CmdCopyImageToBuffer);"
new = "   WSI_GET_CB(CmdCopyImageToBuffer);\n   WSI_GET_CB(CmdCopyImageToBuffer2);"
if old not in s:
    raise SystemExit("Missing WSI callback initialization anchor")
s = s.replace(old, new, 1)

old = """   wsi->CmdCopyImageToBuffer(cmd_buffer,
                             image->image,
                             VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                             image->blit.buffer,
                             1, &buffer_image_copy);"""
new = """   if (wsi->CmdCopyImageToBuffer2) {
      VkBufferImageCopy2 buffer_image_copy2 = {
         .sType = VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2,
         .bufferOffset = buffer_image_copy.bufferOffset,
         .bufferRowLength = buffer_image_copy.bufferRowLength,
         .bufferImageHeight = buffer_image_copy.bufferImageHeight,
         .imageSubresource = buffer_image_copy.imageSubresource,
         .imageOffset = buffer_image_copy.imageOffset,
         .imageExtent = buffer_image_copy.imageExtent,
      };
      VkCopyImageToBufferInfo2 copy_info = {
         .sType = VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2,
         .srcImage = image->image,
         .srcImageLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
         .dstBuffer = image->blit.buffer,
         .regionCount = 1,
         .pRegions = &buffer_image_copy2,
      };
      fprintf(stderr, "[WSI-BLIT2] direct dispatch cmd=%p fn=%p image=0x%llx buffer=0x%llx extent=%ux%u rowLength=%u imageHeight=%u\\n",
              (void *)cmd_buffer, (void *)wsi->CmdCopyImageToBuffer2,
              (unsigned long long)image->image,
              (unsigned long long)image->blit.buffer,
              buffer_image_copy2.imageExtent.width,
              buffer_image_copy2.imageExtent.height,
              buffer_image_copy2.bufferRowLength,
              buffer_image_copy2.bufferImageHeight);
      fflush(stderr);
      wsi->CmdCopyImageToBuffer2(cmd_buffer, &copy_info);
      fprintf(stderr, "[WSI-BLIT2] direct dispatch returned\\n");
      fflush(stderr);
   } else {
      fprintf(stderr, "[WSI-BLIT2] unavailable; falling back to legacy fn=%p\\n",
              (void *)wsi->CmdCopyImageToBuffer);
      fflush(stderr);
      wsi->CmdCopyImageToBuffer(cmd_buffer,
                                image->image,
                                VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                                image->blit.buffer,
                                1, &buffer_image_copy);
   }"""
if old not in s:
    raise SystemExit("Missing exact WSI legacy copy call anchor")
s = s.replace(old, new, 1)
p.write_text(s)
print("Installed direct Vulkan copy-commands2 WSI path with legacy fallback")
