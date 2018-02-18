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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x21cf3027, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf6573e62, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x26769949, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0xedbb8d0e, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x727946fe, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xeae180fb, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xd986c071, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x1885258d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x71031b8a, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x7ea04d83, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa657333a, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x9af512db, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0xb9910cfa, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0xacb2aff5, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xd63e8f16, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0xea75495d, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x7252838c, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp6) },
	{ 0xf792a363, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0x5fd9b2f, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x7b8d1c0b, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x7bd5ea3c, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0x75835068, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x4176e7f5, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x3ed75223, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0xae4047f1, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp6) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xe067b136, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xc3a5e02c, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x4a06e2db, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0x8f2a1114, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x6d78916b, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv6";

