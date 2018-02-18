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
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd90aec36, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xc4c08d84, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x3a9b6fb9, __VMLINUX_SYMBOL_STR(blk_unregister_region) },
	{ 0xd066f431, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0x150cc3d4, __VMLINUX_SYMBOL_STR(blk_mq_unfreeze_queue) },
	{ 0xc0c9f04a, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x1a0c18c8, __VMLINUX_SYMBOL_STR(file_path) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x898e465d, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x2495f054, __VMLINUX_SYMBOL_STR(bio_advance) },
	{ 0xa4c4c1b2, __VMLINUX_SYMBOL_STR(blk_mq_freeze_queue) },
	{ 0x597edf59, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x24cb93c7, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0xa192813b, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3995c8b7, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x442a091f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x4ac6f695, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x17fcd0cb, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xb801dbe4, __VMLINUX_SYMBOL_STR(invalidate_bdev) },
	{ 0x2320640c, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0xb1b4b3c6, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xec50a7bf, __VMLINUX_SYMBOL_STR(vfs_iter_write) },
	{ 0x31ad8e5, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xa8b9fcae, __VMLINUX_SYMBOL_STR(iov_iter_bvec) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd99c5bdb, __VMLINUX_SYMBOL_STR(set_device_ro) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xea4332e, __VMLINUX_SYMBOL_STR(flush_kthread_worker) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa37d97e1, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x1403bc31, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x73a005d9, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xa193ad04, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xccff8621, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0xa36ce590, __VMLINUX_SYMBOL_STR(__init_kthread_worker) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xb9704a6f, __VMLINUX_SYMBOL_STR(blk_register_region) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x15934e80, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x955b0e2e, __VMLINUX_SYMBOL_STR(kthread_worker_fn) },
	{ 0x2e064e03, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x73ce17c9, __VMLINUX_SYMBOL_STR(get_disk) },
	{ 0x8458f70b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xdc227d80, __VMLINUX_SYMBOL_STR(queue_kthread_work) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x568e5a7b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x2af124d7, __VMLINUX_SYMBOL_STR(bd_set_size) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xc272b801, __VMLINUX_SYMBOL_STR(vfs_iter_read) },
	{ 0x7780f5a2, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x2d3f1e0c, __VMLINUX_SYMBOL_STR(bdgrab) },
	{ 0xfb0a0a24, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x30461f7d, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3454a49f, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x20cc08f8, __VMLINUX_SYMBOL_STR(blkdev_reread_part) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x91efdae4, __VMLINUX_SYMBOL_STR(__blkdev_reread_part) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4f5cd160, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0xdf46a547, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xdf8016b, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0xb4899524, __VMLINUX_SYMBOL_STR(fget) },
	{ 0x441deb9c, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xeeebc074, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0x1cc0b201, __VMLINUX_SYMBOL_STR(zero_fill_bio) },
	{ 0x7830fb61, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0x305b7db8, __VMLINUX_SYMBOL_STR(blk_mq_map_queue) },
	{ 0xb5fe184b, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x23043801, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0x47fd624e, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x97f26326, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

