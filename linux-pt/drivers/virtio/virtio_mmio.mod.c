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
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfb52d5ff, __VMLINUX_SYMBOL_STR(virtqueue_get_used) },
	{ 0x6ab97264, __VMLINUX_SYMBOL_STR(virtqueue_get_avail) },
	{ 0x8cd7319d, __VMLINUX_SYMBOL_STR(vring_new_virtqueue) },
	{ 0xaec655c7, __VMLINUX_SYMBOL_STR(alloc_pages_exact) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x70d856bb, __VMLINUX_SYMBOL_STR(register_virtio_device) },
	{ 0x3038b25f, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xcd1ed892, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x4a31d399, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x752a440b, __VMLINUX_SYMBOL_STR(virtio_config_changed) },
	{ 0xff05fa13, __VMLINUX_SYMBOL_STR(vring_interrupt) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x90e3dcb5, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x3f713cfd, __VMLINUX_SYMBOL_STR(vring_del_virtqueue) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2ee26c1, __VMLINUX_SYMBOL_STR(free_pages_exact) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe6fc5a5c, __VMLINUX_SYMBOL_STR(vring_transport_features) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0xaf82892f, __VMLINUX_SYMBOL_STR(unregister_virtio_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cvirtio,mmio*");
