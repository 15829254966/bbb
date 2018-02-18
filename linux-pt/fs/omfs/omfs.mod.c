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
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0x28fa17bf, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xcfcd6d61, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0xd6b1697d, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0xac1bbfab, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x208b525d, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf5b4a948, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0x815b5dd4, __VMLINUX_SYMBOL_STR(match_octal) },
	{ 0x11b23cef, __VMLINUX_SYMBOL_STR(block_write_begin) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x33a1c14, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xfa210094, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x73e7a1ba, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x63c6c2f1, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x3a8ca204, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xe0e2656d, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf8fac89f, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0x7a2add7d, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0x5e3b373c, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xe1e1f37d, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x25205f59, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x83e0da68, __VMLINUX_SYMBOL_STR(mpage_writepages) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x27298b6e, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x2d594675, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x3fa04b28, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x2917f3dc, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x70003606, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xdb60398b, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x97afb87c, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0x59f17249, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x3ccc897f, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x708747c8, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0xd6cb915e, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x33d05c08, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x5c7f3b0f, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x2d4a8e7, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf09aab0a, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0xf894eedb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x8d91a4b7, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xfb0a560, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x2147df5d, __VMLINUX_SYMBOL_STR(generic_file_fsync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3daaac23, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xc764bf4e, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xc38071d, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x3d454406, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x6e81b2c, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xd942e14f, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x127097f7, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xfa36014, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x2c07e304, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0x4aef124, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x6dd73a98, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0xad6b3cf7, __VMLINUX_SYMBOL_STR(inode_init_owner) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crc-itu-t";

