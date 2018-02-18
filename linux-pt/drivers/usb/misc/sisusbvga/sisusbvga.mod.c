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
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4c0f4758, __VMLINUX_SYMBOL_STR(vc_resize) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x3a4c9cf3, __VMLINUX_SYMBOL_STR(usb_deregister_dev) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x28118cb6, __VMLINUX_SYMBOL_STR(__get_user_1) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x16876ee6, __VMLINUX_SYMBOL_STR(vc_cons) },
	{ 0xc631580a, __VMLINUX_SYMBOL_STR(console_unlock) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf7584a9c, __VMLINUX_SYMBOL_STR(find_font) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xeb2dab71, __VMLINUX_SYMBOL_STR(usb_register_dev) },
	{ 0xfbaaf01e, __VMLINUX_SYMBOL_STR(console_lock) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbb72d4fe, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x53d7eb9d, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb70740e, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xf24c0281, __VMLINUX_SYMBOL_STR(do_take_over_console) },
	{ 0x743d0c5f, __VMLINUX_SYMBOL_STR(usb_find_interface) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb9acd3d9, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x95dbe078, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xdf59b4ee, __VMLINUX_SYMBOL_STR(con_set_default_unimap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0711p0550d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0903d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0918d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0920d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p5200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v182Dp021Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v182Dp0269d*dc*dsc*dp*ic*isc*ip*in*");
