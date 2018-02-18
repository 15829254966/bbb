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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc8ed5ccd, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x6c11a182, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3aa82f1, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x78f61d7, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0xf1c54064, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x7ff35e2b, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0xecb1e2e5, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3915fa63, __VMLINUX_SYMBOL_STR(udp_set_csum) },
	{ 0x3fbe63dc, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

