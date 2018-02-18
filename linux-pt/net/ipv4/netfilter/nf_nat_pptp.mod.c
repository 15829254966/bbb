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
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xd832918d, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_expectfn) },
	{ 0xb0ddb723, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_exp_gre) },
	{ 0x6b09cc7c, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_inbound) },
	{ 0x994e89a7, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_outbound) },
	{ 0x636b12c8, __VMLINUX_SYMBOL_STR(nf_nat_need_gre) },
	{ 0x827cc6a1, __VMLINUX_SYMBOL_STR(pptp_msg_name) },
	{ 0x4e63f8a3, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x9abc5ff0, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0x6a525406, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x4cecd161, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x5c80434b, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_pptp,nf_nat_proto_gre,nf_nat,nf_conntrack";

