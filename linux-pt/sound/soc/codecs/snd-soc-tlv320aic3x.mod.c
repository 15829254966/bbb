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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xff76df45, __VMLINUX_SYMBOL_STR(snd_soc_test_bits) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x54b8f605, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x2ff08ba7, __VMLINUX_SYMBOL_STR(snd_soc_dapm_mixer_update_power) },
	{ 0x9ac21425, __VMLINUX_SYMBOL_STR(regmap_register_patch) },
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xf87fad77, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0x9af2fd11, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xa44d15cd, __VMLINUX_SYMBOL_STR(regulator_register_notifier) },
	{ 0xfbf473b, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4d83a240, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0xbbc097ff, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xce46a172, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xc70c0c4d, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0x5adbe8ae, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x5f4c8482, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x36cc7dc5, __VMLINUX_SYMBOL_STR(snd_soc_dapm_kcontrol_dapm) },
	{ 0x769a44f6, __VMLINUX_SYMBOL_STR(regulator_unregister_notifier) },
	{ 0x198a5b2, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2f9f7153, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x759a6763, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x1ac61519, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x2f199c7, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x4ad1cbf8, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x3a85f811, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x118be472, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc3eca5e7, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x2be40654, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x873f7fec, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x8b574763, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x2cc2f16d, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0xe5a0ff85, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x97a8a743, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5581989e, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x2d8f49ac, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0x7193d9ef, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x8cedde24, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("of:N*T*Cti,tlv320aic3x*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic33*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3007*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3106*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3104*");
MODULE_ALIAS("i2c:tlv320aic3x");
MODULE_ALIAS("i2c:tlv320aic33");
MODULE_ALIAS("i2c:tlv320aic3007");
MODULE_ALIAS("i2c:tlv320aic3106");
MODULE_ALIAS("i2c:tlv320aic3104");
