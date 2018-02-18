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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x5a04785, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x3436c59c, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0xac1bbfab, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x208b525d, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x11b23cef, __VMLINUX_SYMBOL_STR(block_write_begin) },
	{ 0xe8ebaac1, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x33a1c14, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xfa210094, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbfd03632, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x73e7a1ba, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x63c6c2f1, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x31af40f7, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0xe0e2656d, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xf8fac89f, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x381ce59f, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xe1e1f37d, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x25205f59, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2a0e0ccd, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x7621ab43, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7016b923, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x2d594675, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x3fa04b28, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x2917f3dc, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x70003606, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x40cb86b5, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xaa084772, __VMLINUX_SYMBOL_STR(invalidate_inode_buffers) },
	{ 0x3621cbb8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xdb60398b, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x97afb87c, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0x59f17249, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x3ccc897f, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x708747c8, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0xd6cb915e, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x33d05c08, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2a5a9212, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xf894eedb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x8d91a4b7, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xfb0a560, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x2147df5d, __VMLINUX_SYMBOL_STR(generic_file_fsync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5a63dbac, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x3daaac23, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x1eb46fd2, __VMLINUX_SYMBOL_STR(__bforget) },
	{ 0xc764bf4e, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xc38071d, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x3d454406, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x6e81b2c, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xd942e14f, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x127097f7, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xfa36014, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x2c07e304, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0x6dd73a98, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0xad6b3cf7, __VMLINUX_SYMBOL_STR(inode_init_owner) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

