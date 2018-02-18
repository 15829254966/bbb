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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x96a75438, __VMLINUX_SYMBOL_STR(xt_unregister_table) },
	{ 0x24c8e482, __VMLINUX_SYMBOL_STR(xt_copy_counters_from_user) },
	{ 0x40728a63, __VMLINUX_SYMBOL_STR(xt_find_revision) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x4f80afe, __VMLINUX_SYMBOL_STR(xt_check_target) },
	{ 0xd87ae60d, __VMLINUX_SYMBOL_STR(xt_check_entry_offsets) },
	{ 0xe8dfef9b, __VMLINUX_SYMBOL_STR(xt_proto_fini) },
	{ 0xd890ecf, __VMLINUX_SYMBOL_STR(xt_table_unlock) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x873e2004, __VMLINUX_SYMBOL_STR(xt_find_table_lock) },
	{ 0x70c9a552, __VMLINUX_SYMBOL_STR(xt_replace_table) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe809ee90, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x78cd1944, __VMLINUX_SYMBOL_STR(xt_proto_init) },
	{ 0x647ce4dc, __VMLINUX_SYMBOL_STR(xt_register_table) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1885258d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xcf622f71, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x807d2b2c, __VMLINUX_SYMBOL_STR(xt_recseq) },
	{ 0xc1a25988, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7c62d042, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xea75495d, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x5fd9b2f, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xeadc6599, __VMLINUX_SYMBOL_STR(xt_request_find_target) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x3ed75223, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x555c3243, __VMLINUX_SYMBOL_STR(xt_alloc_table_info) },
	{ 0xa48b3a97, __VMLINUX_SYMBOL_STR(xt_free_table_info) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";

