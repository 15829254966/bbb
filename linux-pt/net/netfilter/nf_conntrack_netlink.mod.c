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
	{ 0x1885258d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x2b89c66, __VMLINUX_SYMBOL_STR(nfnl_ct_hook) },
	{ 0xcd3f508c, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0x5fd9b2f, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xd1e9ecaf, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x746c58b9, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0x5a1a88bd, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0xe645d423, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x343ceceb, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x42cdb18d, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0xf511e917, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0xff8a2dc5, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0xac57fd41, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0xbf223db2, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0x76446a0c, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0x33f04781, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbc9363c6, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7cfd8c0, __VMLINUX_SYMBOL_STR(nf_conntrack_locks) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0xab7d8a76, __VMLINUX_SYMBOL_STR(nf_ct_iterate_cleanup) },
	{ 0xd6b6f30c, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x739b6850, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x8f2a1114, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0xc79b5bf0, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0x5c80434b, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0xc5bfdf02, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x927d4ab0, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0x7066c222, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8e3b16e9, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x7c62d042, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfac57a9, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0xb0f37da7, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x367aa48d, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc2abd2fd, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0x3d44afc9, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0xbd874e03, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x24a1c712, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbf63773, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x821212a0, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6d78916b, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0xb225d797, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0xaeb3ee29, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x6a525406, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x5666ebc2, __VMLINUX_SYMBOL_STR(nf_ct_tcp_seqadj_set) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";

