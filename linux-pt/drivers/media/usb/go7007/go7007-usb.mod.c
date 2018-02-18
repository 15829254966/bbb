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
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6aa9e840, __VMLINUX_SYMBOL_STR(go7007_read_interrupt) },
	{ 0x45539534, __VMLINUX_SYMBOL_STR(go7007_update_board) },
	{ 0xc38a6d02, __VMLINUX_SYMBOL_STR(go7007_read_addr) },
	{ 0xac483246, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0xa11d43f6, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xed600736, __VMLINUX_SYMBOL_STR(go7007_register_encoder) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdf2f12dd, __VMLINUX_SYMBOL_STR(go7007_boot_encoder) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfd560c5b, __VMLINUX_SYMBOL_STR(go7007_alloc) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcdfee6b3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb9a3fce6, __VMLINUX_SYMBOL_STR(go7007_parse_video_stream) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x11626e56, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5f969406, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x1f61bc9f, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xc2043999, __VMLINUX_SYMBOL_STR(go7007_snd_remove) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=go7007";

MODULE_ALIAS("usb:v0EB1p7007d0200dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0202dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0204dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0205dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0208dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0209dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0210dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA102d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA104d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDpDE00d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2250d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0709d0204dc*dsc*dp*ic*isc*ip*in*");
