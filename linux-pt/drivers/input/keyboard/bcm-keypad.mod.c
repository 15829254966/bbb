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
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xcf720183, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x1a72106a, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x90e3dcb5, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x43f81957, __VMLINUX_SYMBOL_STR(clk_round_rate) },
	{ 0xbb54899c, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xec0e7ada, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x4a31d399, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x1abe3fac, __VMLINUX_SYMBOL_STR(matrix_keypad_build_keymap) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x169aecd5, __VMLINUX_SYMBOL_STR(matrix_keypad_parse_of_params) },
	{ 0xb1bbca04, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xdc8e1bdd, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xeec7aaf1, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=matrix-keymap";

MODULE_ALIAS("of:N*T*Cbrcm,bcm-keypad*");
