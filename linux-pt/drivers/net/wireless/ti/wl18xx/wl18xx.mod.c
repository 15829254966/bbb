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
	{ 0x5d3ca8c, __VMLINUX_SYMBOL_STR(wl12xx_cmd_build_probe_req) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x76e32bb6, __VMLINUX_SYMBOL_STR(wl1271_ps_elp_wakeup) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0xe558d572, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xac1bbfab, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x5c55794b, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x87d23811, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xc6f4771d, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0x3f162143, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0xd4dbce33, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0x13d85f41, __VMLINUX_SYMBOL_STR(ieee80211_radar_detected) },
	{ 0x57d32f4a, __VMLINUX_SYMBOL_STR(wlcore_event_fw_logger) },
	{ 0xfa486917, __VMLINUX_SYMBOL_STR(wlcore_rx_ba_max_subframes) },
	{ 0x3ad9daa8, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x59f4cc37, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0x94ee9237, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x266dfc1f, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3672ca8c, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x77092dcc, __VMLINUX_SYMBOL_STR(wlcore_get_native_channel_type) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe70b87a, __VMLINUX_SYMBOL_STR(ieee80211_change_rx_ba_max_subframes) },
	{ 0xc9e0b52, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0x1e1d4773, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x98e68eca, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xfaeb9f8, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x8637f22e, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0x8290f8b8, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc7e7ec0a, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x4503b703, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7f8060a, __VMLINUX_SYMBOL_STR(wl1271_ps_elp_sleep) },
	{ 0xf94d68de, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x51de9328, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xc9ca1875, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xdb018064, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x5778981e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x973d0f9e, __VMLINUX_SYMBOL_STR(kstrtoul_from_user) },
	{ 0x36b104c1, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0x3a9ec0cb, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x40e0047e, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xec0ca2a6, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0xea07ec7, __VMLINUX_SYMBOL_STR(kstrtou8_from_user) },
	{ 0x1ad71ee3, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0xa33c5b1c, __VMLINUX_SYMBOL_STR(wl1271_free_tx_id) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x11e41d21, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0xadffa2b2, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x2f296c98, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x91da5146, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd0e31f9f, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0x41c38ee4, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0x90a46b77, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x5adcbd96, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x13f2a33, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0xded6adb2, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x59213846, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe08d8508, __VMLINUX_SYMBOL_STR(wl12xx_is_dummy_packet) },
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x4bd19a0b, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0x24e5719b, __VMLINUX_SYMBOL_STR(wlcore_cmd_generic_cfg) },
	{ 0x3642a302, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xc15ab1f6, __VMLINUX_SYMBOL_STR(ieee80211_connection_loss) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211,cfg80211";

MODULE_ALIAS("platform:wl18xx");
