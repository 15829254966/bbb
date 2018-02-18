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
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdc8fe531, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xa95c39bf, __VMLINUX_SYMBOL_STR(usb_init_urb) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x86c0a67a, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x2e7794b6, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0xfe5ef2b3, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0x9ed0fa4b, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xeec7aaf1, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1e1d4773, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb22816c, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf23c33c0, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xf740788e, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xa3d03569, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xfb2bf0d7, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x2b7fc55d, __VMLINUX_SYMBOL_STR(snd_card_set_id) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x57b887e8, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x35a0f74, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfd10495b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xcf720183, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xcdfee6b3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2163d1f0, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x7aa9f2b8, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb07e4956, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x63ee3422, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x34b33dca, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd1171cc0, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf1baa40f, __VMLINUX_SYMBOL_STR(snd_pcm_limit_hw_rates) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1c2f0cde, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x80142aa3, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x82b83eae, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x23216537, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x9cb60b16, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x8c844aa3, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-rawmidi,snd";

MODULE_ALIAS("usb:v17CCp1969d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1978d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1915d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0D8Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0839d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp2305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCpBAFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0808d*dc*dsc*dp*ic*isc*ip*in*");
