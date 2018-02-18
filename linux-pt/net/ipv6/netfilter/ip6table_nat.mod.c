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
	{ 0x3ce2eb6e, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0xa478bb89, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0x579e7b59, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
	{ 0xfbd05653, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_in) },
	{ 0x548c1cc0, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_out) },
	{ 0xac7a4d6, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_local_fn) },
	{ 0x1da8ceb2, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfdf7971f, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_fn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tables,nf_nat_ipv6";

