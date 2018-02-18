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
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x4ce8cebc, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb22816c, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0xb242a72a, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xfe8aebc3, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0x91ab8bf5, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc622736d, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x53d7eb9d, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xfa3b251c, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1def808c, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0x9e890b5c, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0xab57aaa6, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4a844393, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb70740e, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xf6f3ee79, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xca0e8439, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v045Ep006Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0608d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p060Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p060Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p060Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p206Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2093d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0161d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p031Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p0322d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p0334d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p0338d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p0353d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1460p9150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1308pC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v051CpC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v107Bp3009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EEp2501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v179Dp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v195Dp7002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1509p9242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep9803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE03Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE03Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE03Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1934p5168d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1934p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1934p0702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0225d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1019p0F38d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB8p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp3020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp3082d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04EBpE004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Ap2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2596p8008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2596p8016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2596p8042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
