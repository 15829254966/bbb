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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1be2dfd4, __VMLINUX_SYMBOL_STR(irq_to_desc) },
	{ 0xfdbdd8bc, __VMLINUX_SYMBOL_STR(__irq_set_handler) },
	{ 0x20a789ac, __VMLINUX_SYMBOL_STR(irq_set_chip_data) },
	{ 0xc7357944, __VMLINUX_SYMBOL_STR(irq_find_mapping) },
	{ 0xec0e7ada, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x245c6f79, __VMLINUX_SYMBOL_STR(irq_domain_xlate_onecell) },
	{ 0x8b5fc918, __VMLINUX_SYMBOL_STR(__irq_domain_add) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf94d68de, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x5f428112, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x210dc07c, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc346c4c8, __VMLINUX_SYMBOL_STR(irq_set_chip_and_handler_name) },
	{ 0x859bec4e, __VMLINUX_SYMBOL_STR(platform_get_irq_byname) },
	{ 0x3dcb88a0, __VMLINUX_SYMBOL_STR(irq_set_handler_data) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xf2e9fa5e, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0x7ceaf0d5, __VMLINUX_SYMBOL_STR(generic_handle_irq) },
	{ 0x2c7db649, __VMLINUX_SYMBOL_STR(irq_dispose_mapping) },
	{ 0x52603f4a, __VMLINUX_SYMBOL_STR(irq_domain_remove) },
	{ 0x67fbd38, __VMLINUX_SYMBOL_STR(of_find_device_by_node) },
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xeda13d45, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2a2a8e7, __VMLINUX_SYMBOL_STR(handle_level_irq) },
	{ 0x97f26326, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,am3352-pruss-intc*");
MODULE_ALIAS("of:N*T*Cti,am4372-pruss-intc*");
MODULE_ALIAS("of:N*T*Cti,am5728-pruss-intc*");
MODULE_ALIAS("of:N*T*Cti,k2g-pruss-intc*");
