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
	{ 0x9ca8b4f2, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x939312b5, __VMLINUX_SYMBOL_STR(device_create_bin_file) },
	{ 0x1c383829, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xcd37d4d4, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x7a890c8, __VMLINUX_SYMBOL_STR(fb_alloc_cmap) },
	{ 0x21dc4d7a, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xce35dbc2, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x81a7e680, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0x63083497, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0xf222719c, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x65f3ad9a, __VMLINUX_SYMBOL_STR(fb_videomode_to_var) },
	{ 0x487f831, __VMLINUX_SYMBOL_STR(fb_find_best_display) },
	{ 0xda8af7ad, __VMLINUX_SYMBOL_STR(fb_find_nearest_mode) },
	{ 0xa1b759ce, __VMLINUX_SYMBOL_STR(fb_add_videomode) },
	{ 0xa598e29c, __VMLINUX_SYMBOL_STR(vesa_modes) },
	{ 0xff9ca065, __VMLINUX_SYMBOL_STR(fb_edid_to_monspecs) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9924c496, __VMLINUX_SYMBOL_STR(__usb_get_extra_descriptor) },
	{ 0xfa3b251c, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xc3c00dc, __VMLINUX_SYMBOL_STR(usb_get_descriptor) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf76b0a59, __VMLINUX_SYMBOL_STR(read_current_timer) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x837d0f0a, __VMLINUX_SYMBOL_STR(down_timeout) },
	{ 0x98b71c6, __VMLINUX_SYMBOL_STR(fb_dealloc_cmap) },
	{ 0x9203ce5e, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0xc9561772, __VMLINUX_SYMBOL_STR(fb_destroy_modelist) },
	{ 0x1dc36131, __VMLINUX_SYMBOL_STR(fb_destroy_modedb) },
	{ 0x6115fc46, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf05ffa15, __VMLINUX_SYMBOL_STR(fb_var_to_videomode) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x45496a7d, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc00777bd, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0xa7ca6829, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x3744cf36, __VMLINUX_SYMBOL_STR(vmalloc_to_pfn) },
	{ 0xfacd2e14, __VMLINUX_SYMBOL_STR(pgprot_user) },
	{ 0xc1a84fb2, __VMLINUX_SYMBOL_STR(unlink_framebuffer) },
	{ 0xe7409920, __VMLINUX_SYMBOL_STR(device_remove_bin_file) },
	{ 0xa7547b33, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xf6f3ee79, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");
