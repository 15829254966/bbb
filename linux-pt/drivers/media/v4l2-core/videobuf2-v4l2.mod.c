#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbba89470, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf28193cf, __VMLINUX_SYMBOL_STR(vb2_core_streamoff) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x68fb70a3, __VMLINUX_SYMBOL_STR(vb2_core_dqbuf) },
	{ 0x941fc39, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x6fa027f9, __VMLINUX_SYMBOL_STR(vb2_core_qbuf) },
	{ 0x223dcbc5, __VMLINUX_SYMBOL_STR(vb2_core_querybuf) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x2d328655, __VMLINUX_SYMBOL_STR(vb2_debug) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4ac6f695, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xa32ad8f2, __VMLINUX_SYMBOL_STR(vb2_core_streamon) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x62db9317, __VMLINUX_SYMBOL_STR(vb2_core_prepare_buf) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa54f7d15, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x23fd6c4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa37d97e1, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x47d06853, __VMLINUX_SYMBOL_STR(v4l2_event_pending) },
	{ 0x74e6223a, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa9215dc9, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0xb572f115, __VMLINUX_SYMBOL_STR(vb2_core_queue_release) },
	{ 0x5b67dd9c, __VMLINUX_SYMBOL_STR(vb2_queue_error) },
	{ 0x7be9c4c1, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xfb0a0a24, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x20cb9210, __VMLINUX_SYMBOL_STR(vb2_core_create_bufs) },
	{ 0x7c1f46aa, __VMLINUX_SYMBOL_STR(vb2_core_expbuf) },
	{ 0x230fe587, __VMLINUX_SYMBOL_STR(vb2_core_reqbufs) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x7dab1a7a, __VMLINUX_SYMBOL_STR(vb2_verify_memory_type) },
	{ 0x38fd9e00, __VMLINUX_SYMBOL_STR(vb2_core_queue_init) },
	{ 0xaf8dfb0d, __VMLINUX_SYMBOL_STR(vb2_buffer_in_use) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core";

