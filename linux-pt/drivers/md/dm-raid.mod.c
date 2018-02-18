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
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xd9ad28f3, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xa3467ec8, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x8458f70b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x26e2714c, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0xf54dd203, __VMLINUX_SYMBOL_STR(mddev_unlock) },
	{ 0x1cf84b2c, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x87ccb6c3, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x442a091f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xaf813a1e, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xff1fa105, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x8512793d, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0x3ad31c6c, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0x5555f830, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0xcc8b775a, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0xa023fb6f, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x56deb95a, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0x1063dac3, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x4b99d148, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0xd60108e, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0xda1a5b1a, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0x134bb9b3, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xd8725242, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x39850324, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc900ab9c, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0xa16ddca6, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x8e74e192, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0xe3baeb78, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,md-mod,raid456";
