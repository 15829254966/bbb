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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd94a46d8, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf1deabf2, __VMLINUX_SYMBOL_STR(div64_u64) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xf54bd49b, __VMLINUX_SYMBOL_STR(lcm) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xcf544607, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0x189452b4, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0x442a091f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x28971c, __VMLINUX_SYMBOL_STR(osd_req_remove_object) },
	{ 0x7d7cc946, __VMLINUX_SYMBOL_STR(osd_req_read_sg) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x76ac3c06, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xb1b4b3c6, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf42ae607, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0xcd42cc34, __VMLINUX_SYMBOL_STR(osd_req_write_kern) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x27c87ea5, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0xb81cd317, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0x8458f70b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xb4ccb20c, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x568e5a7b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x8fa36770, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc35e6506, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0x6e36d4fc, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0x536622b1, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0x7bec4580, __VMLINUX_SYMBOL_STR(osd_req_create_object) },
	{ 0xae1bfe6e, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0x4dd4cb7a, __VMLINUX_SYMBOL_STR(osd_req_set_attributes) },
	{ 0xc0ea648a, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0xe4f5a8a1, __VMLINUX_SYMBOL_STR(async_gen_syndrome) },
	{ 0x52b60af9, __VMLINUX_SYMBOL_STR(osd_req_add_set_attr_list) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e6e97b, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xe5368b1c, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x47fd624e, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,async_xor,async_pq";

