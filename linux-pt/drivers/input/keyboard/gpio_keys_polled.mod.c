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
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf88c07d6, __VMLINUX_SYMBOL_STR(fwnode_handle_put) },
	{ 0xe74a742f, __VMLINUX_SYMBOL_STR(fwnode_property_present) },
	{ 0xf37a8e3e, __VMLINUX_SYMBOL_STR(fwnode_property_read_string) },
	{ 0xf68f9de, __VMLINUX_SYMBOL_STR(devm_get_gpiod_from_child) },
	{ 0x858737ec, __VMLINUX_SYMBOL_STR(fwnode_property_read_u32_array) },
	{ 0xb8717005, __VMLINUX_SYMBOL_STR(device_get_next_child_node) },
	{ 0x79a696d9, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0x21704f4c, __VMLINUX_SYMBOL_STR(device_property_present) },
	{ 0x8b19119a, __VMLINUX_SYMBOL_STR(device_get_child_node_count) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8368b25a, __VMLINUX_SYMBOL_STR(input_register_polled_device) },
	{ 0x9ed0fa4b, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x9af2fd11, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xa71e78d, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xae9392a7, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0xed603710, __VMLINUX_SYMBOL_STR(gpiod_cansleep) },
	{ 0xb5595382, __VMLINUX_SYMBOL_STR(devm_input_allocate_polled_device) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x92943b83, __VMLINUX_SYMBOL_STR(gpiod_get_value) },
	{ 0x836cb4b3, __VMLINUX_SYMBOL_STR(gpiod_get_value_cansleep) },
	{ 0xeec7aaf1, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=input-polldev";

MODULE_ALIAS("of:N*T*Cgpio-keys-polled*");
