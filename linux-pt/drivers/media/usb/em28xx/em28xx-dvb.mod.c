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
	{ 0x63ee3422, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x9978f7df, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x1104bf3a, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0xfbbf9811, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0xf1f91371, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xd83a8b61, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0xff36bb5b, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xdb708594, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x6be67a52, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0x97f26326, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe6b151f3, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x793d6fda, __VMLINUX_SYMBOL_STR(em28xx_alloc_urbs) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x6a583deb, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe949128, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xc7e0ed46, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x73b2dfe, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x38b491e4, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0xe2408b73, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x485d09fe, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x2efa7b7a, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x1e7a0830, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x2f5bcf23, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0xa95f0c66, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0xe2b3064e, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0xf740788e, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa407d4b3, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ab0d0e3, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5293470f, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0xb2c83f2, __VMLINUX_SYMBOL_STR(em28xx_gpio_set) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x42cc660, __VMLINUX_SYMBOL_STR(em28xx_write_reg_bits) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0x9926de12, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c1ca0f3, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx";


MODULE_INFO(srcversion, "46A0E1A040DD693FED3C59A");
