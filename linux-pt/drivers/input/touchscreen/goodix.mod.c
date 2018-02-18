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
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xf2c52689, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x3642a302, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb9a97b16, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x8e8faca0, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0xf9375a01, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0xa8b4c151, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xcf720183, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xe0141c33, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x9ed0fa4b, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xdc8e1bdd, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0x21704f4c, __VMLINUX_SYMBOL_STR(device_property_present) },
	{ 0x9563de5e, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x861b420e, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xeec7aaf1, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x49c59a59, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x224d240a, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0xcfd4769a, __VMLINUX_SYMBOL_STR(devm_free_irq) },
	{ 0x76ac3c06, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x442fcb5, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1a72106a, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cgoodix,gt911*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110*");
MODULE_ALIAS("of:N*T*Cgoodix,gt912*");
MODULE_ALIAS("of:N*T*Cgoodix,gt927*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271*");
MODULE_ALIAS("of:N*T*Cgoodix,gt928*");
MODULE_ALIAS("of:N*T*Cgoodix,gt967*");
MODULE_ALIAS("i2c:GDIX1001:00");
