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
	{ 0xa2db3c7f, __VMLINUX_SYMBOL_STR(nft_reject_policy) },
	{ 0xd24e8ec3, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0xc9079f8, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0xfbdafd7b, __VMLINUX_SYMBOL_STR(nf_reject_ip6_tcphdr_put) },
	{ 0x17a8853e, __VMLINUX_SYMBOL_STR(nf_reject_ip6_tcphdr_get) },
	{ 0x91d89397, __VMLINUX_SYMBOL_STR(nf_reject_ip_tcphdr_put) },
	{ 0xf8777b07, __VMLINUX_SYMBOL_STR(nf_reject_ip_tcphdr_get) },
	{ 0xddf15889, __VMLINUX_SYMBOL_STR(nft_reject_icmp_code) },
	{ 0xf9cb15e7, __VMLINUX_SYMBOL_STR(nft_bridge_ip6hdr_validate) },
	{ 0xe8cdab4e, __VMLINUX_SYMBOL_STR(nft_reject_icmpv6_code) },
	{ 0xc3a5e02c, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x8b24d3e9, __VMLINUX_SYMBOL_STR(nf_reject_ip6hdr_put) },
	{ 0xd63e8f16, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xb059d198, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xe809ee90, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xa73cf507, __VMLINUX_SYMBOL_STR(br_deliver) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xda61b120, __VMLINUX_SYMBOL_STR(nf_reject_iphdr_put) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x63da485a, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xa2e49171, __VMLINUX_SYMBOL_STR(nft_bridge_iphdr_validate) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5778f241, __VMLINUX_SYMBOL_STR(nft_chain_validate_hooks) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_reject,nf_tables,nf_reject_ipv6,nf_reject_ipv4,nf_tables_bridge,bridge";

