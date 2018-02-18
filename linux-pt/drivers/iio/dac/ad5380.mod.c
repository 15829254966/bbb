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
	{ 0x416d01d3, __VMLINUX_SYMBOL_STR(iio_enum_available_read) },
	{ 0xf6dc541f, __VMLINUX_SYMBOL_STR(iio_enum_write) },
	{ 0x471312eb, __VMLINUX_SYMBOL_STR(iio_enum_read) },
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x7bc5d8ee, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xc3eca5e7, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xd3fb6a08, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0xd87202be, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x71cdd88d, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x70996c66, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x83040859, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x98778457, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdbfa79f3, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x752d5f5b, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0x4bd8024f, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9c140c32, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf6f48abf, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xbdbc1d53, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x492bc167, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("i2c:ad5380-3");
MODULE_ALIAS("i2c:ad5380-5");
MODULE_ALIAS("i2c:ad5381-3");
MODULE_ALIAS("i2c:ad5381-5");
MODULE_ALIAS("i2c:ad5382-3");
MODULE_ALIAS("i2c:ad5382-5");
MODULE_ALIAS("i2c:ad5383-3");
MODULE_ALIAS("i2c:ad5383-5");
MODULE_ALIAS("i2c:ad5384-3");
MODULE_ALIAS("i2c:ad5384-5");
MODULE_ALIAS("i2c:ad5390-3");
MODULE_ALIAS("i2c:ad5390-5");
MODULE_ALIAS("i2c:ad5391-3");
MODULE_ALIAS("i2c:ad5391-5");
MODULE_ALIAS("i2c:ad5392-3");
MODULE_ALIAS("i2c:ad5392-5");
MODULE_ALIAS("spi:ad5380-3");
MODULE_ALIAS("spi:ad5380-5");
MODULE_ALIAS("spi:ad5381-3");
MODULE_ALIAS("spi:ad5381-5");
MODULE_ALIAS("spi:ad5382-3");
MODULE_ALIAS("spi:ad5382-5");
MODULE_ALIAS("spi:ad5383-3");
MODULE_ALIAS("spi:ad5383-5");
MODULE_ALIAS("spi:ad5384-3");
MODULE_ALIAS("spi:ad5384-5");
MODULE_ALIAS("spi:ad5390-3");
MODULE_ALIAS("spi:ad5390-5");
MODULE_ALIAS("spi:ad5391-3");
MODULE_ALIAS("spi:ad5391-5");
MODULE_ALIAS("spi:ad5392-3");
MODULE_ALIAS("spi:ad5392-5");
