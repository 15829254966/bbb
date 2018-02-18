#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbba89470, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x57f0cb27, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe5608f9c, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0x4b13ca23, __VMLINUX_SYMBOL_STR(phy_read_mmd_indirect) },
	{ 0xfe5b749a, __VMLINUX_SYMBOL_STR(phy_write_mmd_indirect) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

