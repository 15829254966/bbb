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
	{ 0xd6a508ac, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x63a241b4, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x4edfb93d, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x83caeed5, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x6c11a182, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0xcfa41262, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0xafcf1265, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x3c31e96, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x320864b8, __VMLINUX_SYMBOL_STR(__ip_tunnel_change_mtu) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x428f9aaf, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xeaeeb6e0, __VMLINUX_SYMBOL_STR(inetdev_by_index) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe809ee90, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x91c3ca9f, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xe6d4f896, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0xb428c2f6, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0xa1909b7c, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0xd5532591, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcbddb60e, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xd785bd84, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x3fe9bcbd, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xf9f4cf98, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf1c54064, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x8399cdd0, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x95d434d0, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x9d4d1434, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x6657736, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xe93ffab7, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xe255814e, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x774c87ee, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x215c9762, __VMLINUX_SYMBOL_STR(ip_mc_inc_group) },
	{ 0x9215d24d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x4d773f0e, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xda78ebcd, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xfaeb5c49, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x16cb9ead, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x556cf9d0, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0x34c085de, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xe77e5877, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x17ea351e, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x166e1da2, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf88dff7, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0xda389260, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x7bb391f1, __VMLINUX_SYMBOL_STR(ip_mc_dec_group) },
	{ 0xe9c1a845, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
	{ 0x56f2c15d, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre";

