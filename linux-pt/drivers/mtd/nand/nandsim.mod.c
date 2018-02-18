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
	{ 0x63ee3422, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x1e1d4773, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x72aedf9c, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xb21fc627, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0xce72a984, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x59db5575, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xb0a2218, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x4868e84f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xb7ac185b, __VMLINUX_SYMBOL_STR(nand_release) },
	{ 0x7d1959bb, __VMLINUX_SYMBOL_STR(mtd_device_parse_register) },
	{ 0x8f1d9444, __VMLINUX_SYMBOL_STR(mtd_block_markbad) },
	{ 0x2a5a9212, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x3b0a0b53, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x5144108d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x3672ca8c, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x5c55794b, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x7170f631, __VMLINUX_SYMBOL_STR(nand_scan_tail) },
	{ 0x57eb7a84, __VMLINUX_SYMBOL_STR(nand_scan_ident) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3621cbb8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xff7d2601, __VMLINUX_SYMBOL_STR(kernel_write) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x9f69bfc7, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xbb53c6ea, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x7621ab43, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x9f903279, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x47dbbddd, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x5e866d85, __VMLINUX_SYMBOL_STR(prandom_bytes) },
	{ 0x26e2714c, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x95c138db, __VMLINUX_SYMBOL_STR(write_inode_now) },
	{ 0xb5b1edbf, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x396b9d2c, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

