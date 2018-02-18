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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb28256ac, __VMLINUX_SYMBOL_STR(pcm512x_regmap) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2f27496b, __VMLINUX_SYMBOL_STR(pcm512x_pm_ops) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc3eca5e7, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xc851cee1, __VMLINUX_SYMBOL_STR(pcm512x_probe) },
	{ 0xdc107e3c, __VMLINUX_SYMBOL_STR(pcm512x_remove) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-pcm512x";

MODULE_ALIAS("of:N*T*Cti,pcm5121*");
MODULE_ALIAS("of:N*T*Cti,pcm5122*");
MODULE_ALIAS("of:N*T*Cti,pcm5141*");
MODULE_ALIAS("of:N*T*Cti,pcm5142*");
MODULE_ALIAS("i2c:pcm5121");
MODULE_ALIAS("i2c:pcm5122");
MODULE_ALIAS("i2c:pcm5141");
MODULE_ALIAS("i2c:pcm5142");
