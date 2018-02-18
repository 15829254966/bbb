#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbba89470, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3349efff, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x725a8ddd, __VMLINUX_SYMBOL_STR(drm_dev_register) },
	{ 0x115442ca, __VMLINUX_SYMBOL_STR(drm_gem_put_pages) },
	{ 0x90f50c13, __VMLINUX_SYMBOL_STR(drm_dev_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfb874611, __VMLINUX_SYMBOL_STR(drm_gem_free_mmap_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5ffac64f, __VMLINUX_SYMBOL_STR(drm_dev_unref) },
	{ 0x831e9023, __VMLINUX_SYMBOL_STR(drm_dev_unregister) },
	{ 0x7ba00036, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0x2e066dc4, __VMLINUX_SYMBOL_STR(dma_buf_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe72407, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x7d2b8ffb, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0x7df4ef4c, __VMLINUX_SYMBOL_STR(drm_gem_vm_open) },
	{ 0x3a29fcf7, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0xc0d84835, __VMLINUX_SYMBOL_STR(drm_gem_vm_close) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0x4ea1f5a2, __VMLINUX_SYMBOL_STR(drm_gem_object_free) },
	{ 0xbda9e3a1, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x328d626d, __VMLINUX_SYMBOL_STR(drm_gem_mmap) },
	{ 0xf455e2f7, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x340607b7, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0xb4b9d2de, __VMLINUX_SYMBOL_STR(drm_dev_set_unique) },
	{ 0xe2f00e3c, __VMLINUX_SYMBOL_STR(drm_gem_create_mmap_offset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc360e7e2, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0x492b0cd9, __VMLINUX_SYMBOL_STR(drm_gem_get_pages) },
	{ 0x9689b1c3, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x41e6c602, __VMLINUX_SYMBOL_STR(drm_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

