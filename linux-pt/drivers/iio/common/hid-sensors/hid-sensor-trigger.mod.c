#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbba89470, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd8df6b54, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7b77ddeb, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xb4d2ca1f, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0xe9a4c1d2, __VMLINUX_SYMBOL_STR(iio_trigger_alloc) },
	{ 0xc5639b85, __VMLINUX_SYMBOL_STR(sensor_hub_get_feature) },
	{ 0xe5b8e00d, __VMLINUX_SYMBOL_STR(sensor_hub_device_open) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x15e1de7b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xeca4b029, __VMLINUX_SYMBOL_STR(hid_sensor_read_poll_value) },
	{ 0x9e56a5ce, __VMLINUX_SYMBOL_STR(sensor_hub_device_close) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x48de1c36, __VMLINUX_SYMBOL_STR(hid_sensor_get_usage_index) },
	{ 0xacaff8e6, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfb259033, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0x7dbee2e9, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x9b40d39a, __VMLINUX_SYMBOL_STR(sensor_hub_set_feature) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xd2508b7d, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x3454a49f, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x5f2757f8, __VMLINUX_SYMBOL_STR(iio_trigger_free) },
	{ 0x1f310f22, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,hid-sensor-hub,hid-sensor-iio-common";

