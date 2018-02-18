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
	{ 0x6770e212, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7c50a3a0, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x2b9da7a4, __VMLINUX_SYMBOL_STR(genl_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xab980f3a, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0xb8f7088f, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xcf4a0e77, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbc9363c6, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x35dc024a, __VMLINUX_SYMBOL_STR(l2tp_session_find_by_ifname) },
	{ 0x2af7cec0, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0xdf7b30d2, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xa70112c, __VMLINUX_SYMBOL_STR(l2tp_session_get_nth) },
	{ 0x2d140a58, __VMLINUX_SYMBOL_STR(genl_unlock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x295ffa87, __VMLINUX_SYMBOL_STR(genlmsg_multicast_allns) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3f0debd2, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xcddb3c8e, __VMLINUX_SYMBOL_STR(l2tp_tunnel_delete) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xf6643f44, __VMLINUX_SYMBOL_STR(l2tp_session_set_header_len) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "F7BC636540087C480DCE848");
