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
	{ 0x45072cd, __VMLINUX_SYMBOL_STR(nf_ct_port_nla_policy) },
	{ 0x3f5b1415, __VMLINUX_SYMBOL_STR(nf_ct_port_nlattr_to_tuple) },
	{ 0x62813e5c, __VMLINUX_SYMBOL_STR(nf_ct_port_nlattr_tuple_size) },
	{ 0xba2f6266, __VMLINUX_SYMBOL_STR(nf_ct_port_tuple_to_nlattr) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x1885258d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xd986c071, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x9af512db, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x5fd9b2f, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xf6573e62, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x26769949, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0xa657333a, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0x61d4af79, __VMLINUX_SYMBOL_STR(nf_afinfo) },
	{ 0xeae180fb, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xe067b136, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";
