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
	{ 0x5c7fb245, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_nvs) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0xe558d572, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0x60853fd9, __VMLINUX_SYMBOL_STR(wl1271_acx_init_mem_config) },
	{ 0xac1bbfab, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x5c55794b, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x87d23811, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc6f4771d, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0x3f162143, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0xd4dbce33, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0x5abfd4, __VMLINUX_SYMBOL_STR(wl1271_acx_pm_config) },
	{ 0x8d3136ea, __VMLINUX_SYMBOL_STR(wlcore_calc_packet_alignment) },
	{ 0x3ad9daa8, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x59f4cc37, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0x94ee9237, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x266dfc1f, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3672ca8c, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x70580824, __VMLINUX_SYMBOL_STR(wl1271_acx_set_ht_capabilities) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc9e0b52, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0x1e1d4773, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x9b6a1919, __VMLINUX_SYMBOL_STR(wl1271_cmd_data_path) },
	{ 0x897214ba, __VMLINUX_SYMBOL_STR(wl12xx_acx_mem_cfg) },
	{ 0x98e68eca, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x8637f22e, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0x8290f8b8, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0xc4dbfef4, __VMLINUX_SYMBOL_STR(wl1271_acx_sleep_auth) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc7e7ec0a, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0x4503b703, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0x51fb5ab1, __VMLINUX_SYMBOL_STR(wl1271_cmd_test) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x51de9328, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xc9ca1875, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x36b104c1, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x40e0047e, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0xec0ca2a6, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0x1ad71ee3, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x11e41d21, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0x65525788, __VMLINUX_SYMBOL_STR(wlcore_event_soft_gemini_sense) },
	{ 0x2f296c98, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcc58df1, __VMLINUX_SYMBOL_STR(wlcore_tx_complete) },
	{ 0x91da5146, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd0e31f9f, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0x41c38ee4, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0x5adcbd96, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x13f2a33, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0xded6adb2, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x59213846, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x4bd19a0b, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0x75365390, __VMLINUX_SYMBOL_STR(wl1271_tx_min_rate_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211";

MODULE_ALIAS("platform:wl12xx");
