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
	{ 0x266a9484, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xbb53c6ea, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xbd704c1, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0x2a5a9212, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xb4d6d8f6, __VMLINUX_SYMBOL_STR(blk_mq_unique_tag) },
	{ 0xe8749236, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x76ac3c06, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4034828, __VMLINUX_SYMBOL_STR(system_freezable_wq) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5d30e311, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x36dff7eb, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xf4421d11, __VMLINUX_SYMBOL_STR(virtqueue_notify) },
	{ 0x8ef3f172, __VMLINUX_SYMBOL_STR(virtqueue_kick_prepare) },
	{ 0x1d0b18a2, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2939d29a, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x9331b6d5, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x15a23252, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xbe7be850, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x1fe9f800, __VMLINUX_SYMBOL_STR(unregister_cpu_notifier) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdbcd74b, __VMLINUX_SYMBOL_STR(scsi_rescan_device) },
	{ 0xa976827f, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x59a47dd, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x80d8a2c0, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x79f8a4f5, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x65db4dcf, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x152d6c91, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x8b43159b, __VMLINUX_SYMBOL_STR(register_cpu_notifier) },
	{ 0x27dcdd3f, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x8988c8d8, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x7272c3c8, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xf2c52689, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xdc29f0d5, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0x5af84fa4, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0x9ba45b72, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x29430981, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x915d5f0f, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("virtio:d00000008v*");
