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
	{ 0x36bc56c0, __VMLINUX_SYMBOL_STR(ip6_tnl_get_link_net) },
	{ 0x1964a90e, __VMLINUX_SYMBOL_STR(ip6_tnl_get_iflink) },
	{ 0x63a241b4, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x6657736, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xcbddb60e, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xc824c0b3, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xe77e5877, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xac8465bf, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0xd6a508ac, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xcea3c5a6, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x9ef64cee, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x849f1af7, __VMLINUX_SYMBOL_STR(ip6_tnl_rcv_ctl) },
	{ 0x6f3634f5, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xf093d137, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x929da45d, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xe6c8e94, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x1dc23e75, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x7c62d042, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x111ebd69, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0xcfa41262, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0xd417a051, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0xfca8a573, __VMLINUX_SYMBOL_STR(ip6_tnl_xmit_ctl) },
	{ 0xbe7fbcfd, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x83caeed5, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xc68941ff, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x360eb4d7, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x70495a98, __VMLINUX_SYMBOL_STR(ip6_tnl_dst_reset) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x83ad774f, __VMLINUX_SYMBOL_STR(ip6_tnl_get_cap) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa92f77f, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3fe9bcbd, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x82c0f4db, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x71e7d59a, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tunnel";

