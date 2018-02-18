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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd786340f, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xca0e8439, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x7ba42bfe, __VMLINUX_SYMBOL_STR(_vb2_fop_release) },
	{ 0x918a0c49, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xff36bb5b, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xe949128, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x98d1f36, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0x4c688583, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x70e28f2b, __VMLINUX_SYMBOL_STR(tveeprom_hauppauge_analog) },
	{ 0x2f5bcf23, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0xdb708594, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x69209cce, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xa95f0c66, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0x442fcb5, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xf4cde78f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x412e2415, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x261bdcf5, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x30fbca96, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x73b2dfe, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xea96fc21, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4a844393, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xc622736d, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x485d09fe, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xa11d43f6, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xc7e0ed46, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xf06a15bc, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xc248eff1, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x1f61bc9f, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x265dc093, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x4ce8cebc, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x9978f7df, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xd9457fe, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x63cad717, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe2408b73, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x23fd6c4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5f969406, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xf1f91371, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xf740788e, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x924dd942, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x74e6223a, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xf1bbcbac, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x91ab8bf5, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xa18cc106, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x248ce40d, __VMLINUX_SYMBOL_STR(tveeprom_read) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x67d3ff20, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0xf6f3ee79, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x38b491e4, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x23e7fbba, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xddd8f7b5, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x8194bc58, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_packets) },
	{ 0x7be9c4c1, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x6be67a52, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xba679e6a, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1c39f636, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x62ed3492, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x63ee3422, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x1ac08a42, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xcfc890ba, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x1def808c, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0x2dcc9d3c, __VMLINUX_SYMBOL_STR(i2c_probe_func_quick_read) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9e425be6, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x63ee71d2, __VMLINUX_SYMBOL_STR(vb2_ioctl_expbuf) },
	{ 0xfa3b251c, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xf16568f1, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x7ce6347e, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x11626e56, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x9e890b5c, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x2441a547, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xd83a8b61, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x5e8fbd05, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,tveeprom,videobuf2-vmalloc,videobuf2-core";

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D0324931E82C7C8815E207B");
