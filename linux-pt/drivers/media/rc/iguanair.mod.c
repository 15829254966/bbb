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
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x91ab8bf5, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xfa3b251c, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x4ce8cebc, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0xc622736d, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa46f2405, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1def808c, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0x9e890b5c, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x4a844393, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xab57aaa6, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf6f3ee79, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xca0e8439, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1781p0938d*dc*dsc*dp*ic*isc*ip*in*");
