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
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x15934e80, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x2265621a, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x82bc90ba, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x9f981276, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x21518ec4, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0xac87a4f6, __VMLINUX_SYMBOL_STR(scsi_cmd_ioctl) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xf7c7a39f, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0x23fd6c4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x741b8b22, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0xafcb906c, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x76ac3c06, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xbf9e5182, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x9726e3cc, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0xbf223c10, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0x932ece1a, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0xdff8b485, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x6a1d34f7, __VMLINUX_SYMBOL_STR(__scsi_print_sense) },
	{ 0x2b0ba2b0, __VMLINUX_SYMBOL_STR(scsi_sense_desc_find) },
	{ 0x796fc5ce, __VMLINUX_SYMBOL_STR(scsi_get_sense_info_fld) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x47fd624e, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xf845584d, __VMLINUX_SYMBOL_STR(get_user_pages_unlocked) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x8458f70b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x134bb9b3, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x442a091f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x26e2714c, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xdd08392f, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0xdc0d6265, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x79f8a4f5, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x2ffb6ab0, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0x540a12c, __VMLINUX_SYMBOL_STR(blk_put_queue) },
	{ 0xe8749236, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xd8f457d4, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0xb5195665, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x407cba6, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xe9216df7, __VMLINUX_SYMBOL_STR(blk_get_queue) },
	{ 0xd90aec36, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9fca2bf0, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x55694cdd, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x24b3043e, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6bb68687, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0xebfdb35, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x94820c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xe9af4232, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x7780f5a2, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x568e5a7b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

