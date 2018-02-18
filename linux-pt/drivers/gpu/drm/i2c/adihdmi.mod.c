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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9ac21425, __VMLINUX_SYMBOL_STR(regmap_register_patch) },
	{ 0x95e51729, __VMLINUX_SYMBOL_STR(component_add) },
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x442fcb5, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x999d2771, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x69aa4a0a, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0x9c140c32, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xc0f66d34, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0x6f88effb, __VMLINUX_SYMBOL_STR(hdmi_avi_infoframe_init) },
	{ 0xae8eae1f, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0xf6ede2b8, __VMLINUX_SYMBOL_STR(drm_do_get_edid) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4e42b714, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0xb637065d, __VMLINUX_SYMBOL_STR(drm_helper_connector_dpms) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa776c9f6, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xee684192, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2efa7b7a, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xcbeac4be, __VMLINUX_SYMBOL_STR(hdmi_avi_infoframe_pack) },
	{ 0xee156fa8, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0x891d305f, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc3eca5e7, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1a770ac3, __VMLINUX_SYMBOL_STR(drm_detect_hdmi_monitor) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x247146a6, __VMLINUX_SYMBOL_STR(drm_connector_unregister) },
	{ 0xfafd9e4, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0xa8b4c151, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x8b574763, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xf64d277d, __VMLINUX_SYMBOL_STR(drm_of_find_possible_crtcs) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf3812ec2, __VMLINUX_SYMBOL_STR(drm_helper_hpd_irq_event) },
	{ 0x7b496f88, __VMLINUX_SYMBOL_STR(component_del) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf9375a01, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4bd8024f, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x602653e1, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0x1a72106a, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xf6f48abf, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x5581989e, __VMLINUX_SYMBOL_STR(regcache_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:adv7511");
MODULE_ALIAS("i2c:adv7511w");
MODULE_ALIAS("i2c:adv7513");
MODULE_ALIAS("of:N*T*Cadi,adv7511*");
MODULE_ALIAS("of:N*T*Cadi,adv7511w*");
MODULE_ALIAS("of:N*T*Cadi,adv7513*");
