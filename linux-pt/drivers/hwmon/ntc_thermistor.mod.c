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
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb1bbca04, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xe8b20e07, __VMLINUX_SYMBOL_STR(thermal_zone_of_sensor_register) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf14bf1cc, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0x1403bc31, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x34c42df5, __VMLINUX_SYMBOL_STR(iio_get_channel_type) },
	{ 0xdba6bb2c, __VMLINUX_SYMBOL_STR(iio_channel_get) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5f428112, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x949a18, __VMLINUX_SYMBOL_STR(iio_convert_raw_to_processed) },
	{ 0xf0b6c0cf, __VMLINUX_SYMBOL_STR(iio_read_channel_raw) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf5e39841, __VMLINUX_SYMBOL_STR(thermal_zone_of_sensor_unregister) },
	{ 0xa24a84ee, __VMLINUX_SYMBOL_STR(iio_channel_release) },
	{ 0x3995c8b7, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x53199251, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0xf1deabf2, __VMLINUX_SYMBOL_STR(div64_u64) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("of:N*T*Cmurata,ncp15wb473*");
MODULE_ALIAS("of:N*T*Cmurata,ncp18wb473*");
MODULE_ALIAS("of:N*T*Cmurata,ncp21wb473*");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wb473*");
MODULE_ALIAS("of:N*T*Cmurata,ncp15wl333*");
MODULE_ALIAS("of:N*T*Cepcos,b57330v2103*");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wf104*");
MODULE_ALIAS("of:N*T*Cntc,ncp15wb473*");
MODULE_ALIAS("of:N*T*Cntc,ncp18wb473*");
MODULE_ALIAS("of:N*T*Cntc,ncp21wb473*");
MODULE_ALIAS("of:N*T*Cntc,ncp03wb473*");
MODULE_ALIAS("of:N*T*Cntc,ncp15wl333*");
