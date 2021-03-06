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
	{ 0xacb2aff5, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x1885258d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x75835068, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x5fd9b2f, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x5a5d193a, __VMLINUX_SYMBOL_STR(ebt_register_table) },
	{ 0x22568362, __VMLINUX_SYMBOL_STR(ebt_unregister_table) },
	{ 0xfd4508ec, __VMLINUX_SYMBOL_STR(ebt_do_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ebtables";

