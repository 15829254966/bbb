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
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x98e68eca, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xf67a2ce5, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xfa3b251c, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x3642a302, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcdfee6b3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x90a46b77, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2dc264c0, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x61e54eca, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc28b7011, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xc9ca1875, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xd521a8e3, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xa46f2405, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x29e4a73a, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe5cfb991, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x5ab85e97, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x6f7dfe2, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xadffa2b2, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb0cfb041, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x123d0d7d, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xdac8d71b, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xf6f3ee79, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

MODULE_ALIAS("usb:v168Cp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v168Cp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0713d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0710d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp160Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp160Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p5F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p5F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0826d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0827d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0828d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0829d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p4251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F03d*dc*dsc*dp*ic*isc*ip*in*");
