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
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0xa9062554, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xe5b8e00d, __VMLINUX_SYMBOL_STR(sensor_hub_device_open) },
	{ 0xbb4eed61, __VMLINUX_SYMBOL_STR(sensor_hub_register_callback) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfb36eb56, __VMLINUX_SYMBOL_STR(sensor_hub_input_get_attribute_info) },
	{ 0xdf32db23, __VMLINUX_SYMBOL_STR(hid_sensor_parse_common_attributes) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1663c1e1, __VMLINUX_SYMBOL_STR(wait_for_completion_killable_timeout) },
	{ 0x9f0183a3, __VMLINUX_SYMBOL_STR(sensor_hub_input_attr_get_raw_value) },
	{ 0x92b50634, __VMLINUX_SYMBOL_STR(sensor_hub_remove_callback) },
	{ 0x9e56a5ce, __VMLINUX_SYMBOL_STR(sensor_hub_device_close) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-sensor-hub,hid-sensor-iio-common";

MODULE_ALIAS("platform:HID-SENSOR-2000a0");
