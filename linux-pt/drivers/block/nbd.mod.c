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
	{ 0x59db5575, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xb0a2218, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x4868e84f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xa193ad04, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc4c08d84, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xdf46a547, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x782973e1, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x73a005d9, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x7780f5a2, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x1cee4fe6, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0xd90aec36, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x8165de8a, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x20cc08f8, __VMLINUX_SYMBOL_STR(blkdev_reread_part) },
	{ 0x2e064e03, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xd99c5bdb, __VMLINUX_SYMBOL_STR(set_device_ro) },
	{ 0x51a55b8f, __VMLINUX_SYMBOL_STR(kill_bdev) },
	{ 0xa37d97e1, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x5144108d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x1cdef4a3, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x3f77cef2, __VMLINUX_SYMBOL_STR(debugfs_create_u64) },
	{ 0x3672ca8c, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x5c55794b, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xfb0a0a24, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x4ac6f695, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x24cb93c7, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0xeeebc074, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0x91b0488, __VMLINUX_SYMBOL_STR(blk_rq_init) },
	{ 0x4fd1e1b9, __VMLINUX_SYMBOL_STR(fsync_bdev) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa7547b33, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x1c383829, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x59d46d4b, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa368f5e8, __VMLINUX_SYMBOL_STR(dequeue_signal) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xdf8016b, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x7ff35e2b, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9ca9eb75, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x55d6c0ad, __VMLINUX_SYMBOL_STR(force_sig) },
	{ 0x389207a0, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x47dbbddd, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x91f5e473, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x2efd09c6, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3faa02d4, __VMLINUX_SYMBOL_STR(kernel_recvmsg) },
	{ 0x64c72835, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x4d3c153f, __VMLINUX_SYMBOL_STR(sigprocmask) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x36134762, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

