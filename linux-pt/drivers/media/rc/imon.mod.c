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
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x15934e80, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x4ce8cebc, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0xeb2dab71, __VMLINUX_SYMBOL_STR(usb_register_dev) },
	{ 0x1403bc31, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7aa9f2b8, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x9ed0fa4b, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x91ab8bf5, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xc622736d, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0xcf720183, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x8c844aa3, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x9e425be6, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x53d7eb9d, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xf2c52689, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x3a4c9cf3, __VMLINUX_SYMBOL_STR(usb_deregister_dev) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xca0e8439, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xb07e4956, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xb70740e, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x3995c8b7, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x61a3844c, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x743d0c5f, __VMLINUX_SYMBOL_STR(usb_find_interface) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xea8a0529, __VMLINUX_SYMBOL_STR(rc_keyup) },
	{ 0xd35946c6, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeec7aaf1, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xb8606a3a, __VMLINUX_SYMBOL_STR(rc_g_keycode_from_table) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v15C2pFFDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0046d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3C91CC25EDF4DD004812E9F");
