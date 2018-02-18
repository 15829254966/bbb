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
	{ 0x97519106, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x7fc52a7f, __VMLINUX_SYMBOL_STR(iio_push_event) },
	{ 0x820cbcd, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xb51ba9c1, __VMLINUX_SYMBOL_STR(iio_get_time_ns) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0x66b195f3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x71cdd88d, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x1a72106a, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdbfa79f3, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xf9b49a42, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x26f6b499, __VMLINUX_SYMBOL_STR(iio_str_to_fixpoint) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x868acba5, __VMLINUX_SYMBOL_STR(get_options) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x752d5f5b, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x492bc167, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x75b03945, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x33f4ad6a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("i2c:tsl2571");
MODULE_ALIAS("i2c:tsl2671");
MODULE_ALIAS("i2c:tmd2671");
MODULE_ALIAS("i2c:tsl2771");
MODULE_ALIAS("i2c:tmd2771");
MODULE_ALIAS("i2c:tsl2572");
MODULE_ALIAS("i2c:tsl2672");
MODULE_ALIAS("i2c:tmd2672");
MODULE_ALIAS("i2c:tsl2772");
MODULE_ALIAS("i2c:tmd2772");
