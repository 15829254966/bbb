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
	{ 0x82c0f4db, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9eaecd37, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xf91ced97, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb6b03d29, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xe8c1d491, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x2d187f14, __VMLINUX_SYMBOL_STR(__dev_forward_skb) },
	{ 0x9c3d8f8d, __VMLINUX_SYMBOL_STR(dev_mc_add_excl) },
	{ 0xc9de8292, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0x5018d53b, __VMLINUX_SYMBOL_STR(dev_uc_add_excl) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf6fd3edd, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x87188126, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x637e22bc, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xc6e7222b, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc16b16ef, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0x19bd0891, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x3c274739, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x2aeecf72, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xcadde1c9, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xa7bb7fcb, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x38022b5f, __VMLINUX_SYMBOL_STR(ip_check_defrag) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc9ce651, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x8e975c0f, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0xdaf499ea, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0x3fe9bcbd, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x983b3682, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x9ae1e5ad, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x3223fe07, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_dump) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xb55626c, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x6657736, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x83284c4b, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x4cfdf325, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7c62d042, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfe613c12, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0xf5d33a4e, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb55e8d34, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0xea69515, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0x4d773f0e, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xe432070, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x71e7d59a, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x34c085de, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x52a20aca, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7f2ad1d1, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0xe77e5877, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xa5a18c16, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x7767ce67, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xef9d84c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xac8231dd, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x5e79105a, __VMLINUX_SYMBOL_STR(dev_queue_xmit_accel) },
	{ 0x5ecc278c, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x35488d02, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
	{ 0xf4d58607, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

