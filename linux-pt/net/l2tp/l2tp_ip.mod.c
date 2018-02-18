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
	{ 0x858563a5, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x7c50a3a0, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x84a83697, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7af6ec86, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x6c5e92d1, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0x6e0104d7, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0x83caeed5, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xb8f7088f, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0xa31a63db, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0xf0270d0e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe00ad468, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x306230c0, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9dbb75dc, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x7c67d734, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0x2bf29edb, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xb490ae47, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0xb6f3a8cc, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xc4ef99f8, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xe809ee90, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x267cb8a7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc2a24597, __VMLINUX_SYMBOL_STR(ip4_datagram_connect) },
	{ 0x4c504b72, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x6f746835, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x6106fd2a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xc2a7502f, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x79e89bcb, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0xb803321b, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x21660bc1, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf5ff3fe6, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xbf842eae, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x6f9c94c6, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x68e447fb, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0xf57a93af, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x787cd477, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x475adf, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0x2f96993b, __VMLINUX_SYMBOL_STR(ip_cmsg_recv_offset) },
	{ 0x71314b04, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xb43b38e3, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0x1adc358d, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x80f54c49, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x552b0d28, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xd170a69b, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x16cb9ead, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xa508c5e1, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6f3634f5, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x53462a34, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0x8f53584d, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9649671c, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x16fdd531, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0x3a6add0e, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb48bbe87, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x57fd2efa, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x71fff12d, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0xa5b66b32, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "D5E9927356B1025D57A1F1B");
