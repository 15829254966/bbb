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
	{ 0xe7b90c5c, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6178e335, __VMLINUX_SYMBOL_STR(ssb_dma_translation) },
	{ 0xa7547b33, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xb611b170, __VMLINUX_SYMBOL_STR(bcma_pmu_spuravoid_pllupdate) },
	{ 0x8a2d86f5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd521a8e3, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x2b4b1189, __VMLINUX_SYMBOL_STR(bcma_host_pci_down) },
	{ 0xd8a7658c, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x39a0686a, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xe8e8c3ea, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x76fb0e76, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xddeec3ed, __VMLINUX_SYMBOL_STR(ieee80211_rts_get) },
	{ 0xf6fd3edd, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xc4b5ad8e, __VMLINUX_SYMBOL_STR(ssb_commit_settings) },
	{ 0xb965bba2, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xdac8d71b, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xac03652c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4af93d94, __VMLINUX_SYMBOL_STR(ssb_bus_powerup) },
	{ 0x19fe4ce0, __VMLINUX_SYMBOL_STR(bcma_host_pci_up) },
	{ 0x125c78ce, __VMLINUX_SYMBOL_STR(ssb_bus_sdiobus_register) },
	{ 0x914b1b36, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x9122d2ac, __VMLINUX_SYMBOL_STR(__ieee80211_get_assoc_led_name) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x5a2e33b7, __VMLINUX_SYMBOL_STR(__ssb_driver_register) },
	{ 0x3a6cc6de, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x84644bd6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x39ade1bd, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x3b0c08b4, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x76ac3c06, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9a6821dc, __VMLINUX_SYMBOL_STR(ssb_driver_unregister) },
	{ 0x56df6838, __VMLINUX_SYMBOL_STR(ssb_chipco_gpio_control) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2dc264c0, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0xbc291391, __VMLINUX_SYMBOL_STR(bcma_core_dma_translation) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe5cfb991, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x5ab85e97, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xf6b8026d, __VMLINUX_SYMBOL_STR(ssb_device_enable) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xa9dd5281, __VMLINUX_SYMBOL_STR(bcma_core_set_clockmode) },
	{ 0x611c529b, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xfcb01811, __VMLINUX_SYMBOL_STR(__bcma_driver_register) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x67b6d28, __VMLINUX_SYMBOL_STR(ieee80211_ctstoself_get) },
	{ 0xb9a97b16, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xc9ca1875, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x6aa70036, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x1c383829, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xd05224d4, __VMLINUX_SYMBOL_STR(bcma_host_pci_irq_ctl) },
	{ 0x5230a67b, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x5778981e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xc97e109d, __VMLINUX_SYMBOL_STR(bcma_chipco_gpio_control) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x676d5f37, __VMLINUX_SYMBOL_STR(__ieee80211_get_rx_led_name) },
	{ 0xb06caff0, __VMLINUX_SYMBOL_STR(bcma_core_is_enabled) },
	{ 0x117171fe, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_voltage) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xb67b5e1f, __VMLINUX_SYMBOL_STR(ssb_device_disable) },
	{ 0x9467e93d, __VMLINUX_SYMBOL_STR(bcma_core_enable) },
	{ 0x4f656b7b, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x602c34c4, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xd6364deb, __VMLINUX_SYMBOL_STR(bcma_driver_unregister) },
	{ 0x3bc48de7, __VMLINUX_SYMBOL_STR(bcma_core_pll_ctl) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0xcae7cc6a, __VMLINUX_SYMBOL_STR(hwrng_register) },
	{ 0x45bd087, __VMLINUX_SYMBOL_STR(__ieee80211_get_tx_led_name) },
	{ 0x1b30c78b, __VMLINUX_SYMBOL_STR(ssb_set_devtypedata) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf1e1ef83, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0xc9c73a52, __VMLINUX_SYMBOL_STR(ieee80211_generic_frame_duration) },
	{ 0x81c2c0ab, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xc93f037, __VMLINUX_SYMBOL_STR(ssb_bus_unregister) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0xf67a2ce5, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x315102e3, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf141040f, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x90a46b77, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x123d0d7d, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x24e77ae6, __VMLINUX_SYMBOL_STR(ssb_bus_may_powerdown) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xfb53097a, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb454851, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x5a9fc07d, __VMLINUX_SYMBOL_STR(ssb_pcicore_dev_irqvecs_enable) },
	{ 0xef9d84c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x75cc8f, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x36ac5a30, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_paref) },
	{ 0x69c43db9, __VMLINUX_SYMBOL_STR(hwrng_unregister) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8aa7b3d4, __VMLINUX_SYMBOL_STR(ssb_device_is_enabled) },
	{ 0xf5e61391, __VMLINUX_SYMBOL_STR(bcma_core_disable) },
	{ 0xd3c5bcb, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x3642a302, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xba87dde9, __VMLINUX_SYMBOL_STR(ssb_pmu_spuravoid_pllupdate) },
	{ 0x2166686, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_p1k_iv) },
	{ 0x8492a430, __VMLINUX_SYMBOL_STR(ieee80211_get_response_rate) },
	{ 0x9979e07e, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x3e72b5a2, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ssb,bcma,cfg80211,rng-core";

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");
