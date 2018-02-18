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
	{ 0x5bd2d286, __VMLINUX_SYMBOL_STR(passthrough_attrib_attrs) },
	{ 0xb45e7ee9, __VMLINUX_SYMBOL_STR(target_backend_unregister) },
	{ 0x5808a96d, __VMLINUX_SYMBOL_STR(transport_backend_register) },
	{ 0x72ea7b2d, __VMLINUX_SYMBOL_STR(scsi_device_type) },
	{ 0x84a11bfe, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0xafcb906c, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x7dbada9d, __VMLINUX_SYMBOL_STR(transport_set_vpd_ident_type) },
	{ 0x85aa880c, __VMLINUX_SYMBOL_STR(transport_set_vpd_assoc) },
	{ 0xf01621c7, __VMLINUX_SYMBOL_STR(transport_set_vpd_proto_id) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x2de3b18, __VMLINUX_SYMBOL_STR(transport_set_vpd_ident) },
	{ 0xb71894d8, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x884d04c1, __VMLINUX_SYMBOL_STR(passthrough_parse_cdb) },
	{ 0x686258cd, __VMLINUX_SYMBOL_STR(scsi_host_lookup) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x79f8a4f5, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xadcc7dc9, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x15a23252, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x5ceef911, __VMLINUX_SYMBOL_STR(transport_kunmap_data_sg) },
	{ 0x4b6abc6c, __VMLINUX_SYMBOL_STR(transport_kmap_data_sg) },
	{ 0x134bb9b3, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xd130060b, __VMLINUX_SYMBOL_STR(target_lun_is_rdonly) },
	{ 0x932ece1a, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0xdff8b485, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0xbf223c10, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x665ee60e, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0xcabcb30f, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xd94a46d8, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xe5368b1c, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0xb4ccb20c, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xdd08392f, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x3c68e2b3, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

