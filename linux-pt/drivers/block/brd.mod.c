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
	{ 0x3a9b6fb9, __VMLINUX_SYMBOL_STR(blk_unregister_region) },
	{ 0xa193ad04, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb9704a6f, __VMLINUX_SYMBOL_STR(blk_register_region) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xcabcb30f, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xe71e87fd, __VMLINUX_SYMBOL_STR(page_endio) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x47fd624e, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xb1b4b3c6, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0x8458f70b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x3dd8aa5e, __VMLINUX_SYMBOL_STR(radix_tree_preload_end) },
	{ 0x6e6514ed, __VMLINUX_SYMBOL_STR(radix_tree_insert) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9754ec10, __VMLINUX_SYMBOL_STR(radix_tree_preload) },
	{ 0x442a091f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xae85a27e, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0x7780f5a2, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xdf46a547, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x73ce17c9, __VMLINUX_SYMBOL_STR(get_disk) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc4c08d84, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd90aec36, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x73a005d9, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xdfb67fcd, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0xc086dd78, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x782973e1, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xf9adac11, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0xfdc4a389, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x51a55b8f, __VMLINUX_SYMBOL_STR(kill_bdev) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x568e5a7b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x1683a50b, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0x5fd268cb, __VMLINUX_SYMBOL_STR(radix_tree_gang_lookup) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

