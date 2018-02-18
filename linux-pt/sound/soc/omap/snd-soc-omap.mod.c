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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2592ea00, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_set_config_from_dai_data) },
	{ 0x39a0686a, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x35cf3104, __VMLINUX_SYMBOL_STR(snd_soc_set_runtime_hwparams) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2aa37a39, __VMLINUX_SYMBOL_STR(snd_hwparams_to_dma_slave_config) },
	{ 0x96a4c04f, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_pointer) },
	{ 0x66efda6b, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_open_request_chan) },
	{ 0xb7e94b9a, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_open) },
	{ 0xaff53a0f, __VMLINUX_SYMBOL_STR(dma_request_slave_channel) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x611c529b, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0xfb2bf0d7, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xb3bd40ec, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_platform) },
	{ 0x6aa70036, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0x31d6cbd7, __VMLINUX_SYMBOL_STR(omap_dma_filter_fn) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x51329ab7, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_get_chan) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
	{ 0xf141040f, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x6d46a288, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_trigger) },
	{ 0x9449be0, __VMLINUX_SYMBOL_STR(dma_common_mmap) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x73e88332, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_close_release_chan) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm-dmaengine,snd-soc-core,snd-pcm";

