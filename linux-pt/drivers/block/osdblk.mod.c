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
	{ 0x916eb858, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x9f981276, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdf46a547, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x24cb93c7, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x832524b5, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0x6dccf424, __VMLINUX_SYMBOL_STR(blk_queue_start_tag) },
	{ 0xb65a9cdd, __VMLINUX_SYMBOL_STR(blk_queue_stack_limits) },
	{ 0xe074e59a, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0x1cee4fe6, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0xd90aec36, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x189452b4, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0x603187c6, __VMLINUX_SYMBOL_STR(osd_execute_request) },
	{ 0xb81cd317, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0xf42ae607, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xc17edb1, __VMLINUX_SYMBOL_STR(osd_sec_init_nosec_doall_caps) },
	{ 0xf2b9ecce, __VMLINUX_SYMBOL_STR(osduld_path_lookup) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x97f26326, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xcf544607, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0x536622b1, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0x7a171265, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0x9e6e97b, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0xd2dcc4a6, __VMLINUX_SYMBOL_STR(blk_requeue_request) },
	{ 0x27c87ea5, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0x3c16a00, __VMLINUX_SYMBOL_STR(osd_req_flush_object) },
	{ 0xc35e6506, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0xb4ccb20c, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xc0ea648a, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0x9ca9eb75, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x36134762, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0x6e36d4fc, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0xae1bfe6e, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa193ad04, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xf7eaafa7, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x7780f5a2, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xc4c08d84, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,osd";

