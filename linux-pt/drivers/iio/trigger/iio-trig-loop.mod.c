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
	{ 0x57c34292, __VMLINUX_SYMBOL_STR(iio_unregister_sw_trigger_type) },
	{ 0x6713b868, __VMLINUX_SYMBOL_STR(iio_register_sw_trigger_type) },
	{ 0x3f9ab17e, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0xfb259033, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0xe9a4c1d2, __VMLINUX_SYMBOL_STR(iio_trigger_alloc) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xca7d8764, __VMLINUX_SYMBOL_STR(kthread_freezable_should_stop) },
	{ 0x8c3ce929, __VMLINUX_SYMBOL_STR(iio_trigger_poll_chained) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa37d97e1, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xfb0a0a24, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x4ac6f695, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5f2757f8, __VMLINUX_SYMBOL_STR(iio_trigger_free) },
	{ 0xd8df6b54, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-sw-trigger,industrialio";

