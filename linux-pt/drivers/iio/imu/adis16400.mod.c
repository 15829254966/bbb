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
	{ 0x170fe226, __VMLINUX_SYMBOL_STR(adis_update_scan_mode) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xac1bbfab, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa538e062, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0x7bc5d8ee, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x71cdd88d, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x3672ca8c, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xdda6bf89, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0xbf23fc59, __VMLINUX_SYMBOL_STR(adis_initial_startup) },
	{ 0x492bc167, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf0457165, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdbfa79f3, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xfaeb9f8, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd4af85f0, __VMLINUX_SYMBOL_STR(adis_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xeaa27d8, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x51de9328, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x9a6be253, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x97a72e42, __VMLINUX_SYMBOL_STR(adis_write_reg) },
	{ 0x6093323d, __VMLINUX_SYMBOL_STR(adis_cleanup_buffer_and_trigger) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbe823aec, __VMLINUX_SYMBOL_STR(adis_debugfs_reg_access) },
	{ 0xe730230a, __VMLINUX_SYMBOL_STR(adis_setup_buffer_and_trigger) },
	{ 0x5810d54c, __VMLINUX_SYMBOL_STR(adis_read_reg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd87202be, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x21603de, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbcd88717, __VMLINUX_SYMBOL_STR(adis_single_conversion) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x13599bbb, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0xae7448e0, __VMLINUX_SYMBOL_STR(simple_attr_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=adis_lib,industrialio";

MODULE_ALIAS("spi:adis16300");
MODULE_ALIAS("spi:adis16305");
MODULE_ALIAS("spi:adis16334");
MODULE_ALIAS("spi:adis16350");
MODULE_ALIAS("spi:adis16354");
MODULE_ALIAS("spi:adis16355");
MODULE_ALIAS("spi:adis16360");
MODULE_ALIAS("spi:adis16362");
MODULE_ALIAS("spi:adis16364");
MODULE_ALIAS("spi:adis16365");
MODULE_ALIAS("spi:adis16367");
MODULE_ALIAS("spi:adis16400");
MODULE_ALIAS("spi:adis16405");
MODULE_ALIAS("spi:adis16445");
MODULE_ALIAS("spi:adis16448");
