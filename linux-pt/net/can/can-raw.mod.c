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
	{ 0x59a034e3, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5b22d2db, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0xf6fd3edd, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf0270d0e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xe00ad468, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x306230c0, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xc4ef99f8, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x267cb8a7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4c504b72, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb803321b, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x21660bc1, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xf5ff3fe6, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x170e3dce, __VMLINUX_SYMBOL_STR(__sock_tx_timestamp) },
	{ 0xbf842eae, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x510f2aab, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xf637383d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x78e69f28, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x5ccd7f6b, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0xc4ab082f, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0xfab242bb, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x80f54c49, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x556426b5, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0xc6f3a04e, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x8286090c, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x404c4afb, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x246e140e, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa5b66b32, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";

