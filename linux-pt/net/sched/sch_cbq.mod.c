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
	{ 0x81854bb8, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0x4ddcfdf, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x6bdcfd99, __VMLINUX_SYMBOL_STR(qdisc_class_hash_remove) },
	{ 0x2003c8e4, __VMLINUX_SYMBOL_STR(qdisc_class_hash_grow) },
	{ 0xc6de77b4, __VMLINUX_SYMBOL_STR(gen_new_estimator) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbd17c6de, __VMLINUX_SYMBOL_STR(gen_replace_estimator) },
	{ 0xa814d4cd, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x9bc679eb, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0x30429397, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x117093be, __VMLINUX_SYMBOL_STR(qdisc_class_hash_init) },
	{ 0xed597524, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x29a0bde5, __VMLINUX_SYMBOL_STR(hrtimer_try_to_cancel) },
	{ 0x2f461962, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x77e90aa1, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0xc4ede4aa, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xcd625c00, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0xafd030b2, __VMLINUX_SYMBOL_STR(gnet_stats_copy_rate_est) },
	{ 0x63bbf1de, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x53f19b75, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0x60b25ff7, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x390f4674, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0xa04a01bd, __VMLINUX_SYMBOL_STR(qdisc_class_hash_insert) },
	{ 0x3056b115, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x1321715b, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x8a6f6d2e, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x7e991206, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xba4ed664, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xf53d4c26, __VMLINUX_SYMBOL_STR(qdisc_class_hash_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x17b1125d, __VMLINUX_SYMBOL_STR(gen_kill_estimator) },
	{ 0x521b36b5, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0xcf13ed40, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0xd940d57d, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9f3010eb, __VMLINUX_SYMBOL_STR(gnet_stats_copy_app) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

