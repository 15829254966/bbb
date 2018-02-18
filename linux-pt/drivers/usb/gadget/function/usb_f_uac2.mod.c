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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd5f0ff9f, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x28b29238, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdc8fe531, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x728c8f3, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xc49cdfaf, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x860f3a33, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x82fc8f56, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xf23c33c0, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3f9ab17e, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x14a193b9, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0x70610941, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xfb2bf0d7, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x5c341ab9, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x89d27a6b, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0x57b887e8, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xe78a352, __VMLINUX_SYMBOL_STR(platform_device_register) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x324b8e07, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1c4c129, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x1bbfca3e, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x5754d4f0, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x34b33dca, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xd1171cc0, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x1c2f0cde, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,snd-pcm,snd";

