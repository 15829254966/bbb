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
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xf3c2f5ae, __VMLINUX_SYMBOL_STR(gpiochip_set_chained_irqchip) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1a72106a, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xa7ba8ebd, __VMLINUX_SYMBOL_STR(_gpiochip_irqchip_add) },
	{ 0x2a2a8e7, __VMLINUX_SYMBOL_STR(handle_level_irq) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xce53c81, __VMLINUX_SYMBOL_STR(gpiochip_add) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xba679e6a, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x75b03945, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0x2ab0d0e3, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x549525ef, __VMLINUX_SYMBOL_STR(handle_nested_irq) },
	{ 0xc7357944, __VMLINUX_SYMBOL_STR(irq_find_mapping) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf9b49a42, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xec1a4bef, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,pcf8574*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574a*");
MODULE_ALIAS("of:N*T*Cnxp,pca8574*");
MODULE_ALIAS("of:N*T*Cnxp,pca9670*");
MODULE_ALIAS("of:N*T*Cnxp,pca9672*");
MODULE_ALIAS("of:N*T*Cnxp,pca9674*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8575*");
MODULE_ALIAS("of:N*T*Cnxp,pca8575*");
MODULE_ALIAS("of:N*T*Cnxp,pca9671*");
MODULE_ALIAS("of:N*T*Cnxp,pca9673*");
MODULE_ALIAS("of:N*T*Cnxp,pca9675*");
MODULE_ALIAS("of:N*T*Cmaxim,max7328*");
MODULE_ALIAS("of:N*T*Cmaxim,max7329*");
MODULE_ALIAS("of:N*T*Cti,tca9554*");
MODULE_ALIAS("i2c:pcf8574");
MODULE_ALIAS("i2c:pcf8574a");
MODULE_ALIAS("i2c:pca8574");
MODULE_ALIAS("i2c:pca9670");
MODULE_ALIAS("i2c:pca9672");
MODULE_ALIAS("i2c:pca9674");
MODULE_ALIAS("i2c:pcf8575");
MODULE_ALIAS("i2c:pca8575");
MODULE_ALIAS("i2c:pca9671");
MODULE_ALIAS("i2c:pca9673");
MODULE_ALIAS("i2c:pca9675");
MODULE_ALIAS("i2c:max7328");
MODULE_ALIAS("i2c:max7329");
MODULE_ALIAS("i2c:tca9554");
