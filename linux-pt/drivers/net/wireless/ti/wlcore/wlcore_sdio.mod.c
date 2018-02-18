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
	{ 0xf1ece412, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x3598d59c, __VMLINUX_SYMBOL_STR(of_find_matching_node_and_match) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4e94d025, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0xfc184764, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xe8e8c3ea, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x15e1de7b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x21fb6468, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd0dd6de8, __VMLINUX_SYMBOL_STR(of_match_node) },
	{ 0xce7cbd68, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xa72f31c5, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf94d68de, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x70610941, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x6b3c266d, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x5230a67b, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xb81fd9a7, __VMLINUX_SYMBOL_STR(platform_device_add_resources) },
	{ 0x8ab1fe88, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0x5c218908, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x40a8a875, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x8557f117, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0xb61949a7, __VMLINUX_SYMBOL_STR(mmc_power_save_host) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xafea179b, __VMLINUX_SYMBOL_STR(mmc_power_restore_host) },
	{ 0xe33cd27d, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb454851, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x8101ada5, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x75cc8f, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xd3c5bcb, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x9979e07e, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x3e72b5a2, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xa88e96c2, __VMLINUX_SYMBOL_STR(platform_device_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v0097d4076*");
