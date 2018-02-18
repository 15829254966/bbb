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
	{ 0xd786340f, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x924dd942, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x4c688583, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0xa9215dc9, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x1c39f636, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x2441a547, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x77fa88da, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xea96fc21, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x918a0c49, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3eff7982, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x1ac08a42, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xf06a15bc, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x7be9c4c1, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69209cce, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xf4cde78f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x11626e56, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1f61bc9f, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f969406, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v16C0p05DFd*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "B4BB73D649F3BF8F531D852");
