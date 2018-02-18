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
	{ 0x2441a547, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xd786340f, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x924dd942, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x4c688583, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x918a0c49, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x391d4efb, __VMLINUX_SYMBOL_STR(videobuf_read_one) },
	{ 0x5b200e8b, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0x624226a1, __VMLINUX_SYMBOL_STR(videobuf_queue_is_busy) },
	{ 0xa9215dc9, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9a8bb3dc, __VMLINUX_SYMBOL_STR(videobuf_iolock) },
	{ 0x4cd10412, __VMLINUX_SYMBOL_STR(videobuf_vmalloc_free) },
	{ 0x17d60141, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0xea96fc21, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x9c595438, __VMLINUX_SYMBOL_STR(videobuf_queue_vmalloc_init) },
	{ 0x17cffc5, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3eff7982, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x1ac08a42, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xf06a15bc, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf4cde78f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x3ef64d3c, __VMLINUX_SYMBOL_STR(videobuf_mmap_free) },
	{ 0x69209cce, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x6840b9b7, __VMLINUX_SYMBOL_STR(videobuf_poll_stream) },
	{ 0x77fa88da, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x1c39f636, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x23fd6c4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x20c0969e, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0x9a7eb152, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0xadf40542, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x8f885ce7, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0x7e461a06, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
	{ 0x7be9c4c1, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x11626e56, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1f61bc9f, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f969406, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5ac50576, __VMLINUX_SYMBOL_STR(videobuf_to_vmalloc) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,videobuf-vmalloc";

MODULE_ALIAS("usb:v08CAp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p3108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB0p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FEBp2004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpB500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1A18d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C8p0729d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pA208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0784p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p004Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "59C84AD24CD6F102E9F52B0");
