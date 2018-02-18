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
	{ 0xb4211da4, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x26aad5c8, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_write) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0x9e034be1, __VMLINUX_SYMBOL_STR(ore_read) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaaa14361, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0x134bb9b3, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x396b9d2c, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x58163f70, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x1852fed5, __VMLINUX_SYMBOL_STR(ore_put_io_state) },
	{ 0x442a091f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x9ac2e854, __VMLINUX_SYMBOL_STR(ore_write) },
	{ 0xd815526c, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xdc01d8a3, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x3a6cc6de, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x66a1baf3, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_cleanup) },
	{ 0x4d1a779e, __VMLINUX_SYMBOL_STR(osduld_info_lookup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8b93ad44, __VMLINUX_SYMBOL_STR(pnfs_generic_sync) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c2c6fb7, __VMLINUX_SYMBOL_STR(ore_check_io) },
	{ 0xd6b355ab, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x850ef5a1, __VMLINUX_SYMBOL_STR(xdr_init_decode) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0xb5b1edbf, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x8458f70b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x7b4bf46f, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x28806871, __VMLINUX_SYMBOL_STR(ore_verify_layout) },
	{ 0x568e5a7b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xf7eaafa7, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x3a983442, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0x3577c6c9, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc5a39bee, __VMLINUX_SYMBOL_STR(nfs_pgio_current_mirror) },
	{ 0x5da76e99, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0xadc405a6, __VMLINUX_SYMBOL_STR(ore_get_rw_state) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb6aa78a0, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0x26e2714c, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x680cbdc4, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xa8f070ee, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x334b617c, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x9813a3a1, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0xccbd81f6, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libore,osd";

