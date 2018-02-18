#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x1cee4fe6, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0xd90aec36, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xc4c08d84, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x134bb9b3, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xc23620a5, __VMLINUX_SYMBOL_STR(mtd_table_mutex) },
	{ 0x101e0d80, __VMLINUX_SYMBOL_STR(rq_flush_dcache_pages) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9e766a64, __VMLINUX_SYMBOL_STR(__put_mtd_device) },
	{ 0x24cb93c7, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0xdda66154, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0x49a614e, __VMLINUX_SYMBOL_STR(__get_mtd_device) },
	{ 0x3995c8b7, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x66b195f3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1403bc31, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x73a005d9, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xa193ad04, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x5ccee33f, __VMLINUX_SYMBOL_STR(register_mtd_user) },
	{ 0x4ecb037a, __VMLINUX_SYMBOL_STR(__mtd_next_device) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xb933d8c4, __VMLINUX_SYMBOL_STR(unregister_mtd_user) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x7780f5a2, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x299432f8, __VMLINUX_SYMBOL_STR(__blk_end_request_cur) },
	{ 0x9ca9eb75, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x36134762, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3454a49f, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdf46a547, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9a76342, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xf0152426, __VMLINUX_SYMBOL_STR(set_disk_ro) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

