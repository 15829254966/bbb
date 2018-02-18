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
	{ 0x5230a67b, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xb454851, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xe59af7d4, __VMLINUX_SYMBOL_STR(smscore_start_device) },
	{ 0x76fb0e76, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xd3c5bcb, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xe8e8c3ea, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xa9889212, __VMLINUX_SYMBOL_STR(smscore_set_board_id) },
	{ 0xf8192d4c, __VMLINUX_SYMBOL_STR(smscore_register_device) },
	{ 0x844539ae, __VMLINUX_SYMBOL_STR(sms_get_board) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe33cd27d, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x37d91069, __VMLINUX_SYMBOL_STR(smsendian_handle_tx_message) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xae1303e4, __VMLINUX_SYMBOL_STR(smscore_getbuffer) },
	{ 0xa0170d8f, __VMLINUX_SYMBOL_STR(smscore_onresponse) },
	{ 0x45284ae9, __VMLINUX_SYMBOL_STR(smsendian_handle_rx_message) },
	{ 0x8101ada5, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xcd601667, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3e72b5a2, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x9979e07e, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x4f656b7b, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x75cc8f, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xb3f3be73, __VMLINUX_SYMBOL_STR(smscore_unregister_device) },
	{ 0x487551e1, __VMLINUX_SYMBOL_STR(smscore_putbuffer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv";

MODULE_ALIAS("sdio:c*v039Ad5347*");
MODULE_ALIAS("sdio:c*v039Ad1100*");
MODULE_ALIAS("sdio:c*v039Ad0201*");
MODULE_ALIAS("sdio:c*v039Ad0300*");
MODULE_ALIAS("sdio:c*v039Ad0301*");
MODULE_ALIAS("sdio:c*v039Ad0302*");
MODULE_ALIAS("sdio:c*v039Ad0500*");
MODULE_ALIAS("sdio:c*v039Ad0600*");
MODULE_ALIAS("sdio:c*v039Ad0700*");
MODULE_ALIAS("sdio:c*v039Ad0800*");
