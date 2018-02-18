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
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x59a034e3, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0x47dbbddd, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x47bc5a73, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0xbf754999, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0xbf8f1fe9, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xd145c52, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x59db5575, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x7e991206, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x5b22d2db, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0xf0270d0e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xb06d6fd3, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x1c23b60f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xe00ad468, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x306230c0, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8f0b2c8c, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb0a2218, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xc4ef99f8, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x267cb8a7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x169b5386, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf3a31033, __VMLINUX_SYMBOL_STR(sock_efree) },
	{ 0x3056b115, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x4c504b72, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x5b584c4b, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb2a67e3, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xb803321b, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x980d7548, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x21660bc1, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xf5ff3fe6, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x6a13def7, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0xbf842eae, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x510f2aab, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xf637383d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x78e69f28, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x5ccd7f6b, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0xc4ab082f, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0xfab242bb, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x80f54c49, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x556426b5, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xf02d1a74, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x4868e84f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa814d4cd, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x404c4afb, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x246e140e, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xa5b66b32, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";

