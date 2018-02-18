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
	{ 0x689f370d, __VMLINUX_SYMBOL_STR(frame_vector_to_pages) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3fd2571, __VMLINUX_SYMBOL_STR(vm_unmap_ram) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x52e96379, __VMLINUX_SYMBOL_STR(vb2_destroy_framevec) },
	{ 0x134bb9b3, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x39a0686a, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x29bd9626, __VMLINUX_SYMBOL_STR(dma_buf_detach) },
	{ 0x3f94191a, __VMLINUX_SYMBOL_STR(set_page_dirty_lock) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x442a091f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xab31d65a, __VMLINUX_SYMBOL_STR(vb2_create_framevec) },
	{ 0x97bedac7, __VMLINUX_SYMBOL_STR(dma_buf_vunmap) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x92760190, __VMLINUX_SYMBOL_STR(vm_map_ram) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5652ad55, __VMLINUX_SYMBOL_STR(dma_buf_unmap_attachment) },
	{ 0x8458f70b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x3a29fcf7, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0xcdd158d, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0xbaa5f3a4, __VMLINUX_SYMBOL_STR(split_page) },
	{ 0x568e5a7b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x380fae2c, __VMLINUX_SYMBOL_STR(dma_buf_map_attachment) },
	{ 0x8f4fad72, __VMLINUX_SYMBOL_STR(dma_buf_export) },
	{ 0xc907fa9a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9d87d14a, __VMLINUX_SYMBOL_STR(dma_buf_attach) },
	{ 0xd2508b7d, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x649137df, __VMLINUX_SYMBOL_STR(vb2_common_vm_ops) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0xef631f35, __VMLINUX_SYMBOL_STR(sg_alloc_table_from_pages) },
	{ 0x9cd60539, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9f48322b, __VMLINUX_SYMBOL_STR(dma_buf_vmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-memops";

