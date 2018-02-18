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
	{ 0xbb53c6ea, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x28fa17bf, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4be85a03, __VMLINUX_SYMBOL_STR(memweight) },
	{ 0xac1bbfab, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xfa210094, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbfd03632, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x73e7a1ba, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x26808657, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0x63c6c2f1, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe0e2656d, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xe1e1f37d, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x25205f59, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x7621ab43, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x7016b923, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x254b9d17, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x70003606, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x40cb86b5, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x3621cbb8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x3ccc897f, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xd6cb915e, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x33d05c08, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2a5a9212, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xf894eedb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x2147df5d, __VMLINUX_SYMBOL_STR(generic_file_fsync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x6e06bec9, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x3daaac23, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xc764bf4e, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x3d454406, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xfa36014, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x2c07e304, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0x6dd73a98, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

