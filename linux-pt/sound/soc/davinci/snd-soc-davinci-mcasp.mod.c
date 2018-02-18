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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xf1ece412, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x8e56a21f, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0xec0e7ada, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x5b19634d, __VMLINUX_SYMBOL_STR(div_s64_rem) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x15e1de7b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x8e8faca0, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0x482474ca, __VMLINUX_SYMBOL_STR(dma_request_chan) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1ab81dac, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xdc93f30a, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x4a31d399, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xe6f7c80f, __VMLINUX_SYMBOL_STR(edma_pcm_platform_register) },
	{ 0x2ed9fa80, __VMLINUX_SYMBOL_STR(devm_kmemdup) },
	{ 0x5f428112, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x418299b0, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0xacaff8e6, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x89e25700, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock_irq) },
	{ 0x859bec4e, __VMLINUX_SYMBOL_STR(platform_get_irq_byname) },
	{ 0x11813fc7, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock_irq) },
	{ 0x2396c7f0, __VMLINUX_SYMBOL_STR(clk_set_parent) },
	{ 0xe3e9c9dd, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_component) },
	{ 0x6ba3fc3b, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x289257a3, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0xf2e9fa5e, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0x52308b55, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0xef2d62d5, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0xf178e8f7, __VMLINUX_SYMBOL_STR(snd_pcm_stop) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x8fcc025c, __VMLINUX_SYMBOL_STR(of_parse_phandle_with_args) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xcb2197df, __VMLINUX_SYMBOL_STR(of_property_match_string) },
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x386a37b, __VMLINUX_SYMBOL_STR(omap_pcm_platform_register) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1a72106a, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-edma,snd-soc-core,snd-soc-omap";

MODULE_ALIAS("of:N*T*Cti,dm646x-mcasp-audio*");
MODULE_ALIAS("of:N*T*Cti,da830-mcasp-audio*");
MODULE_ALIAS("of:N*T*Cti,am33xx-mcasp-audio*");
MODULE_ALIAS("of:N*T*Cti,dra7-mcasp-audio*");
