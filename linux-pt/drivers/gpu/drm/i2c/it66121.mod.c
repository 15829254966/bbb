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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x353529aa, __VMLINUX_SYMBOL_STR(drm_edid_to_eld) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x4e94d025, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x95e51729, __VMLINUX_SYMBOL_STR(component_add) },
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x516bd07f, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_reset) },
	{ 0xfd191d8, __VMLINUX_SYMBOL_STR(drm_match_cea_mode) },
	{ 0x442fcb5, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x999d2771, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3097fc4b, __VMLINUX_SYMBOL_STR(drm_kms_helper_hotplug_event) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5ca073c, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0xc0f66d34, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xae8eae1f, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0xf6ede2b8, __VMLINUX_SYMBOL_STR(drm_do_get_edid) },
	{ 0x4e1a38eb, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_duplicate_state) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xb637065d, __VMLINUX_SYMBOL_STR(drm_helper_connector_dpms) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xa776c9f6, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xee684192, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0x70610941, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xee156fa8, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0x891d305f, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xce00ec06, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_destroy_state) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x869e6fe0, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_dpms) },
	{ 0x247146a6, __VMLINUX_SYMBOL_STR(drm_connector_unregister) },
	{ 0xfafd9e4, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0xf64d277d, __VMLINUX_SYMBOL_STR(drm_of_find_possible_crtcs) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7b496f88, __VMLINUX_SYMBOL_STR(component_del) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x602653e1, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:it66121");
MODULE_ALIAS("of:N*T*Cite,it66121*");
