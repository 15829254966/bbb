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
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1403bc31, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x9f97c2f6, __VMLINUX_SYMBOL_STR(crypto_register_ahash) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf65e88f, __VMLINUX_SYMBOL_STR(pm_runtime_irq_safe) },
	{ 0xacaff8e6, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x482474ca, __VMLINUX_SYMBOL_STR(dma_request_chan) },
	{ 0x1a72106a, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xec0e7ada, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x90e3dcb5, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x4a31d399, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x4e94d025, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0xa141af92, __VMLINUX_SYMBOL_STR(of_address_to_resource) },
	{ 0x5f428112, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x499043d3, __VMLINUX_SYMBOL_STR(crypto_init_queue) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0x52308b55, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x8e56a21f, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x158b4241, __VMLINUX_SYMBOL_STR(crypto_unregister_ahash) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf1ece412, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc861b8a6, __VMLINUX_SYMBOL_STR(crypto_dequeue_request) },
	{ 0x57c6e382, __VMLINUX_SYMBOL_STR(crypto_enqueue_request) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1e2df8fd, __VMLINUX_SYMBOL_STR(crypto_shash_finup) },
	{ 0x2fee16d2, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x134bb9b3, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x8a2d86f5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x39a0686a, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0xb1b4b3c6, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe229b13b, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0x1e627be0, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8d11c9d0, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x15e1de7b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xd2d5ed59, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,omap2-sham*");
MODULE_ALIAS("of:N*T*Cti,omap3-sham*");
MODULE_ALIAS("of:N*T*Cti,omap4-sham*");
MODULE_ALIAS("of:N*T*Cti,omap5-sham*");
