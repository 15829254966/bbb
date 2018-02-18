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
	{ 0x81f66f35, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x918a0c49, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdc8fe531, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x69209cce, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x412e2415, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x261bdcf5, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xea96fc21, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x601b3a80, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf06a15bc, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xc248eff1, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1f61bc9f, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x265dc093, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xd9457fe, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x63cad717, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x5f969406, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xf23c33c0, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xf740788e, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x74e6223a, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xf1bbcbac, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xa18cc106, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0x14a193b9, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0xfb2bf0d7, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x67d3ff20, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x23e7fbba, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x89d27a6b, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0x57b887e8, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x53d7eb9d, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x211869d, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x7be9c4c1, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3b0637df, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0xb70740e, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x6d1a35f2, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1c39f636, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x62ed3492, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1bbfca3e, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x34b33dca, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd1171cc0, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1c2f0cde, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xf16568f1, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x7ce6347e, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x11626e56, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x2441a547, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x5e8fbd05, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,snd-pcm,videobuf2-vmalloc,videobuf2-core,snd";

MODULE_ALIAS("usb:v1B71p3002d*dc*dsc*dp*ic*isc*ip*in*");
