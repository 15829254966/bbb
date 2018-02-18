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
	{ 0xc0ef488c, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0xdb118384, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0xe2323d0a, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x9118cc8f, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0x371179d7, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7a98a2cc, __VMLINUX_SYMBOL_STR(inet6_lookup) },
	{ 0xee9c3647, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x8ed7d3dc, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0xd63e8f16, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe067b136, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x1883333f, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0xefbcdd36, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_defrag_ipv6,nf_defrag_ipv4";

