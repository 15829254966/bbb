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
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe988598b, __VMLINUX_SYMBOL_STR(sock_diag_put_meminfo) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x46aacb3f, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x31955627, __VMLINUX_SYMBOL_STR(sock_diag_unregister) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8f0b2c8c, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xde96aa15, __VMLINUX_SYMBOL_STR(sock_diag_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbc9363c6, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa9c8db59, __VMLINUX_SYMBOL_STR(sock_diag_unregister_inet_compat) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7a98a2cc, __VMLINUX_SYMBOL_STR(inet6_lookup) },
	{ 0xefbcdd36, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd34f0e0a, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x37f8f2d0, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe2323d0a, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x2167db87, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x8dcef80c, __VMLINUX_SYMBOL_STR(sock_diag_register_inet_compat) },
	{ 0x8e3b16e9, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xab6a94e5, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0xc5bfdf02, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x9118cc8f, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

