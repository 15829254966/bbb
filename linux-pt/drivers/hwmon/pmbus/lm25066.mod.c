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
	{ 0xf5c1fe31, __VMLINUX_SYMBOL_STR(pmbus_do_remove) },
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xfd30bb59, __VMLINUX_SYMBOL_STR(pmbus_do_probe) },
	{ 0x820cbcd, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2f38c07e, __VMLINUX_SYMBOL_STR(pmbus_read_byte_data) },
	{ 0xf08c9e2, __VMLINUX_SYMBOL_STR(pmbus_read_word_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x95c659a5, __VMLINUX_SYMBOL_STR(pmbus_write_byte) },
	{ 0x295ae3a6, __VMLINUX_SYMBOL_STR(pmbus_clear_cache) },
	{ 0x722a3f14, __VMLINUX_SYMBOL_STR(pmbus_write_word_data) },
	{ 0xb5a815a0, __VMLINUX_SYMBOL_STR(pmbus_get_driver_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("i2c:lm25056");
MODULE_ALIAS("i2c:lm25063");
MODULE_ALIAS("i2c:lm25066");
MODULE_ALIAS("i2c:lm5064");
MODULE_ALIAS("i2c:lm5066");
