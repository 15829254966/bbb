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
	{ 0x2158bcde, __VMLINUX_SYMBOL_STR(kmap_to_page) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x8a2d86f5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x2737ca6c, __VMLINUX_SYMBOL_STR(p9_client_cb) },
	{ 0xf3831230, __VMLINUX_SYMBOL_STR(v9fs_unregister_trans) },
	{ 0x3d247755, __VMLINUX_SYMBOL_STR(iov_iter_get_pages_alloc) },
	{ 0xc0c9f04a, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x152d6c91, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x9bceb6d4, __VMLINUX_SYMBOL_STR(v9fs_register_trans) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x27dcdd3f, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x9ba45b72, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xee941c94, __VMLINUX_SYMBOL_STR(p9_tag_lookup) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1d0b18a2, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x69d7ab51, __VMLINUX_SYMBOL_STR(p9_release_pages) },
	{ 0x266a9484, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xa66e44d2, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x72926c98, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xea18f381, __VMLINUX_SYMBOL_STR(iov_iter_single_seg_count) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x85cddcd4, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x7bae4486, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0x751a80ef, __VMLINUX_SYMBOL_STR(dev_emerg) },
	{ 0xbd704c1, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=9pnet";

MODULE_ALIAS("virtio:d00000009v*");
