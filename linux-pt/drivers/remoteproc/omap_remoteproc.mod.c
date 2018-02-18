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
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3388e337, __VMLINUX_SYMBOL_STR(of_get_address) },
	{ 0xec0e7ada, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xf2e9fa5e, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb1a65e3d, __VMLINUX_SYMBOL_STR(rproc_get_alias_id) },
	{ 0x3f2acfe8, __VMLINUX_SYMBOL_STR(rproc_add) },
	{ 0x4158a830, __VMLINUX_SYMBOL_STR(of_reserved_mem_device_init) },
	{ 0x3038b25f, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xaee0054b, __VMLINUX_SYMBOL_STR(of_count_phandle_with_args) },
	{ 0x3cec8268, __VMLINUX_SYMBOL_STR(of_property_read_u32_index) },
	{ 0xee7dff42, __VMLINUX_SYMBOL_STR(syscon_regmap_lookup_by_phandle) },
	{ 0xb1bbca04, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x102cef3f, __VMLINUX_SYMBOL_STR(rproc_alloc) },
	{ 0xf141040f, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9df21e1c, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x5f428112, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x6a882f63, __VMLINUX_SYMBOL_STR(rproc_vq_interrupt) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x1f310f22, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x620ff8b5, __VMLINUX_SYMBOL_STR(mbox_request_channel) },
	{ 0x7b77ddeb, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xde8d48f8, __VMLINUX_SYMBOL_STR(mbox_free_channel) },
	{ 0xb4d2ca1f, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x15e1de7b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x49e3a30d, __VMLINUX_SYMBOL_STR(of_reserved_mem_device_release) },
	{ 0x233a903e, __VMLINUX_SYMBOL_STR(rproc_put) },
	{ 0x1bdce2b3, __VMLINUX_SYMBOL_STR(rproc_del) },
	{ 0x8e56a21f, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xacaff8e6, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x7dbee2e9, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa46f2405, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x71167f7d, __VMLINUX_SYMBOL_STR(mbox_send_message) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x33aeb534, __VMLINUX_SYMBOL_STR(omap_iommu_domain_activate) },
	{ 0x1de5fda2, __VMLINUX_SYMBOL_STR(omap_iommu_domain_deactivate) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xeda13d45, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x26bbcc39, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xbcf605a4, __VMLINUX_SYMBOL_STR(rproc_report_crash) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4bd8024f, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,omap4-dsp*");
MODULE_ALIAS("of:N*T*Cti,omap4-ipu*");
MODULE_ALIAS("of:N*T*Cti,omap5-dsp*");
MODULE_ALIAS("of:N*T*Cti,omap5-ipu*");
MODULE_ALIAS("of:N*T*Cti,dra7-dsp*");
MODULE_ALIAS("of:N*T*Cti,dra7-ipu*");
