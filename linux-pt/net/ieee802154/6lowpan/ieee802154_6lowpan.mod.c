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
	{ 0x82c0f4db, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x9c9ec2a0, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x18e60984, __VMLINUX_SYMBOL_STR(__do_once_start) },
	{ 0x30e0c50, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9a44ae93, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xf6fd3edd, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf20551bd, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x170c4033, __VMLINUX_SYMBOL_STR(lowpan_header_compress) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbfd03632, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x1fcece0f, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0x3c274739, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xe809ee90, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x1cbe6646, __VMLINUX_SYMBOL_STR(lowpan_netdev_setup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2cfc05c5, __VMLINUX_SYMBOL_STR(kfree_skb_partial) },
	{ 0x1885258d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x3fe9bcbd, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x798d9c6e, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0x81ccc96, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x90e28be0, __VMLINUX_SYMBOL_STR(ieee802154_hdr_peek) },
	{ 0x510f2aab, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xc9c5b46d, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xf637383d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x6657736, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xc618f373, __VMLINUX_SYMBOL_STR(lowpan_header_decompress) },
	{ 0xdb0c963, __VMLINUX_SYMBOL_STR(skb_try_coalesce) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xec3eee2d, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x168acd1f, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x5fd9b2f, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x9215d24d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xaa4775ac, __VMLINUX_SYMBOL_STR(ieee802154_hdr_peek_addrs) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x71e7d59a, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe77e5877, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9733dfef, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0x8088a706, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xef9d84c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x5ecc278c, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x13972bd3, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x26f503b, __VMLINUX_SYMBOL_STR(skb_morph) },
	{ 0x4d7aef69, __VMLINUX_SYMBOL_STR(ieee802154_max_payload) },
	{ 0xe2cc96f7, __VMLINUX_SYMBOL_STR(__do_once_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=6lowpan,ieee802154";

