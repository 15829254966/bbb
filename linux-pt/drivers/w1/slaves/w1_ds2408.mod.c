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
	{ 0x8576bb53, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0xaa4bb7dc, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x74b27741, __VMLINUX_SYMBOL_STR(w1_reset_bus) },
	{ 0xa40dbbd3, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa604dc95, __VMLINUX_SYMBOL_STR(w1_read_8) },
	{ 0x79f23ada, __VMLINUX_SYMBOL_STR(w1_reset_resume_command) },
	{ 0xadba5683, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0xa201b8b9, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";

