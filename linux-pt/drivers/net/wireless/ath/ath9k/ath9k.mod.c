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
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x946a1730, __VMLINUX_SYMBOL_STR(ar9003_paprd_is_done) },
	{ 0xda48a3d4, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x806b6bfe, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0xa11bfa77, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcbd03712, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x59f60bc0, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x91170951, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x182997bf, __VMLINUX_SYMBOL_STR(ath9k_hw_resume_interrupts) },
	{ 0xff152e48, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0x8a2d86f5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x6be01cd4, __VMLINUX_SYMBOL_STR(ar9003_mci_send_wlan_channels) },
	{ 0xfeb3ba0a, __VMLINUX_SYMBOL_STR(tasklet_unlock_wait) },
	{ 0x5d310ac5, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe75c86d3, __VMLINUX_SYMBOL_STR(ath9k_hw_setantenna) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe673c77c, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x4513386f, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0xd521a8e3, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x3a4a9b4b, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0xd8a7658c, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xe945ec4e, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x6edbe093, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xffd02408, __VMLINUX_SYMBOL_STR(ath9k_hw_get_tsf_offset) },
	{ 0x8789ffab, __VMLINUX_SYMBOL_STR(ath9k_hw_numtxpending) },
	{ 0x39a0686a, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x204bd720, __VMLINUX_SYMBOL_STR(ar9003_paprd_setup_gain_table) },
	{ 0x61d41866, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x8aee6a1f, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0x4f0ba3a4, __VMLINUX_SYMBOL_STR(ath9k_hw_set_interrupts) },
	{ 0x278f242, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0x86df7184, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x706c4d85, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_mci) },
	{ 0xefc56354, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0xbfd8ba00, __VMLINUX_SYMBOL_STR(ar9003_paprd_enable) },
	{ 0xd8a1021f, __VMLINUX_SYMBOL_STR(ath9k_hw_getchan_noise) },
	{ 0x94d36688, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xd0535917, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0x8ec7444c, __VMLINUX_SYMBOL_STR(ath9k_hw_computetxtime) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4965a4d1, __VMLINUX_SYMBOL_STR(ath9k_hw_disable_interrupts) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xdd22f16f, __VMLINUX_SYMBOL_STR(ath9k_hw_bstuck_nfcal) },
	{ 0xb965bba2, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4fa7abff, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x8abc6d7e, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe9eee848, __VMLINUX_SYMBOL_STR(ath9k_hw_gettxbuf) },
	{ 0xe90f5fff, __VMLINUX_SYMBOL_STR(dfs_pattern_detector_init) },
	{ 0xdac8d71b, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xac03652c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc64c3ace, __VMLINUX_SYMBOL_STR(pcie_capability_clear_and_set_word) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x60371cd2, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x705984df, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0xf7bff43a, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x2a32132f, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x23da5331, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x914b1b36, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x8893527b, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x427d2801, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_gpio_input) },
	{ 0x8b060b86, __VMLINUX_SYMBOL_STR(ath9k_hw_kill_interrupts) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x99aff357, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x16b96f23, __VMLINUX_SYMBOL_STR(ath9k_hw_request_gpio) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x61e54eca, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x39ade1bd, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x3b0c08b4, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x8e9da789, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x31b7328c, __VMLINUX_SYMBOL_STR(ath9k_hw_process_rxdesc_edma) },
	{ 0x8a071bfb, __VMLINUX_SYMBOL_STR(ar9003_paprd_populate_single_table) },
	{ 0x4a5af71c, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x76ac3c06, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x6edc2fca, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xbab6abf6, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe8926cbb, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0xe031a7b3, __VMLINUX_SYMBOL_STR(ath_gen_timer_isr) },
	{ 0x6958d64d, __VMLINUX_SYMBOL_STR(ath9k_hw_rxprocdesc) },
	{ 0xf75b1002, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd0fba346, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x802ebe51, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_2wire) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x2dc264c0, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe5cfb991, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x95e29fbe, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0x64c4f77, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_dbg_info) },
	{ 0x64bdb16b, __VMLINUX_SYMBOL_STR(ar9003_paprd_create_curve) },
	{ 0x8ea051f3, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x3174ae4, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0x5ab85e97, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd36931dd, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xe52ac142, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x3aab0855, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x9a108301, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x144535b0, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0xe499016c, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfb5b99b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd210e70c, __VMLINUX_SYMBOL_STR(ath9k_hw_addrxbuf_edma) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x9f9dfdff, __VMLINUX_SYMBOL_STR(ieee80211_find_sta_by_ifaddr) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x18a08e4, __VMLINUX_SYMBOL_STR(ath9k_hw_setup_statusring) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x5521c632, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0xb9a97b16, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x5a61e0a, __VMLINUX_SYMBOL_STR(ar9003_mci_get_next_gpm_offset) },
	{ 0xa1d3aba9, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xc9ca1875, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xbc92c68b, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x1ef5464f, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x863748f2, __VMLINUX_SYMBOL_STR(ath9k_hw_puttxbuf) },
	{ 0xe9b7ad72, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xbb37bcf, __VMLINUX_SYMBOL_STR(ar9003_mci_state) },
	{ 0xa0036bbc, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_scheme) },
	{ 0x1189cbe1, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0xb293a2c0, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xa9845d5e, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x26893942, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0xae6eb890, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0x13a0e6a5, __VMLINUX_SYMBOL_STR(ath9k_hw_abortpcurecv) },
	{ 0xe6f0ca2a, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x145717dc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xba0e920d, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xcb43b08c, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tx_filter) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x602c34c4, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x739fea90, __VMLINUX_SYMBOL_STR(ieee80211_sta_set_buffered) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x64e1874f, __VMLINUX_SYMBOL_STR(ar9003_mci_get_interrupt) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x64d2be6c, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0x12ed4e7a, __VMLINUX_SYMBOL_STR(ieee80211_send_bar) },
	{ 0x5de28647, __VMLINUX_SYMBOL_STR(ath9k_hw_updatetxtriglevel) },
	{ 0x8a0b6bab, __VMLINUX_SYMBOL_STR(ath_hw_cycle_counters_update) },
	{ 0x8c59e4dd, __VMLINUX_SYMBOL_STR(ar9003_mci_set_bt_version) },
	{ 0x889420fb, __VMLINUX_SYMBOL_STR(ath9k_hw_set_rx_bufsize) },
	{ 0xcc4e98ce, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0xb76f4796, __VMLINUX_SYMBOL_STR(ar9003_is_paprd_enabled) },
	{ 0xdb83f4bc, __VMLINUX_SYMBOL_STR(ar9003_get_pll_sqsum_dvc) },
	{ 0xb0c37646, __VMLINUX_SYMBOL_STR(ar9003_mci_send_message) },
	{ 0x9e605fa3, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xd8ccffaf, __VMLINUX_SYMBOL_STR(ar9003_mci_cleanup) },
	{ 0x9215d24d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x7ff550f2, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0x31df4121, __VMLINUX_SYMBOL_STR(ath9k_hw_txstart) },
	{ 0xfe9c4364, __VMLINUX_SYMBOL_STR(tasklet_enable) },
	{ 0xcdd96208, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x19bab51a, __VMLINUX_SYMBOL_STR(ath9k_hw_check_alive) },
	{ 0x73487f53, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x605c7737, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd385630f, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_concur_txprio) },
	{ 0xaf706ac4, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf1e1ef83, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0xe9dda721, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0xbcfc0f3a, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x81c2c0ab, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x834b2ae2, __VMLINUX_SYMBOL_STR(ar9003_mci_setup) },
	{ 0x62185331, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x146c7d38, __VMLINUX_SYMBOL_STR(ieee80211_sta_eosp) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x742e88e, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x5d3eb2da, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x315102e3, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xf67a2ce5, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x38d95fde, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbff25ade, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9a23daad, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9f5b738a, __VMLINUX_SYMBOL_STR(ath9k_hw_check_nav) },
	{ 0x346c7cb5, __VMLINUX_SYMBOL_STR(ath9k_hw_putrxbuf) },
	{ 0xf141040f, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x854545e0, __VMLINUX_SYMBOL_STR(ath_rxbuf_alloc) },
	{ 0x44380b04, __VMLINUX_SYMBOL_STR(ar9003_paprd_init_table) },
	{ 0x94afbe82, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe6ec3070, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0xaa302599, __VMLINUX_SYMBOL_STR(ath9k_hw_setuprxdesc) },
	{ 0xde490cf0, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xa66cd68, __VMLINUX_SYMBOL_STR(ath9k_hw_abort_tx_dma) },
	{ 0xa61ebb3, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x123d0d7d, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x202a5015, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x272a7d52, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0xef9d84c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xe5635e42, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x26dbad33, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_check) },
	{ 0xb4a8e8b0, __VMLINUX_SYMBOL_STR(ath9k_hw_enable_interrupts) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa46f2405, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x64eda53d, __VMLINUX_SYMBOL_STR(ath9k_hw_intrpend) },
	{ 0x72aedf9c, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x58ff4972, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0x3642a302, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xf1dd43e1, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x2c01b9b4, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xd516232c, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x917c0a14, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txpowerlimit) },
	{ 0xecbae269, __VMLINUX_SYMBOL_STR(ath9k_hw_stop_dma_queue) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,cfg80211,ath";

MODULE_ALIAS("pci:v0000168Cd00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000029sv0000168Csd00002096bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A3Bsd00001C71bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000105Bsd0000E01Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A32sd00000306bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000185Fsd0000309Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd00001536bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv00001A3Bsd00002C37bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002086bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001237bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002126bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd0000126Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002152bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E075bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003122bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004105bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004106bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C706bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C680bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C708bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003218bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003219bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002C97bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002100bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001C56sd00004001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006627bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006628bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Fsd00007197bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001186bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F86bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001195bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F95bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C00bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C01bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001043sd0000850Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002116bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006661bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000168Csd00003117bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000017AAsd00003214bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001969sd00000091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002110bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001043sd0000850Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006631bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006641bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000103Csd00001864bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000063bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000064bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000010CFsd00001783bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002003bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002176bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E068bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006B2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000842bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00001842bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00006671bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002811bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002812bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A1bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002F8Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003025bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E069bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000622bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000672bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000662bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000682bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd000018E3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd0000217Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd00002005bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd00004129bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000412Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000652bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000612bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000832bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00001832bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000692bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000803bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000813bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002130bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002182bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002F82bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Fsd00007202bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002810bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002813bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A4bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A120bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E07Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E08Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E081bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E099bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00004026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001043sd000085F2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv*sd*bc*sc*i*");
