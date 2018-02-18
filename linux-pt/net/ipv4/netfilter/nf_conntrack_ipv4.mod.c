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
	{ 0x9c9ec2a0, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x21cf3027, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0xb225d797, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf6573e62, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x26769949, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xedbb8d0e, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1c23b60f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x61b24f59, __VMLINUX_SYMBOL_STR(nf_conntrack_set_hashsize) },
	{ 0x727946fe, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xb0a2218, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0x4064e10e, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp4) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x63da485a, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xeae180fb, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xd1e5fcea, __VMLINUX_SYMBOL_STR(print_tuple) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd986c071, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x1885258d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x71031b8a, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x7ea04d83, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa657333a, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x980d7548, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x9af512db, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x25969ee9, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0xb9910cfa, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0xacb2aff5, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7c62d042, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0xdfbb83e8, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0xea75495d, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0xaeb3ee29, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0xf792a363, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0x5fd9b2f, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x7b8d1c0b, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xf02d1a74, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x4868e84f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x67d435fd, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x75835068, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xf38bcdf3, __VMLINUX_SYMBOL_STR(nf_conntrack_max) },
	{ 0x4176e7f5, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0x9c762573, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp4) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x3ed75223, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xe067b136, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xba6f2b0c, __VMLINUX_SYMBOL_STR(seq_print_acct) },
	{ 0x4a06e2db, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0x8f2a1114, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x6d78916b, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv4";

