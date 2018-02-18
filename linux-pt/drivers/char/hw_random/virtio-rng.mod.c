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
	{ 0x266a9484, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xbd704c1, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0xcae7cc6a, __VMLINUX_SYMBOL_STR(hwrng_register) },
	{ 0x69c43db9, __VMLINUX_SYMBOL_STR(hwrng_unregister) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x29e1b020, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xcbee6439, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27dcdd3f, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x8988c8d8, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x568f1fc5, __VMLINUX_SYMBOL_STR(wait_for_completion_killable) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x76ac3c06, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x9ba45b72, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rng-core";

MODULE_ALIAS("virtio:d00000004v*");
