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
	{ 0x6649db75, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0x6c629a88, __VMLINUX_SYMBOL_STR(inet_diag_register) },
	{ 0x29c12a55, __VMLINUX_SYMBOL_STR(inet_diag_bc_sk) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x598cd828, __VMLINUX_SYMBOL_STR(udp_table) },
	{ 0xa0786de, __VMLINUX_SYMBOL_STR(udplite_table) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbc9363c6, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x5bd97bb5, __VMLINUX_SYMBOL_STR(__udp4_lib_lookup) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2177073, __VMLINUX_SYMBOL_STR(inet_sk_diag_fill) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xbf842eae, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xd34f0e0a, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x7dc6aede, __VMLINUX_SYMBOL_STR(__udp6_lib_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";

