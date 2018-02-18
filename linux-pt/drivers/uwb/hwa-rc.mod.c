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
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x8e8b08c7, __VMLINUX_SYMBOL_STR(uwb_rc_add) },
	{ 0xfd8607b8, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x53d7eb9d, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xb2ec010c, __VMLINUX_SYMBOL_STR(uwb_rc_alloc) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbf635d47, __VMLINUX_SYMBOL_STR(uwb_rc_reset_all) },
	{ 0x5b0ff6e2, __VMLINUX_SYMBOL_STR(uwb_rc_neh_error) },
	{ 0x59699f00, __VMLINUX_SYMBOL_STR(uwb_rc_neh_grok) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfd10495b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x17fe6114, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4b9deee8, __VMLINUX_SYMBOL_STR(uwb_rc_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb70740e, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xf9791427, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0x40890c08, __VMLINUX_SYMBOL_STR(uwb_rc_rm) },
	{ 0x5cc44152, __VMLINUX_SYMBOL_STR(uwb_rc_pre_reset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xda1369b3, __VMLINUX_SYMBOL_STR(uwb_rc_post_reset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uwb";

MODULE_ALIAS("usb:v07D1p3D02d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v8086p0C3Bd*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v13DCp5310d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v13DCp5611d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip02in*");
