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
	{ 0xce72a984, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x305b7db8, __VMLINUX_SYMBOL_STR(blk_mq_map_queue) },
	{ 0x1c383c69, __VMLINUX_SYMBOL_STR(param_get_int) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xbb53c6ea, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xdf46a547, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xc453bfc2, __VMLINUX_SYMBOL_STR(alloc_disk_node) },
	{ 0x4d04f904, __VMLINUX_SYMBOL_STR(blk_queue_softirq_done) },
	{ 0x832524b5, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0x1d5f9a93, __VMLINUX_SYMBOL_STR(blk_init_queue_node) },
	{ 0xf9adac11, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x22f994b2, __VMLINUX_SYMBOL_STR(blk_alloc_queue_node) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x144efef4, __VMLINUX_SYMBOL_STR(nvm_register) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdfb67fcd, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0x9a76342, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2320640c, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0x30461f7d, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0x2a5a9212, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7780f5a2, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xccff8621, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0xc4c08d84, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xa193ad04, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xb5f198f, __VMLINUX_SYMBOL_STR(nvm_unregister) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd066f431, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0x9ca9eb75, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x597edf59, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0xe7d19ac7, __VMLINUX_SYMBOL_STR(blk_complete_request) },
	{ 0x3056b115, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x6091097a, __VMLINUX_SYMBOL_STR(bio_phys_segments) },
	{ 0xbf223c10, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0xc3281178, __VMLINUX_SYMBOL_STR(blk_mq_alloc_request) },
	{ 0xcb0bd7bb, __VMLINUX_SYMBOL_STR(blk_stop_queue) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xfbc4f89e, __VMLINUX_SYMBOL_STR(io_schedule_timeout) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xa814d4cd, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x10e78fd, __VMLINUX_SYMBOL_STR(blk_mq_end_request) },
	{ 0x7a171265, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0xcabcb30f, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7b60dc0b, __VMLINUX_SYMBOL_STR(blk_start_queue_async) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xbf9e5182, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

