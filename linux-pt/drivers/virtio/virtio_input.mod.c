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
	{ 0x7aa9f2b8, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xcf720183, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x36df050e, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x9ed0fa4b, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8c844aa3, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x61e6ff5a, __VMLINUX_SYMBOL_STR(virtqueue_add_outbuf) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd5a28646, __VMLINUX_SYMBOL_STR(virtqueue_detach_unused_buf) },
	{ 0xb07e4956, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x8a727d99, __VMLINUX_SYMBOL_STR(virtqueue_get_vring_size) },
	{ 0x27dcdd3f, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xeec7aaf1, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x8988c8d8, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x9ba45b72, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("virtio:d00000012v*");
