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
	{ 0x1bc3edc2, __VMLINUX_SYMBOL_STR(usb_stor_sense_invalidCDB) },
	{ 0x7c94abd0, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0xe8749236, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x4a844393, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x82701365, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xaaa5868e, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xcf2b8c18, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x17fe6114, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0xbe7be850, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x782973e1, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xfbef4371, __VMLINUX_SYMBOL_STR(blk_queue_update_dma_alignment) },
	{ 0x59a47dd, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x5d30e311, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x15a23252, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x36dff7eb, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xea887045, __VMLINUX_SYMBOL_STR(usb_stor_adjust_quirks) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xff515f51, __VMLINUX_SYMBOL_STR(usb_get_urb) },
	{ 0x9331b6d5, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x2939d29a, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1617c0a3, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0x915d5f0f, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0xcc9905c, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0xef66075c, __VMLINUX_SYMBOL_STR(usb_wait_anchor_empty_timeout) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x46f6669, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x2af17440, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x1596d587, __VMLINUX_SYMBOL_STR(scsi_report_bus_reset) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1e3b7eb0, __VMLINUX_SYMBOL_STR(usb_alloc_streams) },
	{ 0xfd10495b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xf740788e, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x662198b2, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x11e7ecd8, __VMLINUX_SYMBOL_STR(usb_free_streams) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p2312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p3312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p3320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pA003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pA013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pA0A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pAB20d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pAB21d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip62in*");
