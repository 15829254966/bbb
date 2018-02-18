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
	{ 0xf192ecd2, __VMLINUX_SYMBOL_STR(fuse_file_poll) },
	{ 0x15934e80, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xb5fe184b, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x916eb858, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x31ad8e5, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x5e106075, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf1b076f9, __VMLINUX_SYMBOL_STR(fuse_dev_operations) },
	{ 0x8458f70b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x1cf8118a, __VMLINUX_SYMBOL_STR(fuse_put_request) },
	{ 0xb2e70ef4, __VMLINUX_SYMBOL_STR(fuse_dev_free) },
	{ 0xc5f50275, __VMLINUX_SYMBOL_STR(fuse_request_send_background) },
	{ 0x442a091f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xdcf97595, __VMLINUX_SYMBOL_STR(fuse_get_req_for_background) },
	{ 0x828ae261, __VMLINUX_SYMBOL_STR(fuse_dev_alloc) },
	{ 0xc8d2d882, __VMLINUX_SYMBOL_STR(fuse_conn_init) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xc0c9f04a, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x55694cdd, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x24b3043e, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x9bf5ef24, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0xc907fa9a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x28352af3, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x182112f8, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x134bb9b3, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x568e5a7b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd64a2d7c, __VMLINUX_SYMBOL_STR(fuse_direct_io) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8865d3d8, __VMLINUX_SYMBOL_STR(fuse_do_ioctl) },
	{ 0x2630a611, __VMLINUX_SYMBOL_STR(fuse_do_open) },
	{ 0xacbcc75d, __VMLINUX_SYMBOL_STR(fuse_conn_get) },
	{ 0xba59f0bb, __VMLINUX_SYMBOL_STR(fuse_sync_release) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x56b48e6c, __VMLINUX_SYMBOL_STR(fuse_dev_release) },
	{ 0xe1d496d0, __VMLINUX_SYMBOL_STR(fuse_conn_put) },
	{ 0x94820c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xebfdb35, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x731023c2, __VMLINUX_SYMBOL_STR(fuse_abort_conn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

