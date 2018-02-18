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
	{ 0x72aedf9c, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x305b7db8, __VMLINUX_SYMBOL_STR(blk_mq_map_queue) },
	{ 0x266a9484, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xbd704c1, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x5a2302b1, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xc4aa7c1e, __VMLINUX_SYMBOL_STR(blk_queue_alignment_offset) },
	{ 0xdfb67fcd, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0x96e2b7c2, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xf0152426, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x1c383829, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xdf46a547, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x9a76342, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xbd56b78c, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0x782973e1, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xc086dd78, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0xea7c2202, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x2320640c, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0x30461f7d, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd90aec36, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xcbee6439, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x24cb93c7, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0xbff8d914, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0xe68dc15d, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x7ef938fa, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xf6a3b5c, __VMLINUX_SYMBOL_STR(string_get_size) },
	{ 0xf4421d11, __VMLINUX_SYMBOL_STR(virtqueue_notify) },
	{ 0x8ef3f172, __VMLINUX_SYMBOL_STR(virtqueue_kick_prepare) },
	{ 0x80e30290, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queue) },
	{ 0x27dcdd3f, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x60317b1b, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0xd066f431, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0x1d0b18a2, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x6b84552a, __VMLINUX_SYMBOL_STR(scsi_cmd_blk_ioctl) },
	{ 0xb4ccb20c, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xbf9e5182, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x6eeb6fe9, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0x665ee60e, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0xf6a0573a, __VMLINUX_SYMBOL_STR(bio_map_kern) },
	{ 0x29e1b020, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x7780f5a2, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xccff8621, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0xc4c08d84, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xa193ad04, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x31951e40, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queues) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x152d6c91, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x827f6603, __VMLINUX_SYMBOL_STR(blk_mq_start_stopped_hw_queues) },
	{ 0xdc29f0d5, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0x5af84fa4, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0x9ba45b72, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x597edf59, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x29430981, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x10e78fd, __VMLINUX_SYMBOL_STR(blk_mq_end_request) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("virtio:d00000002v*");
