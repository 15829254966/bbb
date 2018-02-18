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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x54b8f605, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xf87fad77, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbbc097ff, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xce46a172, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x5f4c8482, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x2f9f7153, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x759a6763, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x1ac61519, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x4ad1cbf8, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x3a85f811, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x8b574763, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x2cc2f16d, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x97a8a743, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5581989e, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x7193d9ef, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x8cedde24, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

