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
	{ 0xa401bf14, __VMLINUX_SYMBOL_STR(l2tp_session_delete) },
	{ 0x25969ee9, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0xb0a2218, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x4868e84f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x267cb8a7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x78e69f28, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x21660bc1, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x9c467d5a, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0x80f54c49, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xf5ff3fe6, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x4c504b72, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xb2a67e3, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x337f2432, __VMLINUX_SYMBOL_STR(l2tp_nl_unregister_ops) },
	{ 0xcbddb60e, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x552b0d28, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0xd644724, __VMLINUX_SYMBOL_STR(l2tp_nl_register_ops) },
	{ 0xc7558443, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0x71314b04, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xd6a508ac, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xf6643f44, __VMLINUX_SYMBOL_STR(l2tp_session_set_header_len) },
	{ 0xa70112c, __VMLINUX_SYMBOL_STR(l2tp_session_get_nth) },
	{ 0x6f9c94c6, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xa6ad0d45, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xf02d1a74, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xdf7b30d2, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0x389207a0, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x6770e212, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x67d435fd, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x1c23b60f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xb5a6cf6f, __VMLINUX_SYMBOL_STR(l2tp_session_queue_purge) },
	{ 0x565b48df, __VMLINUX_SYMBOL_STR(__l2tp_session_unhash) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xa5cfdcde, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0x2af7cec0, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0x41b8440c, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0x858563a5, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xb803321b, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe809ee90, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x83caeed5, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x64a7c272, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe00ad468, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xe19a9b0b, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xcd230ca0, __VMLINUX_SYMBOL_STR(ppp_dev_name) },
	{ 0x9215d24d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71eadc24, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0xf0270d0e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb48bbe87, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x6106fd2a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x306230c0, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbc3f15e1, __VMLINUX_SYMBOL_STR(l2tp_udp_encap_recv) },
	{ 0xeb1f57bc, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xed53289c, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xbf842eae, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaf16d0e9, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0xb8f7088f, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x7c50a3a0, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core,pppox,l2tp_netlink,ppp_generic";


MODULE_INFO(srcversion, "45AEC9821ECD9E0DB5EF8EA");
