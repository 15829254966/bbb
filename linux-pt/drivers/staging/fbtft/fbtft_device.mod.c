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
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x63ee3422, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xce72a984, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x72aedf9c, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x30fc91ec, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr_latched) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x70610941, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe78a352, __VMLINUX_SYMBOL_STR(platform_device_register) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc907fa9a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xf03240ee, __VMLINUX_SYMBOL_STR(spi_new_device) },
	{ 0x898d455e, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xddb4a2a0, __VMLINUX_SYMBOL_STR(bus_find_device_by_name) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x71c12d92, __VMLINUX_SYMBOL_STR(spi_busnum_to_master) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xde70a627, __VMLINUX_SYMBOL_STR(platform_bus_type) },
	{ 0x59f2aa2d, __VMLINUX_SYMBOL_STR(bus_for_each_dev) },
	{ 0x6d10a964, __VMLINUX_SYMBOL_STR(spi_bus_type) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb1c120d8, __VMLINUX_SYMBOL_STR(fbtft_dbg_hex) },
	{ 0xe5a0ff85, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x9af2fd11, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";

