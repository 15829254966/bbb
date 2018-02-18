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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xf1ece412, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xeb711ae7, __VMLINUX_SYMBOL_STR(snd_soc_params_to_bclk) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x8e56a21f, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xea124bd1, __VMLINUX_SYMBOL_STR(gcd) },
	{ 0x96960c2b, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_ratnums) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x503bd137, __VMLINUX_SYMBOL_STR(snd_interval_ranges) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xa44d15cd, __VMLINUX_SYMBOL_STR(regulator_register_notifier) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbbc097ff, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xce46a172, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xc70c0c4d, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0x5adbe8ae, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x5f4c8482, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1ab81dac, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x4ad1cbf8, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x418299b0, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0x3a85f811, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x118be472, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xacaff8e6, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x7dbee2e9, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xbb54899c, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x873f7fec, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xc8269f94, __VMLINUX_SYMBOL_STR(snd_soc_params_to_frame_size) },
	{ 0x8b574763, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x2cc2f16d, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x97a8a743, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4bd8024f, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xf6f48abf, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x5581989e, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x2d8f49ac, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

