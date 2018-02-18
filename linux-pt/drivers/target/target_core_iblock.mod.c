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
	{ 0xfe5de32b, __VMLINUX_SYMBOL_STR(sbc_attrib_attrs) },
	{ 0x927edeb, __VMLINUX_SYMBOL_STR(sbc_get_device_type) },
	{ 0xb45e7ee9, __VMLINUX_SYMBOL_STR(target_backend_unregister) },
	{ 0x5808a96d, __VMLINUX_SYMBOL_STR(transport_backend_register) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x2baa05c, __VMLINUX_SYMBOL_STR(bioset_integrity_create) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x5bf76fb, __VMLINUX_SYMBOL_STR(target_configure_unmap_from_queue) },
	{ 0x84a11bfe, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x2a5f65f3, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x7bc0c558, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0xadcc7dc9, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x462a2e75, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8f8f2aef, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x5e75b3ba, __VMLINUX_SYMBOL_STR(bio_integrity_add_page) },
	{ 0xf5f4eaa0, __VMLINUX_SYMBOL_STR(bio_integrity_alloc) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xf9da6c1c, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3498e0e7, __VMLINUX_SYMBOL_STR(sbc_get_write_same_sectors) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x5956e849, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xeefb9277, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xb4ccb20c, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x3c68e2b3, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0xd94a46d8, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb965066, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x726135e, __VMLINUX_SYMBOL_STR(target_to_linux_sector) },
	{ 0x7caecfa3, __VMLINUX_SYMBOL_STR(sbc_parse_cdb) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

