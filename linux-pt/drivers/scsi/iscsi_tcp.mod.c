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
	{ 0x72aedf9c, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe46d76ba, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0x14c51f1e, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0xc21976d0, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0xfa4059c6, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0xd69514ba, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x93ce7af6, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0x9313621, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x4829a992, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x9331b6d5, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x713f28e3, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0x9632239, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0xd491ff9, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0xabe091c1, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x6e3182f2, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0x2a0e46ac, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0x397f9824, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x4388a3d8, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0xc086dd78, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7aaf9086, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0xf2e38c56, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x3adfea06, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0x68b94920, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0xbeeb55a5, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0x42264568, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0xa5d66efd, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0xe754afa2, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0x2939d29a, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xdd1dc93a, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xd79ba37, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0x10c68600, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0xedb6bd00, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0x48bb2202, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x2130cbfb, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0x59d46d4b, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0xff82c32e, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0x8165de8a, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xf2e26a71, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0x2cdc7453, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe8c239, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0xd2d5ed59, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xbf842eae, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x2e064e03, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xc4ef99f8, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xa1b2848b, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0x92427a87, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x7c87de90, __VMLINUX_SYMBOL_STR(kernel_getpeername) },
	{ 0x1cacb58, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0xe2b6c0fd, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xe9a223c3, __VMLINUX_SYMBOL_STR(kernel_getsockname) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x42339cfc, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_get_stats) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd801b68, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_unmap) },
	{ 0x64c72835, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x3b156b43, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_done) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x12bfa339, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3b8c261e, __VMLINUX_SYMBOL_STR(iscsi_segment_seek_sg) },
	{ 0xc30de847, __VMLINUX_SYMBOL_STR(iscsi_segment_init_linear) },
	{ 0x48db6422, __VMLINUX_SYMBOL_STR(iscsi_tcp_dgst_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x46f6669, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp,scsi_transport_iscsi";

