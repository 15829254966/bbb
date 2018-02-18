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
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xe714cd0b, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xd10e1967, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x25211a45, __VMLINUX_SYMBOL_STR(__bio_clone_fast) },
	{ 0x2dd852c1, __VMLINUX_SYMBOL_STR(bio_init) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xce671413, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x84385da, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xcc628c25, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x6a037cf1, __VMLINUX_SYMBOL_STR(mempool_kfree) },
	{ 0xa05c03df, __VMLINUX_SYMBOL_STR(mempool_kmalloc) },
	{ 0x6ed90743, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x46d9ab4b, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x87ccb6c3, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xa16ddca6, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x2374391e, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x2fb583df, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xcabcb30f, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8f8f2aef, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

