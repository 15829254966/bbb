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
	{ 0x97519106, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x71cdd88d, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xba679e6a, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x2ab0d0e3, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x1a72106a, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xe56f59c7, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x70996c66, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0xd51bdc5b, __VMLINUX_SYMBOL_STR(devm_regulator_get_optional) },
	{ 0x2d8292b9, __VMLINUX_SYMBOL_STR(of_device_get_match_data) },
	{ 0x5f428112, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x83040859, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x98778457, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xf9caa84, __VMLINUX_SYMBOL_STR(iio_map_array_register) },
	{ 0xdbfa79f3, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x75b03945, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0xf9b49a42, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0x21603de, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0xa538e062, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x7fc52a7f, __VMLINUX_SYMBOL_STR(iio_push_event) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0xb51ba9c1, __VMLINUX_SYMBOL_STR(iio_get_time_ns) },
	{ 0xc7dc3e19, __VMLINUX_SYMBOL_STR(iio_map_array_unregister) },
	{ 0xbdbc1d53, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xae277d72, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x492bc167, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("i2c:max1361");
MODULE_ALIAS("i2c:max1362");
MODULE_ALIAS("i2c:max1363");
MODULE_ALIAS("i2c:max1364");
MODULE_ALIAS("i2c:max1036");
MODULE_ALIAS("i2c:max1037");
MODULE_ALIAS("i2c:max1038");
MODULE_ALIAS("i2c:max1039");
MODULE_ALIAS("i2c:max1136");
MODULE_ALIAS("i2c:max1137");
MODULE_ALIAS("i2c:max1138");
MODULE_ALIAS("i2c:max1139");
MODULE_ALIAS("i2c:max1236");
MODULE_ALIAS("i2c:max1237");
MODULE_ALIAS("i2c:max1238");
MODULE_ALIAS("i2c:max1239");
MODULE_ALIAS("i2c:max11600");
MODULE_ALIAS("i2c:max11601");
MODULE_ALIAS("i2c:max11602");
MODULE_ALIAS("i2c:max11603");
MODULE_ALIAS("i2c:max11604");
MODULE_ALIAS("i2c:max11605");
MODULE_ALIAS("i2c:max11606");
MODULE_ALIAS("i2c:max11607");
MODULE_ALIAS("i2c:max11608");
MODULE_ALIAS("i2c:max11609");
MODULE_ALIAS("i2c:max11610");
MODULE_ALIAS("i2c:max11611");
MODULE_ALIAS("i2c:max11612");
MODULE_ALIAS("i2c:max11613");
MODULE_ALIAS("i2c:max11614");
MODULE_ALIAS("i2c:max11615");
MODULE_ALIAS("i2c:max11616");
MODULE_ALIAS("i2c:max11617");
MODULE_ALIAS("i2c:max11644");
MODULE_ALIAS("i2c:max11645");
MODULE_ALIAS("i2c:max11646");
MODULE_ALIAS("i2c:max11647");
