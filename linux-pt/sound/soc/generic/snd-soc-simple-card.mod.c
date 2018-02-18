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
	{ 0x90bd75cb, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xefe4670a, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_card_name) },
	{ 0x43f20738, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_simple_widgets) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x926a032f, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc2fd2b12, __VMLINUX_SYMBOL_STR(snd_soc_of_get_dai_name) },
	{ 0x9f4cd1df, __VMLINUX_SYMBOL_STR(of_device_is_available) },
	{ 0xb1bbca04, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xdc93f30a, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x210dc07c, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd00d514b, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x2be40654, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x1b6324d7, __VMLINUX_SYMBOL_STR(of_clk_get) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xedbb945c, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xbcca6923, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0x59f76f5, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0x428034b9, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0x33e53e0e, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_daifmt) },
	{ 0x8fcc025c, __VMLINUX_SYMBOL_STR(of_parse_phandle_with_args) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9f757300, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x25ded8a, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xeda13d45, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1c268410, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_tdm_slot) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Csimple-audio-card*");
