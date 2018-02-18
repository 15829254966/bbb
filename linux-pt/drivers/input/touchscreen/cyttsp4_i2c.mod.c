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
	{ 0xf97e08fa, __VMLINUX_SYMBOL_STR(cyttsp4_pm_ops) },
	{ 0x8c46b5d2, __VMLINUX_SYMBOL_STR(cyttsp_i2c_read_block_data) },
	{ 0x2ecfd329, __VMLINUX_SYMBOL_STR(cyttsp_i2c_write_block_data) },
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x33b5ed81, __VMLINUX_SYMBOL_STR(cyttsp4_probe) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa297ede2, __VMLINUX_SYMBOL_STR(cyttsp4_remove) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cyttsp4_core,cyttsp_i2c_common";

MODULE_ALIAS("i2c:cyttsp4_i2c_adapter");
