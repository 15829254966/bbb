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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbf754999, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x7e991206, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x6a7a5cb7, __VMLINUX_SYMBOL_STR(snd_timer_global_new) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x3056b115, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x406c4cb1, __VMLINUX_SYMBOL_STR(hrtimer_resolution) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x30f915f2, __VMLINUX_SYMBOL_STR(snd_timer_interrupt) },
	{ 0xa814d4cd, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x73d8afe5, __VMLINUX_SYMBOL_STR(snd_timer_global_register) },
	{ 0x29a0bde5, __VMLINUX_SYMBOL_STR(hrtimer_try_to_cancel) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x3b7dd135, __VMLINUX_SYMBOL_STR(snd_timer_global_free) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-timer";

