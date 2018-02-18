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
	{ 0xc132a650, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xcd601667, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0xb0aaff4f, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0xa7547b33, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdd226fa9, __VMLINUX_SYMBOL_STR(__raw_readsw) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x297e62fe, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xf7163ec9, __VMLINUX_SYMBOL_STR(__raw_readsb) },
	{ 0xeb03b389, __VMLINUX_SYMBOL_STR(__raw_readsl) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfc184764, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x3d856ee7, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x48a71398, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xdad97f94, __VMLINUX_SYMBOL_STR(__raw_writesw) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x227cef79, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x6edc2fca, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xad22dec0, __VMLINUX_SYMBOL_STR(sdio_writel) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdcaaee6d, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x5210a6d6, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xe7517f73, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x23fd6c4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x79c5a9f0, __VMLINUX_SYMBOL_STR(ioremap) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xa85b84a9, __VMLINUX_SYMBOL_STR(sdio_readl) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfb5b99b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x58f930da, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x6b3c266d, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x1c383829, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x4e09c8cf, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x145717dc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xc907fa9a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x73487f53, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd2508b7d, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xf0ed2ef4, __VMLINUX_SYMBOL_STR(__raw_writesb) },
	{ 0x6ba367d0, __VMLINUX_SYMBOL_STR(sdio_writew) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0xecf8a3b4, __VMLINUX_SYMBOL_STR(__raw_writesl) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4c3993a2, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xb12fa031, __VMLINUX_SYMBOL_STR(pci_prepare_to_sleep) },
	{ 0x94afbe82, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x880eaba0, __VMLINUX_SYMBOL_STR(pci_back_from_sleep) },
	{ 0xebfdb35, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x51f7c048, __VMLINUX_SYMBOL_STR(sdio_readw) },
	{ 0x5f2334ec, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x75cc8f, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x28352af3, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xcd3efef, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xb242a72a, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x3e72b5a2, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x57e4ca3d, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000014E4d00004301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014A4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004328sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004329sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004351sv*sd*bc*sc*i*");
