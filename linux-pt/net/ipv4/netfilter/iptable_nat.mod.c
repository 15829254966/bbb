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
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x57f6ca9f, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0x24006a46, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0x7a805625, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0x6e6a3d0, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_in) },
	{ 0x4fbd694e, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_out) },
	{ 0xbcba74a2, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_local_fn) },
	{ 0xa4e0ceaf, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4dd4306c, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_fn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tables,nf_nat_ipv4";

