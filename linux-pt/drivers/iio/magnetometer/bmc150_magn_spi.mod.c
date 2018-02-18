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
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x7bc5d8ee, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbb8417b7, __VMLINUX_SYMBOL_STR(bmc150_magn_probe) },
	{ 0xd3fb6a08, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0xdcdf534d, __VMLINUX_SYMBOL_STR(bmc150_magn_regmap_config) },
	{ 0xd87202be, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x92639fa5, __VMLINUX_SYMBOL_STR(bmc150_magn_remove) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bmc150_magn";

MODULE_ALIAS("acpi*:BMC150B:*");
MODULE_ALIAS("acpi*:BMC156B:*");
MODULE_ALIAS("acpi*:BMM150B:*");
MODULE_ALIAS("spi:bmc150_magn");
MODULE_ALIAS("spi:bmc156_magn");
MODULE_ALIAS("spi:bmm150_magn");
