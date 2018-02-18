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
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbea5ff1e, __VMLINUX_SYMBOL_STR(static_key_initialized) },
	{ 0x767b8ba8, __VMLINUX_SYMBOL_STR(base_true_key) },
	{ 0x41ecf87a, __VMLINUX_SYMBOL_STR(base_inv_true_key) },
	{ 0x9af6b231, __VMLINUX_SYMBOL_STR(base_false_key) },
	{ 0x8d490167, __VMLINUX_SYMBOL_STR(base_inv_false_key) },
	{ 0xdba4feef, __VMLINUX_SYMBOL_STR(base_inv_old_false_key) },
	{ 0x72eb4ea9, __VMLINUX_SYMBOL_STR(base_old_false_key) },
	{ 0x2d107b5e, __VMLINUX_SYMBOL_STR(base_inv_old_true_key) },
	{ 0xde0e6eb2, __VMLINUX_SYMBOL_STR(base_old_true_key) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=test_static_key_base";

