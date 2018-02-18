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
	{ 0x1339819b, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xb78ab0e1, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x8c2a5c1c, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2ae7aeb5, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x42f6fed8, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x5e4bd640, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x8dced2c2, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x9ea12b84, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x3496dc69, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0xfeab3822, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x7d020e9f, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x34c085de, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x6c1bc760, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xd9847f66, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xa7750d74, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf3bb475f, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x42d7eab5, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x25fc67d5, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x84644bd6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x3bdff54e, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7e20778f, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x3e97246, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xacdafe3b, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x3f062365, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xee5b307a, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbd94123f, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x67ab4cec, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x7b33fd80, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xbf209dda, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xce22263e, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xac03652c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xbc1fb435, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v0FE6p9800d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F14B073BD4CC8C787FFFCD5");
