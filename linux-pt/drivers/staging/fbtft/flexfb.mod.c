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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbba89470, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x1e1d4773, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x63ee3422, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x72aedf9c, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7bc5d8ee, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x4c6b6a1d, __VMLINUX_SYMBOL_STR(fbtft_unregister_framebuffer) },
	{ 0x6f686f4e, __VMLINUX_SYMBOL_STR(fbtft_write_spi_emulate_9) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x538ee8, __VMLINUX_SYMBOL_STR(fbtft_write_gpio8_wr) },
	{ 0xa0e5a296, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus8) },
	{ 0x474fddbc, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_release) },
	{ 0x322df63a, __VMLINUX_SYMBOL_STR(fbtft_register_framebuffer) },
	{ 0x1725edf3, __VMLINUX_SYMBOL_STR(fbtft_register_backlight) },
	{ 0xa9a602c8, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus16) },
	{ 0x7545866a, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr) },
	{ 0x30fc91ec, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr_latched) },
	{ 0xdeaacb38, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus16) },
	{ 0xa9089404, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus8) },
	{ 0x97dda3c6, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus9) },
	{ 0x6eb62029, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus9) },
	{ 0x9da83a5e, __VMLINUX_SYMBOL_STR(fbtft_write_spi) },
	{ 0x1b312917, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus8) },
	{ 0x88e2722d, __VMLINUX_SYMBOL_STR(fbtft_init_display) },
	{ 0x4b7634d1, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_alloc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";

