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
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x59a47dd, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x5d30e311, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x36dff7eb, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7c94abd0, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x134bb9b3, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfd10495b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x17fe6114, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0x4388a3d8, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x15a23252, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xbe7be850, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04CEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0094d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0099d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp009Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00B6d*dc*dsc*dp*ic*isc*ip*in*");
