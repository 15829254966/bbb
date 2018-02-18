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
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x96d87eff, __VMLINUX_SYMBOL_STR(class_interface_unregister) },
	{ 0x82bc90ba, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xbaf2f450, __VMLINUX_SYMBOL_STR(scsi_register_interface) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc0c9f04a, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x8b40d78f, __VMLINUX_SYMBOL_STR(enclosure_add_device) },
	{ 0x64917845, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0xc525bcf3, __VMLINUX_SYMBOL_STR(enclosure_register) },
	{ 0x7039f335, __VMLINUX_SYMBOL_STR(enclosure_for_each_device) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x80472303, __VMLINUX_SYMBOL_STR(enclosure_component_alloc) },
	{ 0xa2f6f48b, __VMLINUX_SYMBOL_STR(enclosure_component_register) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb71894d8, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd9cceb06, __VMLINUX_SYMBOL_STR(enclosure_remove_device) },
	{ 0x8e0006ea, __VMLINUX_SYMBOL_STR(enclosure_unregister) },
	{ 0xc907fa9a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa2bbcc41, __VMLINUX_SYMBOL_STR(enclosure_find) },
	{ 0xe8749236, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=enclosure";

