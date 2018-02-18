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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0xdc8fe531, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xfbbf9811, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0x601b3a80, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4a844393, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xc49cdfaf, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x2e7794b6, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x66b195f3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x2a34f207, __VMLINUX_SYMBOL_STR(em28xx_read_ac97) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x77ae495d, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0x4d572539, __VMLINUX_SYMBOL_STR(em28xx_write_ac97) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf23c33c0, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xf740788e, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x1104bf3a, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfb2bf0d7, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xf6f3ee79, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xc44d3a0e, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x57b887e8, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3b0637df, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0x2163d1f0, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xef2d62d5, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x34b33dca, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xd1171cc0, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9e425be6, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x1c2f0cde, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x85cddcd4, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xfa3b251c, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x82b83eae, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x30ac8586, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx,snd-pcm,snd";


MODULE_INFO(srcversion, "CEE40D4D8E2D03A88AC0445");
