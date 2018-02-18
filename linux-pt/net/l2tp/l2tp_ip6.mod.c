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
	{ 0x7af6ec86, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x475adf, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0xb85db57, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0xca8db2c8, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0x5649e45a, __VMLINUX_SYMBOL_STR(l2tp_ioctl) },
	{ 0xc4ef99f8, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x267cb8a7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xb6f3a8cc, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x9dbb75dc, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x3a6add0e, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xa508c5e1, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x6f9c94c6, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x21660bc1, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xaa51df24, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0x80f54c49, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xf5ff3fe6, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x4c504b72, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xb490ae47, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0xd3bbafc0, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0xbe7055b, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0x76c51e39, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0xb1d96cae, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0x552b0d28, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xfb9b61db, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0x98686048, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0x71314b04, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe809ee90, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xd170a69b, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x6f3634f5, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x7c50a3a0, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0xa31a63db, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0xb8f7088f, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x99319c25, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0x6a13def7, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf637383d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xe00ad468, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2bf29edb, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xc7395659, __VMLINUX_SYMBOL_STR(ip6_datagram_connect) },
	{ 0x53462a34, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0xbf842eae, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xfaeea474, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0x9649671c, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0xc54872f1, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0xc4277f66, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x52bf852d, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0x655def08, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0xb362b26c, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0x87f58ea9, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0x83caeed5, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x858563a5, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xc4ae420f, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0x58d5c747, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0xb803321b, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x8e6ac278, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0xc2a7502f, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0xffb74af4, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x463d24ea, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x157e6d20, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0xa5b66b32, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0x6f746835, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0xf57a93af, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x4739f52a, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0x6106fd2a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x306230c0, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_ip,l2tp_core";


MODULE_INFO(srcversion, "AFDC8F7B62FD5650B031B28");
