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
	{ 0xa60f386, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xc14cab87, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0x107e5878, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0xd6b1697d, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x396b9d2c, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x946d83ac, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbfd03632, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x73e7a1ba, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x63c6c2f1, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x9dfe7307, __VMLINUX_SYMBOL_STR(lz4_decompress_unknownoutputsize) },
	{ 0x31af40f7, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe0e2656d, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf8fac89f, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0xb1b4b3c6, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfaeb9f8, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xe1e1f37d, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x11f1e154, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x7621ab43, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7016b923, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x87d0fdd3, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x65dccf13, __VMLINUX_SYMBOL_STR(xz_dec_end) },
	{ 0x254b9d17, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0xb5b1edbf, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x581f98da, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0x40cb86b5, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xc88b0a26, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xf9348cbc, __VMLINUX_SYMBOL_STR(xz_dec_run) },
	{ 0x3621cbb8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8f8f2aef, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x3ccc897f, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd6cb915e, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x33d05c08, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2a5a9212, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xf894eedb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x35a88f28, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa07ed110, __VMLINUX_SYMBOL_STR(xz_dec_init) },
	{ 0xfb0a560, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x352759cc, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x6e06bec9, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x9604505a, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x26e2714c, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xc764bf4e, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xf30fda27, __VMLINUX_SYMBOL_STR(lzo1x_decompress_safe) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x81db6ebb, __VMLINUX_SYMBOL_STR(xz_dec_reset) },
	{ 0x3d454406, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xa45841f1, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x6e81b2c, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xde22e7a9, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0x47fd624e, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x6dd73a98, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

