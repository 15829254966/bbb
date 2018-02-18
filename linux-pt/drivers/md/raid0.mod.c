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
	{ 0x4ea533de, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xda56c4a5, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xd10e1967, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xcabcb30f, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x73f8293b, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xd91d851a, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x2374391e, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xeefb9277, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xce671413, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x84385da, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x6ed90743, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x96e2b7c2, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x5a2302b1, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x73a005d9, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x90d3885a, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x782973e1, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x46d9ab4b, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x8f8f2aef, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

