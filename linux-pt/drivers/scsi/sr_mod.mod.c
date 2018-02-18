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
	{ 0x2ffb6ab0, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x407cba6, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd90aec36, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x53c1ae76, __VMLINUX_SYMBOL_STR(cdrom_number_of_slots) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xb71894d8, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0xf7c7a39f, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0xc3e72c13, __VMLINUX_SYMBOL_STR(unregister_cdrom) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x915d5f0f, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x838cd224, __VMLINUX_SYMBOL_STR(cdrom_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6cd952a9, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0x6bb68687, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb7cd399f, __VMLINUX_SYMBOL_STR(cdrom_release) },
	{ 0xa193ad04, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xaf3dd7dc, __VMLINUX_SYMBOL_STR(scsi_logging_level) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xe8749236, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfc0bad02, __VMLINUX_SYMBOL_STR(cdrom_get_media_event) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xfa22a6e2, __VMLINUX_SYMBOL_STR(cdrom_check_events) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x4bf895d6, __VMLINUX_SYMBOL_STR(cdrom_get_last_written) },
	{ 0x79f8a4f5, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x21518ec4, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0x7780f5a2, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x82bc90ba, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x741b8b22, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x5986da6f, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0x87d7052, __VMLINUX_SYMBOL_STR(scsi_init_io) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdf46a547, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xbd356d56, __VMLINUX_SYMBOL_STR(cdrom_ioctl) },
	{ 0x3f889bdc, __VMLINUX_SYMBOL_STR(blk_pm_runtime_init) },
	{ 0x65063a58, __VMLINUX_SYMBOL_STR(register_cdrom) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xafcb906c, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xd8f457d4, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x9a76342, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xb93036e, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";

