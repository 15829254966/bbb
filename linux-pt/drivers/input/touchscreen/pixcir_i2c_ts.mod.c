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
	{ 0xfd01a916, __VMLINUX_SYMBOL_STR(touchscreen_parse_properties) },
	{ 0xae9392a7, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x2d8292b9, __VMLINUX_SYMBOL_STR(of_device_get_match_data) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xcf720183, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x1a72106a, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xa8b4c151, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0xb11ddfe7, __VMLINUX_SYMBOL_STR(devm_gpiod_get) },
	{ 0xe0141c33, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x9ed0fa4b, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xdc8e1bdd, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x41b3f0fc, __VMLINUX_SYMBOL_STR(touchscreen_set_mt_pos) },
	{ 0xf757df56, __VMLINUX_SYMBOL_STR(input_mt_assign_slots) },
	{ 0xba679e6a, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x836cb4b3, __VMLINUX_SYMBOL_STR(gpiod_get_value_cansleep) },
	{ 0x9563de5e, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x4ac419bb, __VMLINUX_SYMBOL_STR(input_mt_get_slot_by_key) },
	{ 0x861b420e, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xeec7aaf1, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x2ab0d0e3, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf9375a01, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x33f4ad6a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x820cbcd, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cpixcir,pixcir_ts*");
MODULE_ALIAS("of:N*T*Cpixcir,pixcir_tangoc*");
MODULE_ALIAS("i2c:pixcir_ts");
MODULE_ALIAS("i2c:pixcir_tangoc");
