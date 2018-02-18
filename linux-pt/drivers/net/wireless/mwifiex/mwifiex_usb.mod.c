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
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x201a7897, __VMLINUX_SYMBOL_STR(mwifiex_cancel_hs) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xac03652c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x1c3810c5, __VMLINUX_SYMBOL_STR(mwifiex_write_data_complete) },
	{ 0x3a4cffbb, __VMLINUX_SYMBOL_STR(mwifiex_process_sleep_confirm_resp) },
	{ 0x99095afb, __VMLINUX_SYMBOL_STR(mwifiex_queue_main_work) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x84644bd6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x8e454f92, __VMLINUX_SYMBOL_STR(_mwifiex_dbg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2337cc6a, __VMLINUX_SYMBOL_STR(mwifiex_add_card) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x5778981e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x53d7eb9d, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfd10495b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xcdfee6b3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xb70740e, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xeb0bc5a7, __VMLINUX_SYMBOL_STR(mwifiex_process_hs_config) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x637b88, __VMLINUX_SYMBOL_STR(mwifiex_multi_chan_resync) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x9231a9e3, __VMLINUX_SYMBOL_STR(mwifiex_deauthenticate_all) },
	{ 0xe2be532f, __VMLINUX_SYMBOL_STR(mwifiex_remove_card) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf959a84f, __VMLINUX_SYMBOL_STR(mwifiex_enable_hs) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9e9c64ec, __VMLINUX_SYMBOL_STR(mwifiex_init_shutdown_fw) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("usb:v1286p2041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2042d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2044d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2049d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ed*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "04C4BDA998B8D6F9F91F378");
