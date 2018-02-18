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
	{ 0xdfe01d51, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x280dbb3c, __VMLINUX_SYMBOL_STR(input_unregister_handler) },
	{ 0x9605a79a, __VMLINUX_SYMBOL_STR(input_register_handler) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x8f010df8, __VMLINUX_SYMBOL_STR(input_open_device) },
	{ 0x17fcd0cb, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0xb9acd3d9, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0x6d8172ca, __VMLINUX_SYMBOL_STR(input_ff_upload) },
	{ 0x38a9c2c7, __VMLINUX_SYMBOL_STR(input_ff_effect_from_user) },
	{ 0x80df7f97, __VMLINUX_SYMBOL_STR(arm_clear_user) },
	{ 0xbb72d4fe, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0xa7e71380, __VMLINUX_SYMBOL_STR(input_grab_device) },
	{ 0xb4448a66, __VMLINUX_SYMBOL_STR(input_ff_erase) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6410e160, __VMLINUX_SYMBOL_STR(ktime_mono_to_any) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9bf5ef24, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x55694cdd, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x584d41f1, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x5718deb6, __VMLINUX_SYMBOL_STR(input_register_handle) },
	{ 0x182112f8, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x44bd89b1, __VMLINUX_SYMBOL_STR(input_class) },
	{ 0xd2508b7d, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x28352af3, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf7f16b3f, __VMLINUX_SYMBOL_STR(input_get_new_minor) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x5d12e48f, __VMLINUX_SYMBOL_STR(input_event_to_user) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xf751aea, __VMLINUX_SYMBOL_STR(input_event_from_user) },
	{ 0x5c557fe0, __VMLINUX_SYMBOL_STR(input_inject_event) },
	{ 0x23fd6c4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf8ad740b, __VMLINUX_SYMBOL_STR(input_set_keycode) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xba52f7f2, __VMLINUX_SYMBOL_STR(input_get_keycode) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8be38c2d, __VMLINUX_SYMBOL_STR(input_release_device) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7248d793, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xc907fa9a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x37e7bcc9, __VMLINUX_SYMBOL_STR(input_unregister_handle) },
	{ 0x5cf53ce2, __VMLINUX_SYMBOL_STR(input_free_minor) },
	{ 0x898d455e, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xe419846d, __VMLINUX_SYMBOL_STR(input_close_device) },
	{ 0x94820c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xbb485b38, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc98a09b1, __VMLINUX_SYMBOL_STR(input_flush_device) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");
