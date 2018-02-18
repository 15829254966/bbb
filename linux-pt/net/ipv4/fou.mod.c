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
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd6a508ac, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xab980f3a, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xb7f6eb14, __VMLINUX_SYMBOL_STR(udp_add_offload) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcf4a0e77, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x305ca308, __VMLINUX_SYMBOL_STR(inet6_offloads) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x97970ee7, __VMLINUX_SYMBOL_STR(udp_sock_create6) },
	{ 0xe809ee90, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x61016b0a, __VMLINUX_SYMBOL_STR(udp_tunnel_sock_release) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2a637b4, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_del_ops) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcbddb60e, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0xbc9363c6, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x2a6e11fc, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x967c2f4e, __VMLINUX_SYMBOL_STR(udp_del_offload) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9215d24d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x303041c6, __VMLINUX_SYMBOL_STR(udp_flow_hashrnd) },
	{ 0xfaeb5c49, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x3911c6a7, __VMLINUX_SYMBOL_STR(inet_offloads) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3915fa63, __VMLINUX_SYMBOL_STR(udp_set_csum) },
	{ 0x3f0debd2, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xaef685ab, __VMLINUX_SYMBOL_STR(udp_sock_create4) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x46625f9c, __VMLINUX_SYMBOL_STR(inet_get_local_port_range) },
	{ 0x43d5161b, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_add_ops) },
	{ 0xe9c1a845, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_udp_tunnel,udp_tunnel,ip_tunnel";

