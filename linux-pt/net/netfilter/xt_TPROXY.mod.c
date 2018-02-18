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
	{ 0xc1a25988, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xcf622f71, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0xe2323d0a, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x9118cc8f, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0x371179d7, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd16b11, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0xa837bc7b, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0xbc79db06, __VMLINUX_SYMBOL_STR(inet_twsk_deschedule_put) },
	{ 0xff4a2133, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0xee9c3647, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0xbf842eae, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x8ed7d3dc, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe067b136, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x5c39451a, __VMLINUX_SYMBOL_STR(sock_edemux) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1883333f, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefbcdd36, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_defrag_ipv6,nf_defrag_ipv4";

