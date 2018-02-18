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
	{ 0x7d56dd1b, __VMLINUX_SYMBOL_STR(dibusb_read_eeprom_byte) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x93f92ca7, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0xee396ec4, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9202e3d0, __VMLINUX_SYMBOL_STR(dibusb_pid_filter) },
	{ 0x9978f7df, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xde5da3ba, __VMLINUX_SYMBOL_STR(dibusb2_0_power_ctrl) },
	{ 0x9b684281, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_frontend_attach) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe933bd6, __VMLINUX_SYMBOL_STR(dvb_usb_generic_rw) },
	{ 0x63ee3422, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x9dd70915, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_tuner_attach) },
	{ 0xfeb3f2fb, __VMLINUX_SYMBOL_STR(dibusb2_0_streaming_ctrl) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x966b5e5, __VMLINUX_SYMBOL_STR(dibusb_i2c_algo) },
	{ 0x8fde30f6, __VMLINUX_SYMBOL_STR(dibusb_pid_filter_ctrl) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb-dibusb-common,dvb-usb";

MODULE_ALIAS("usb:v2040p9300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9301d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DB8A5BFD66BFDCED2C327BD");
