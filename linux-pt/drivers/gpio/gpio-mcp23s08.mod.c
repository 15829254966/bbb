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
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x7bc5d8ee, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd87202be, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x4e94d025, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x5f428112, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb1bbca04, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x7522f3ba, __VMLINUX_SYMBOL_STR(irq_modify_status) },
	{ 0x5cfc2d04, __VMLINUX_SYMBOL_STR(irq_set_chip) },
	{ 0x20a789ac, __VMLINUX_SYMBOL_STR(irq_set_chip_data) },
	{ 0x1be2dfd4, __VMLINUX_SYMBOL_STR(irq_to_desc) },
	{ 0xf3552500, __VMLINUX_SYMBOL_STR(irq_create_mapping) },
	{ 0x1a72106a, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x8b5fc918, __VMLINUX_SYMBOL_STR(__irq_domain_add) },
	{ 0xb492f055, __VMLINUX_SYMBOL_STR(irq_domain_simple_ops) },
	{ 0xce53c81, __VMLINUX_SYMBOL_STR(gpiochip_add) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x549525ef, __VMLINUX_SYMBOL_STR(handle_nested_irq) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf3d5ec2a, __VMLINUX_SYMBOL_STR(gpiochip_lock_as_irq) },
	{ 0x3612c70b, __VMLINUX_SYMBOL_STR(gpiochip_unlock_as_irq) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x389207a0, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf254c614, __VMLINUX_SYMBOL_STR(gpiochip_is_requested) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xef269994, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x820cbcd, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x33f4ad6a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x55a55df7, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xa70d54cb, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0xec1a4bef, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0x52603f4a, __VMLINUX_SYMBOL_STR(irq_domain_remove) },
	{ 0x2c7db649, __VMLINUX_SYMBOL_STR(irq_dispose_mapping) },
	{ 0xc7357944, __VMLINUX_SYMBOL_STR(irq_find_mapping) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:mcp23s08");
MODULE_ALIAS("spi:mcp23s17");
MODULE_ALIAS("i2c:mcp23008");
MODULE_ALIAS("i2c:mcp23017");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17*");
