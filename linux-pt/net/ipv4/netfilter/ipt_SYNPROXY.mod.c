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
	{ 0x323f0077, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0xacb2aff5, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x8a25479f, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x75835068, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xef9d84c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x93524a0c, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_init) },
	{ 0x9152b16e, __VMLINUX_SYMBOL_STR(synproxy_tstamp_adjust) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x90298227, __VMLINUX_SYMBOL_STR(synproxy_init_timestamp_cookie) },
	{ 0x52a41251, __VMLINUX_SYMBOL_STR(__cookie_v4_init_sequence) },
	{ 0x1a4837e1, __VMLINUX_SYMBOL_STR(synproxy_parse_options) },
	{ 0xe067b136, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x63da485a, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xef7db50c, __VMLINUX_SYMBOL_STR(synproxy_net_id) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x11a006b5, __VMLINUX_SYMBOL_STR(synproxy_check_timestamp_cookie) },
	{ 0x8841d39b, __VMLINUX_SYMBOL_STR(synproxy_build_options) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xb42e336a, __VMLINUX_SYMBOL_STR(synproxy_options_size) },
	{ 0x5272d8bc, __VMLINUX_SYMBOL_STR(__cookie_v4_check) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x65cf658e, __VMLINUX_SYMBOL_STR(ip_local_out) },
	{ 0x969d541, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack,nf_synproxy_core";

