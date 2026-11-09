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
