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
	{ 0xc351f44f, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0xdffc7800, __VMLINUX_SYMBOL_STR(of_alias_get_id) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa59f05af, __VMLINUX_SYMBOL_STR(snd_soc_register_component) },
	{ 0x8e8faca0, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xebae4672, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0x6d310a93, __VMLINUX_SYMBOL_STR(snd_soc_unregister_component) },
	{ 0x89e25700, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock_irq) },
	{ 0x11813fc7, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock_irq) },
	{ 0xf178e8f7, __VMLINUX_SYMBOL_STR(snd_pcm_stop) },
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x386a37b, __VMLINUX_SYMBOL_STR(omap_pcm_platform_register) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc4465d2e, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd-soc-omap";

