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
	{ 0x282c5692, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0xd42f5dcd, __VMLINUX_SYMBOL_STR(v4l2_ctrl_cluster) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaf79d8cb, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x8c0347a5, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0x3eff7982, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4ac6f695, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x5c09bd2c, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0x6d7668fd, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x23fd6c4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa37d97e1, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5290ad1e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x78e6ae38, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0xfb0a0a24, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x9ee34a96, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0x1ac08a42, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main";

MODULE_ALIAS("usb:v0402p5602d*dc*dsc*dp*ic*isc*ip*in*");
