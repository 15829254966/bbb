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
	{ 0xeb1f57bc, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x6a112424, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x64c72835, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x8165de8a, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbf8f1fe9, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xd145c52, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x1829d188, __VMLINUX_SYMBOL_STR(wait_woken) },
	{ 0xcc836451, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xb06d6fd3, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x72fc0d16, __VMLINUX_SYMBOL_STR(bt_sock_register) },
	{ 0x4ac6f695, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x4158f267, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xf2415352, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0xe809ee90, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x267cb8a7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xd419cb92, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0x9d033bef, __VMLINUX_SYMBOL_STR(bt_sock_unlink) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcadde1c9, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x4c504b72, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xd3fac4ce, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xed53289c, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x80de048, __VMLINUX_SYMBOL_STR(l2cap_is_socket) },
	{ 0xb2a67e3, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcc1fb551, __VMLINUX_SYMBOL_STR(baswap) },
	{ 0x3fe9bcbd, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xcea3c5a6, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x21660bc1, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xf5ff3fe6, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xbf842eae, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x8fea24bd, __VMLINUX_SYMBOL_STR(bt_sock_unregister) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x36ad0865, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xf637383d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x8f538c1b, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x2e064e03, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x78e69f28, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x92875f1c, __VMLINUX_SYMBOL_STR(bt_sock_link) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x5778981e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xa6ffec60, __VMLINUX_SYMBOL_STR(woken_wake_function) },
	{ 0x71314b04, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x552b0d28, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xfa92f77f, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x66a0ab4, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x95add812, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0xfb0a0a24, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x4d773f0e, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x3454a49f, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x8286090c, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x34c085de, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x76d9bf11, __VMLINUX_SYMBOL_STR(crc32_be) },
	{ 0x88043a6c, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0xdf8016b, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x135687f9, __VMLINUX_SYMBOL_STR(bt_procfs_init) },
	{ 0xfb53097a, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x6b38aa60, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7ade58c9, __VMLINUX_SYMBOL_STR(bt_procfs_cleanup) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "F31AF5B70DF46CBE1903A66");
