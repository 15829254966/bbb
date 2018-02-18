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
	{ 0x6e33f68e, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0x3442bb40, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0x303db81d, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x87799113, __VMLINUX_SYMBOL_STR(genphy_suspend) },
	{ 0xae7ec533, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0xefe8b813, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0xfe5b749a, __VMLINUX_SYMBOL_STR(phy_write_mmd_indirect) },
	{ 0x4b13ca23, __VMLINUX_SYMBOL_STR(phy_read_mmd_indirect) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1bbca04, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x57f0cb27, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe5608f9c, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:0010000000000000101000100011????");
