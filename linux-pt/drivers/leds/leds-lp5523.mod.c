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
	{ 0xf9867962, __VMLINUX_SYMBOL_STR(lp55xx_unregister_sysfs) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x19b4d213, __VMLINUX_SYMBOL_STR(lp55xx_deinit_device) },
	{ 0xd17b9b2c, __VMLINUX_SYMBOL_STR(lp55xx_unregister_leds) },
	{ 0xebfb0da0, __VMLINUX_SYMBOL_STR(lp55xx_register_sysfs) },
	{ 0x1650fcf0, __VMLINUX_SYMBOL_STR(lp55xx_register_leds) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8269e3d3, __VMLINUX_SYMBOL_STR(lp55xx_of_populate_pdata) },
	{ 0x6688ef74, __VMLINUX_SYMBOL_STR(lp55xx_init_device) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x27670f96, __VMLINUX_SYMBOL_STR(lp55xx_read) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x72def001, __VMLINUX_SYMBOL_STR(lp55xx_update_bits) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9ea3df80, __VMLINUX_SYMBOL_STR(lp55xx_write) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=leds-lp55xx-common";

MODULE_ALIAS("of:N*T*Cnational,lp5523*");
MODULE_ALIAS("of:N*T*Cti,lp55231*");
MODULE_ALIAS("i2c:lp5523");
MODULE_ALIAS("i2c:lp55231");
