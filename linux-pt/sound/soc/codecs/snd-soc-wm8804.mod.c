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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xf1ece412, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xff76df45, __VMLINUX_SYMBOL_STR(snd_soc_test_bits) },
	{ 0x8e56a21f, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x54b8f605, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x15e1de7b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x9c140c32, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x5ffc0b77, __VMLINUX_SYMBOL_STR(regmap_update_bits_check) },
	{ 0xc70c0c4d, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0x5adbe8ae, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x5f4c8482, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x36cc7dc5, __VMLINUX_SYMBOL_STR(snd_soc_dapm_kcontrol_dapm) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2f9f7153, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x759a6763, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x118be472, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xacaff8e6, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf7abd3d8, __VMLINUX_SYMBOL_STR(devm_regulator_register_notifier) },
	{ 0x7dbee2e9, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x873f7fec, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xa8b4c151, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x8b574763, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xf9375a01, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x97a8a743, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4bd8024f, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xf6f48abf, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x5581989e, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x7193d9ef, __VMLINUX_SYMBOL_STR(snd_soc_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

