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
	{ 0x72aedf9c, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x33c01a8b, __VMLINUX_SYMBOL_STR(led_trigger_unregister_simple) },
	{ 0x3642a302, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xa801a1ed, __VMLINUX_SYMBOL_STR(led_trigger_register_simple) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x98e68eca, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x8fbd2da8, __VMLINUX_SYMBOL_STR(ieee80211_scan_completed) },
	{ 0x5931b647, __VMLINUX_SYMBOL_STR(led_trigger_event) },
	{ 0xf67a2ce5, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xfd10495b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2dc264c0, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x90a46b77, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x46f6669, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x53d7eb9d, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xac03652c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x5ab85e97, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0x29e4a73a, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0xd521a8e3, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xc9ca1875, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x61e54eca, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7fe1a403, __VMLINUX_SYMBOL_STR(cfg80211_find_ie) },
	{ 0x6f7dfe2, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x84644bd6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb70740e, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdac8d71b, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x123d0d7d, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

MODULE_ALIAS("usb:v03EBp7603d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0864p4100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p011Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D5CpA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DDpFF31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0919d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7604d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055DpA000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp2219d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp2227d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0864p4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p7605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p5743d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p0A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p001Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p3220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DDpFF35d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap3501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D5CpA002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7606d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2233d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12FDp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp7613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7614d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7617d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7615d*dc*dsc*dp*ic*isc*ip*in*");
