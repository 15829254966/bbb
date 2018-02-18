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
	{ 0x3642a302, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x90a46b77, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xd3c5bcb, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x76fb0e76, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x752bdfd3, __VMLINUX_SYMBOL_STR(btmrvl_register_hdev) },
	{ 0xaed78812, __VMLINUX_SYMBOL_STR(btmrvl_add_card) },
	{ 0xe8e8c3ea, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x96408fe5, __VMLINUX_SYMBOL_STR(btmrvl_send_module_cfg_cmd) },
	{ 0x225da551, __VMLINUX_SYMBOL_STR(btmrvl_remove_card) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x516213e4, __VMLINUX_SYMBOL_STR(btmrvl_interrupt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfc184764, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6f440b9, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x76267271, __VMLINUX_SYMBOL_STR(btmrvl_check_evtpkt) },
	{ 0x5e675c12, __VMLINUX_SYMBOL_STR(btmrvl_process_event) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6b3c266d, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xad179edc, __VMLINUX_SYMBOL_STR(dev_coredumpv) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0xcd601667, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x40a8a875, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9979e07e, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x4f656b7b, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3e72b5a2, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xc132a650, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x75cc8f, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x5c218908, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x9dc4289e, __VMLINUX_SYMBOL_STR(btmrvl_enable_hs) },
	{ 0xa6ad0d45, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x1941072d, __VMLINUX_SYMBOL_STR(hci_suspend_dev) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x72d3b6b8, __VMLINUX_SYMBOL_STR(hci_resume_dev) },
	{ 0x21fb6468, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "F41F02713BDBF9DD01A2AF8");
