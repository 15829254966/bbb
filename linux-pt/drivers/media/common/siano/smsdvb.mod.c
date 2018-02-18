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
	{ 0xd7598deb, __VMLINUX_SYMBOL_STR(smscore_register_hotplug) },
	{ 0x38c3db12, __VMLINUX_SYMBOL_STR(smscore_get_board_id) },
	{ 0xcbfebfce, __VMLINUX_SYMBOL_STR(sms_board_setup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xff36bb5b, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xe949128, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x46d996fa, __VMLINUX_SYMBOL_STR(sms_board_event) },
	{ 0xdb708594, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xbbdb5c42, __VMLINUX_SYMBOL_STR(smscore_unregister_client) },
	{ 0x73b2dfe, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x9978f7df, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x63222b29, __VMLINUX_SYMBOL_STR(smsclient_sendrequest) },
	{ 0xe2408b73, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x68b354ee, __VMLINUX_SYMBOL_STR(sms_board_lna_control) },
	{ 0x3c1ca0f3, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x38b491e4, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x487551e1, __VMLINUX_SYMBOL_STR(smscore_putbuffer) },
	{ 0x7f9d8fa0, __VMLINUX_SYMBOL_STR(smscore_unregister_hotplug) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x844539ae, __VMLINUX_SYMBOL_STR(sms_get_board) },
	{ 0x6be67a52, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x78e548e2, __VMLINUX_SYMBOL_STR(sms_board_power) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd0dba1dc, __VMLINUX_SYMBOL_STR(sms_board_led_feedback) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x63ee3422, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x88bf1bd7, __VMLINUX_SYMBOL_STR(smscore_register_client) },
	{ 0xcfaa4988, __VMLINUX_SYMBOL_STR(smscore_get_device_mode) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xa46f2405, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xd83a8b61, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv";

