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
	{ 0x3a653542, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xda48a3d4, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x806b6bfe, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0xa11bfa77, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x59f60bc0, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x91170951, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0xff152e48, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x19e7748e, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xe673c77c, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x4513386f, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0xd521a8e3, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x3a4a9b4b, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0xd8a7658c, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x6edbe093, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x61d41866, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x8aee6a1f, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0x278f242, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0x86df7184, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x94d36688, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xd0535917, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xb965bba2, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4fa7abff, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x8abc6d7e, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xdac8d71b, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xac03652c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x60371cd2, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x705984df, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0xf7bff43a, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x2a32132f, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x23da5331, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x914b1b36, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x8893527b, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x99aff357, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x61e54eca, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xaaa5868e, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0xf2c52689, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x84644bd6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x3b0c08b4, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x8e9da789, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4a5af71c, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x76ac3c06, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xbab6abf6, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe8926cbb, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0xf75b1002, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0xd0fba346, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2dc264c0, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x95e29fbe, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0x8ea051f3, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x3174ae4, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0x5ab85e97, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd36931dd, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0xe52ac142, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x3aab0855, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x9a108301, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x144535b0, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xe499016c, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x5521c632, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0xb9a97b16, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xa1d3aba9, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xc9ca1875, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x1ef5464f, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0xe9b7ad72, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x1189cbe1, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0xb293a2c0, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x5778981e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xa9845d5e, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x26893942, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0xae6eb890, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0xe6f0ca2a, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x53d7eb9d, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xba0e920d, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x602c34c4, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xcdfee6b3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xb70740e, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x64d2be6c, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xc28b7011, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x9e605fa3, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xb5d617a, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x7ff550f2, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xcdd96208, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x605c7737, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xaf706ac4, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe9dda721, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0xbcfc0f3a, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0x81c2c0ab, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xadffa2b2, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x62185331, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x742e88e, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0xf67a2ce5, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x315102e3, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x38d95fde, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbff25ade, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9a23daad, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0x401443d1, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0xe6ec3070, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0xde490cf0, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x90a46b77, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xa61ebb3, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x123d0d7d, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x202a5015, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0xfb53097a, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9e425be6, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x272a7d52, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0xe5635e42, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa46f2405, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x72aedf9c, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x58ff4972, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x3642a302, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xf1dd43e1, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xcf2b8c18, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");
