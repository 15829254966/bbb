#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbba89470, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x932ece1a, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd94a46d8, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x8a2d86f5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbf9e5182, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x665ee60e, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbf223c10, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0xb4ccb20c, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xada30f58, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0xc2acc033, __VMLINUX_SYMBOL_STR(hex_dump_to_buffer) },
	{ 0xdd08392f, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0xf6a0573a, __VMLINUX_SYMBOL_STR(bio_map_kern) },
	{ 0x6eeb6fe9, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaf5f4620, __VMLINUX_SYMBOL_STR(blk_end_request) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe5368b1c, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0xdff8b485, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

