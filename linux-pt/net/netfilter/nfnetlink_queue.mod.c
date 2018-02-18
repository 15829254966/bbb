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
	{ 0x25969ee9, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0xb0a2218, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x4868e84f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xcd3f508c, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xd7ea7094, __VMLINUX_SYMBOL_STR(nf_unregister_queue_handler) },
	{ 0x5271bfee, __VMLINUX_SYMBOL_STR(nf_register_queue_handler) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x1885258d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0xd1e9ecaf, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0x5fd9b2f, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x671d89e, __VMLINUX_SYMBOL_STR(nf_queue_entry_get_refs) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xbfe601e7, __VMLINUX_SYMBOL_STR(nf_queue_entry_release_refs) },
	{ 0x1e6c95f1, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0xf02d1a74, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x67d435fd, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x1c23b60f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xb059d198, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xbc1fb435, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x863ddeae, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x97f26326, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x256943b6, __VMLINUX_SYMBOL_STR(nfnetlink_unicast) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbac3cbf2, __VMLINUX_SYMBOL_STR(ns_to_timespec64) },
	{ 0x8541734f, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x58b9e826, __VMLINUX_SYMBOL_STR(skb_zerocopy) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x29b120b6, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0x46aacb3f, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0xbfd03632, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd2e83a12, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x222f6207, __VMLINUX_SYMBOL_STR(__nla_reserve) },
	{ 0x8e3b16e9, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x8e47f71c, __VMLINUX_SYMBOL_STR(__netlink_alloc_skb) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x2b89c66, __VMLINUX_SYMBOL_STR(nfnl_ct_hook) },
	{ 0xdb5c8940, __VMLINUX_SYMBOL_STR(skb_zerocopy_headlen) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xfd5e9be9, __VMLINUX_SYMBOL_STR(nf_reinject) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";

