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
	{ 0xa201b8b9, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcbee6439, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x29e1b020, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xce7cbd68, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xa72f31c5, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x70610941, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xadba5683, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0xa40dbbd3, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x3cf5470d, __VMLINUX_SYMBOL_STR(w1_read_block) },
	{ 0xf7aaeddc, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0x8375d79d, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0xaa4bb7dc, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0xa88e96c2, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x8576bb53, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";

