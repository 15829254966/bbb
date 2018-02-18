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
	{ 0xc47cee25, __VMLINUX_SYMBOL_STR(driver_remove_file) },
	{ 0x916eb858, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x4888ed32, __VMLINUX_SYMBOL_STR(driver_create_file) },
	{ 0x82bc90ba, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x39dae10a, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x5e106075, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x21518ec4, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0xf7c7a39f, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x8458f70b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x442a091f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xafcb906c, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x741b8b22, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x23fd6c4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x76ac3c06, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xbf9e5182, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xada30f58, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0xbf223c10, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x9726e3cc, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x932ece1a, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0xdff8b485, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe8749236, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0xd90aec36, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xdd08392f, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0xdc0d6265, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x134bb9b3, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x6a1d34f7, __VMLINUX_SYMBOL_STR(__scsi_print_sense) },
	{ 0x2b0ba2b0, __VMLINUX_SYMBOL_STR(scsi_sense_desc_find) },
	{ 0x796fc5ce, __VMLINUX_SYMBOL_STR(scsi_get_sense_info_fld) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x2ffb6ab0, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0x79f8a4f5, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x1c383829, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x9fca2bf0, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7780f5a2, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xbc366830, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x568e5a7b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

