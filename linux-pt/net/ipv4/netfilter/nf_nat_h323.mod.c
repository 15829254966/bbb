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
	{ 0x7de748f6, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0xc5b31c5e, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0xa768ae70, __VMLINUX_SYMBOL_STR(nat_q931_hook) },
	{ 0x1dbf5721, __VMLINUX_SYMBOL_STR(nat_callforwarding_hook) },
	{ 0x33856465, __VMLINUX_SYMBOL_STR(nat_h245_hook) },
	{ 0xc1b3ebd2, __VMLINUX_SYMBOL_STR(nat_t120_hook) },
	{ 0x46e66c7f, __VMLINUX_SYMBOL_STR(nat_rtp_rtcp_hook) },
	{ 0x3879d1c6, __VMLINUX_SYMBOL_STR(set_ras_addr_hook) },
	{ 0x22dde09, __VMLINUX_SYMBOL_STR(set_sig_addr_hook) },
	{ 0xcceee497, __VMLINUX_SYMBOL_STR(set_h225_addr_hook) },
	{ 0xdb36379, __VMLINUX_SYMBOL_STR(set_h245_addr_hook) },
	{ 0xbfead440, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0x4cecd161, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xfc17d21b, __VMLINUX_SYMBOL_STR(get_h225_addr) },
	{ 0xbd874e03, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe067b136, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x4e63f8a3, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xafbd4322, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9abc5ff0, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";

