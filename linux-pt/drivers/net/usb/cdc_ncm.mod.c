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
	{ 0x414743df, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xffc50a8f, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xb6551061, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0x1339819b, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x47bc5a73, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0x2ae7aeb5, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x9ea12b84, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x25fc67d5, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x7e991206, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x8c2a5c1c, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xac03652c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xd9847f66, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xbb4cac8c, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7b33fd80, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x84644bd6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xba7e1495, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x42f6fed8, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x3056b115, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf740788e, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x1fc7469, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0xacdafe3b, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6c1bc760, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xb78ab0e1, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xb33969a9, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x3496dc69, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0xee5b307a, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xfeab3822, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1d833c2b, __VMLINUX_SYMBOL_STR(cdc_parse_cdc_header) },
	{ 0xe3e54b1f, __VMLINUX_SYMBOL_STR(usbnet_get_ethernet_addr) },
	{ 0x3bdff54e, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xe2d95612, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xa7750d74, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x8dced2c2, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe5f3bfd9, __VMLINUX_SYMBOL_STR(usbnet_unlink_rx_urbs) },
	{ 0x34c085de, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa814d4cd, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9e425be6, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xda389260, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xa650eaef, __VMLINUX_SYMBOL_STR(usbnet_manage_power) },
	{ 0xce22263e, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x5e4bd640, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
