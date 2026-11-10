/*
 * Minimal libelf stubs for the statically linked Mesa/NVK Switch SDK.
 *
 * Mesa's libvulkan.a may retain nv_cubin.c.o, which references libelf. That
 * NVIDIA CUBIN parser is not used by the Tegra X1 Switch path; devkitPro does
 * not ship libelf, so these symbols satisfy the static link only.
 */
#include <stddef.h>

unsigned int elf_version(unsigned int version) { (void)version; return 0; }
void *elf_memory(char *image, size_t size) { (void)image; (void)size; return NULL; }
int elf_end(void *elf) { (void)elf; return 0; }
int elf_kind(void *elf) { (void)elf; return 0; }
void *elf64_getehdr(void *elf) { (void)elf; return NULL; }
void *elf64_getshdr(void *section) { (void)section; return NULL; }
void *elf_getscn(void *elf, size_t index) { (void)elf; (void)index; return NULL; }
void *elf_nextscn(void *elf, void *section) { (void)elf; (void)section; return NULL; }
void *elf_getdata(void *section, void *data) { (void)section; (void)data; return NULL; }
int elf_getshdrstrndx(void *elf, size_t *index) {
    (void)elf;
    if (index) *index = 0;
    return -1;
}
char *elf_strptr(void *elf, size_t section, size_t offset) {
    (void)elf; (void)section; (void)offset;
    return NULL;
}
int elf_errno(void) { return 0; }
const char *elf_errmsg(int error) { (void)error; return "libelf not available on Switch"; }
