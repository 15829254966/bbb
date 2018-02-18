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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbba89470, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x7bc5d8ee, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x939c3d9d, __VMLINUX_SYMBOL_STR(ad_sigma_delta_single_conversion) },
	{ 0x9dd12db3, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x71cdd88d, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x503e3f2b, __VMLINUX_SYMBOL_STR(ad_sd_setup_buffer_and_trigger) },
	{ 0xa8b4c151, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0xd87202be, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x70996c66, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0x83040859, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x98778457, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xf8aad47f, __VMLINUX_SYMBOL_STR(ad_sd_init) },
	{ 0xdbfa79f3, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xbdbc1d53, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x2bcab2b6, __VMLINUX_SYMBOL_STR(ad_sd_cleanup_buffer_and_trigger) },
	{ 0x492bc167, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ad_sigma_delta,industrialio";

MODULE_ALIAS("spi:ad7170");
MODULE_ALIAS("spi:ad7171");
MODULE_ALIAS("spi:ad7780");
MODULE_ALIAS("spi:ad7781");
