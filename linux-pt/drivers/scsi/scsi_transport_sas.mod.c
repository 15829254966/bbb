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
	{ 0x1cee4fe6, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x1b84cfe5, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x3c747a48, __VMLINUX_SYMBOL_STR(scsi_remove_target) },
	{ 0xc4c08d84, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x46f6669, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x1b118d83, __VMLINUX_SYMBOL_STR(transport_destroy_device) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc7f6e3e4, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdf758b30, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x2939d29a, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x898d455e, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x782cc296, __VMLINUX_SYMBOL_STR(transport_add_device) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x604415ce, __VMLINUX_SYMBOL_STR(bsg_register_queue) },
	{ 0x3d5367d5, __VMLINUX_SYMBOL_STR(transport_configure_device) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xb3d1922a, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xe9af4232, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x9bf5ef24, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x875e5cda, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0xb5195665, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xc907fa9a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9973090d, __VMLINUX_SYMBOL_STR(transport_setup_device) },
	{ 0x8a036d32, __VMLINUX_SYMBOL_STR(bsg_unregister_queue) },
	{ 0x9ca9eb75, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd2508b7d, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xf14f8e95, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7a171265, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0x182112f8, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x1d29b46c, __VMLINUX_SYMBOL_STR(scsi_get_vpd_page) },
	{ 0x87d78400, __VMLINUX_SYMBOL_STR(transport_remove_device) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x28352af3, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xb93036e, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

