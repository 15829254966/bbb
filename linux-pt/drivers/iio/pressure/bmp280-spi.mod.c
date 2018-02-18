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
	{ 0xdf6941c4, __VMLINUX_SYMBOL_STR(bmp280_dev_pm_ops) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x7bc5d8ee, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x824f86af, __VMLINUX_SYMBOL_STR(bmp280_regmap_config) },
	{ 0x2c2b962, __VMLINUX_SYMBOL_STR(bmp280_common_probe) },
	{ 0x1a8b76, __VMLINUX_SYMBOL_STR(__devm_regmap_init) },
	{ 0x68c95bcd, __VMLINUX_SYMBOL_STR(bmp180_regmap_config) },
	{ 0xdda6bf89, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0xd87202be, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xef269994, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4b09c34a, __VMLINUX_SYMBOL_STR(bmp280_common_remove) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bmp280";

MODULE_ALIAS("spi:bmp180");
MODULE_ALIAS("spi:bmp181");
MODULE_ALIAS("spi:bmp280");
MODULE_ALIAS("spi:bme280");
MODULE_ALIAS("of:N*T*Cbosch,bmp085*");
MODULE_ALIAS("of:N*T*Cbosch,bmp180*");
MODULE_ALIAS("of:N*T*Cbosch,bmp181*");
MODULE_ALIAS("of:N*T*Cbosch,bmp280*");
MODULE_ALIAS("of:N*T*Cbosch,bme280*");
