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
	{ 0xb0aaff4f, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3d6c822a, __VMLINUX_SYMBOL_STR(of_property_read_string_helper) },
	{ 0x297e62fe, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3cec8268, __VMLINUX_SYMBOL_STR(of_property_read_u32_index) },
	{ 0x5210a5bf, __VMLINUX_SYMBOL_STR(hsi_board_list) },
	{ 0xf92587c, __VMLINUX_SYMBOL_STR(of_modalias_node) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x226a674d, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_unregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x71008581, __VMLINUX_SYMBOL_STR(atomic_notifier_call_chain) },
	{ 0x898d455e, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x5210a6d6, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1bbca04, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xdc93f30a, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9bf5ef24, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x58f930da, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x5f428112, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xcdd158d, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc907fa9a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x1bb5fc26, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_register) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x24561eb3, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0xf14f8e95, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x182112f8, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xebfdb35, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x9cd60539, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x28352af3, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x97f26326, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

