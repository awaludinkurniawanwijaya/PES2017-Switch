#!/usr/bin/env python3
from pathlib import Path

p = Path("nxvk/src/vulkan/wsi/wsi_switch.c")
s = p.read_text()
if '#include <stdio.h>' not in s:
    anchor = '#include "wsi_common_private.h"'
    if anchor not in s:
        raise SystemExit("Missing wsi_switch include anchor")
    s = s.replace(anchor, anchor + '\n#include <stdio.h>', 1)

def replace_once(old, new, label):
    global s
    if old not in s:
        raise SystemExit("Missing acquire trace anchor: " + label)
    s = s.replace(old, new, 1)

replace_once(
'''   Result rc = nwindowDequeueBuffer(chain->window, slot_out, NULL);
   if (R_FAILED(rc))''',
'''   fprintf(stderr, "[ACQUIRE-TRACE] dequeue_libnx before nwindowDequeueBuffer window=%p\n", (void *)chain->window); fflush(stderr);
   Result rc = nwindowDequeueBuffer(chain->window, slot_out, NULL);
   fprintf(stderr, "[ACQUIRE-TRACE] dequeue_libnx after nwindowDequeueBuffer rc=0x%x slot=%d\n", (unsigned)rc, *slot_out); fflush(stderr);
   if (R_FAILED(rc))''', "libnx dequeue")

replace_once(
'''   mutexLock(&nw->mutex);

   if (nw->slots_configured == 0)''',
'''   fprintf(stderr, "[ACQUIRE-TRACE] dequeue_nonblocking enter timeout=%llu slots=%u cur_slot=%d event_active=%u\n",
           (unsigned long long)timeout_ns, nw->slots_configured, nw->cur_slot, eventActive(&nw->event)); fflush(stderr);
   mutexLock(&nw->mutex);

   if (nw->slots_configured == 0)''', "nonblocking entry")

replace_once(
'''      rc = bqDequeueBuffer(&nw->bq, true, nw->width, nw->height, nw->format,
                            nw->usage, &slot, &release);
      if (R_VALUE(rc) != WSI_SWITCH_BQ_WOULD_BLOCK)''',
'''      fprintf(stderr, "[ACQUIRE-TRACE] before bqDequeueBuffer waited=%u\n", waited); fflush(stderr);
      rc = bqDequeueBuffer(&nw->bq, true, nw->width, nw->height, nw->format,
                           nw->usage, &slot, &release);
      fprintf(stderr, "[ACQUIRE-TRACE] after bqDequeueBuffer rc=0x%x slot=%d\n", (unsigned)rc, slot); fflush(stderr);
      if (R_VALUE(rc) != WSI_SWITCH_BQ_WOULD_BLOCK)''', "bq dequeue")

replace_once(
'''   if (chain->window == NULL)
      return VK_ERROR_SURFACE_LOST_KHR;

   /* An NWindow checks out one slot at a time''',
'''   fprintf(stderr, "[ACQUIRE-TRACE] acquire enter chain=%p window=%p timeout=%llu cpu_present=%u\n",
           (void *)chain, (void *)chain->window,
           (unsigned long long)info->timeout, chain->cpu_present); fflush(stderr);
   if (chain->window == NULL)
      return VK_ERROR_SURFACE_LOST_KHR;

   /* An NWindow checks out one slot at a time''', "acquire entry")

replace_once(
'''   if (chain->cpu_present || !eventActive(&chain->window->event))
      result = wsi_switch_dequeue_libnx(chain, &slot);
   else
      result = wsi_switch_dequeue_nonblocking(chain, info->timeout, &slot);

   if (result != VK_SUCCESS)''',
'''   bool event_active = eventActive(&chain->window->event);
   fprintf(stderr, "[ACQUIRE-TRACE] select path cpu_present=%u event_active=%u\n",
           chain->cpu_present, event_active); fflush(stderr);
   if (chain->cpu_present || !event_active)
      result = wsi_switch_dequeue_libnx(chain, &slot);
   else
      result = wsi_switch_dequeue_nonblocking(chain, info->timeout, &slot);
   fprintf(stderr, "[ACQUIRE-TRACE] dequeue returned result=%d slot=%d\n", (int)result, slot); fflush(stderr);

   if (result != VK_SUCCESS)''', "acquire branch")

p.write_text(s)
print("Installed precise acquire/dequeue tracepoints in Horizon WSI")
