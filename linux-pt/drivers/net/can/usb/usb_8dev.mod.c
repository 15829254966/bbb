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
	{ 0x93608ba, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x756f4db8, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0xb2c2cca0, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x944f3940, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x334a064f, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb22816c, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x3a80b724, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0x52fb19ff, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x3c274739, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x38905e5d, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcdfee6b3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xaef5dd37, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xaaa5868e, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0xc06f9e8d, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0xf71f3944, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xef9d84c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xbf209dda, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x1fcad1b0, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0xcf2b8c18, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfa3b251c, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd3fac4ce, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x956514e5, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0xf6f3ee79, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xf0764b97, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0x6b38aa60, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x414743df, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("usb:v0483p1234d*dc*dsc*dp*ic*isc*ip*in*");
