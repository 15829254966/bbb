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
	{ 0xd816b598, __VMLINUX_SYMBOL_STR(of_translate_address) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdd226fa9, __VMLINUX_SYMBOL_STR(__raw_readsw) },
	{ 0x297e62fe, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xf7163ec9, __VMLINUX_SYMBOL_STR(__raw_readsb) },
	{ 0xeb03b389, __VMLINUX_SYMBOL_STR(__raw_readsl) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa8b98798, __VMLINUX_SYMBOL_STR(irq_create_of_mapping) },
	{ 0xf994a74c, __VMLINUX_SYMBOL_STR(pcie_set_readrq) },
	{ 0x3d856ee7, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x48a71398, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xdad97f94, __VMLINUX_SYMBOL_STR(__raw_writesw) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5ca073c, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x6edc2fca, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5210a6d6, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xe7517f73, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x79c5a9f0, __VMLINUX_SYMBOL_STR(ioremap) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfb5b99b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x70610941, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x58f930da, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x3388e337, __VMLINUX_SYMBOL_STR(of_get_address) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x145717dc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xc907fa9a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd00d514b, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x29df600f, __VMLINUX_SYMBOL_STR(of_irq_parse_raw) },
	{ 0x73487f53, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe4735fe8, __VMLINUX_SYMBOL_STR(of_irq_parse_one) },
	{ 0xd2508b7d, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xf0ed2ef4, __VMLINUX_SYMBOL_STR(__raw_writesb) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0xecf8a3b4, __VMLINUX_SYMBOL_STR(__raw_writesl) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4c3993a2, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x94afbe82, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xcc9e713f, __VMLINUX_SYMBOL_STR(of_platform_default_populate) },
	{ 0xebfdb35, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5f2334ec, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x28352af3, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xcd3efef, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000014E4d00000576sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004313sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004331sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004357sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004359sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DCsv*sd*bc*sc*i*");
