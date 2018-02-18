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
	{ 0x7ed26f9e, __VMLINUX_SYMBOL_STR(nft_unregister_set) },
	{ 0x683d2189, __VMLINUX_SYMBOL_STR(nft_register_set) },
	{ 0x7ffdefe3, __VMLINUX_SYMBOL_STR(nft_set_gc_batch_alloc) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xbf63bb61, __VMLINUX_SYMBOL_STR(nft_set_gc_batch_release) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe06b8fb7, __VMLINUX_SYMBOL_STR(rhashtable_insert_slow) },
	{ 0x2b443c02, __VMLINUX_SYMBOL_STR(rhashtable_insert_rehash) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4b60a524, __VMLINUX_SYMBOL_STR(rhashtable_init) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3d83b6c2, __VMLINUX_SYMBOL_STR(rhashtable_walk_exit) },
	{ 0x4d7939c3, __VMLINUX_SYMBOL_STR(rhashtable_walk_stop) },
	{ 0x4e4626ae, __VMLINUX_SYMBOL_STR(rhashtable_walk_next) },
	{ 0xcf00bee3, __VMLINUX_SYMBOL_STR(rhashtable_walk_start) },
	{ 0x54d02c4f, __VMLINUX_SYMBOL_STR(rhashtable_walk_init) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x61379e88, __VMLINUX_SYMBOL_STR(nft_set_elem_destroy) },
	{ 0x4814ae93, __VMLINUX_SYMBOL_STR(rhashtable_free_and_destroy) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";

