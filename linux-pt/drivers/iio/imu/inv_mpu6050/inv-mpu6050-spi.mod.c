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
	{ 0xd3fb6a08, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa1d31980, __VMLINUX_SYMBOL_STR(inv_mpu_pmops) },
	{ 0x7bc5d8ee, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xe6da8690, __VMLINUX_SYMBOL_STR(inv_mpu6050_set_power_itg) },
	{ 0x8c0766c2, __VMLINUX_SYMBOL_STR(inv_mpu_core_remove) },
	{ 0xe7420c20, __VMLINUX_SYMBOL_STR(inv_mpu_core_probe) },
	{ 0xd87202be, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xf6f48abf, __VMLINUX_SYMBOL_STR(regmap_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inv-mpu6050";

MODULE_ALIAS("spi:mpu6000");
MODULE_ALIAS("spi:mpu6500");
MODULE_ALIAS("spi:mpu9150");
MODULE_ALIAS("spi:icm20608");
MODULE_ALIAS("acpi*:INVN6000:*");
