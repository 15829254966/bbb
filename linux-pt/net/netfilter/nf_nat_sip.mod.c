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
	{ 0xc5b31c5e, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x7de748f6, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0xdc92a337, __VMLINUX_SYMBOL_STR(nf_nat_sip_hooks) },
	{ 0x88c3a274, __VMLINUX_SYMBOL_STR(ct_sip_parse_numerical_param) },
	{ 0x6d9a29e5, __VMLINUX_SYMBOL_STR(ct_sip_parse_address_param) },
	{ 0x863ddeae, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x65a4ffd5, __VMLINUX_SYMBOL_STR(ct_sip_parse_request) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x473c0d4b, __VMLINUX_SYMBOL_STR(ct_sip_parse_header_uri) },
	{ 0xfd1c4bec, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0x580ab3c5, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x4cecd161, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xbd874e03, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x65073662, __VMLINUX_SYMBOL_STR(ct_sip_get_header) },
	{ 0x4d40c7a4, __VMLINUX_SYMBOL_STR(ct_sip_get_sdp_header) },
	{ 0x4e63f8a3, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
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
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";

