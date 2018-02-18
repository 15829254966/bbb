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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x54b8f605, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbbc097ff, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x9c140c32, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xce46a172, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x5adbe8ae, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x5f4c8482, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2f9f7153, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x759a6763, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x690bd890, __VMLINUX_SYMBOL_STR(regulator_bulk_get) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x8ef91dd9, __VMLINUX_SYMBOL_STR(rdev_get_drvdata) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x4ad1cbf8, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x118be472, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc3eca5e7, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xdd9e8594, __VMLINUX_SYMBOL_STR(regulator_get_optional) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x70996c66, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0xbb54899c, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x873f7fec, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x465d20a8, __VMLINUX_SYMBOL_STR(regulator_register) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xac138c38, __VMLINUX_SYMBOL_STR(regulator_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd84b868f, __VMLINUX_SYMBOL_STR(regulator_unregister) },
	{ 0x7866dd5, __VMLINUX_SYMBOL_STR(regulator_bulk_free) },
	{ 0x97a8a743, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf6f48abf, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x5581989e, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x2d8f49ac, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0x7193d9ef, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x8cedde24, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("i2c:sgtl5000");
MODULE_ALIAS("of:N*T*Cfsl,sgtl5000*");
