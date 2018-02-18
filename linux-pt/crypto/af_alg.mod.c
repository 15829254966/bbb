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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xeb1f57bc, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x6a112424, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd145c52, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x889fd594, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xb06d6fd3, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x4158f267, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf2415352, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xc4ef99f8, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xe06141e9, __VMLINUX_SYMBOL_STR(security_sk_clone) },
	{ 0x267cb8a7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xd419cb92, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0x76ac3c06, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4c504b72, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xed53289c, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xb803321b, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x82fafbdd, __VMLINUX_SYMBOL_STR(iov_iter_get_pages) },
	{ 0x21660bc1, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xbf842eae, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x36ad0865, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x8f538c1b, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x78e69f28, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x71314b04, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xba5f17c9, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x552b0d28, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x654d393, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8286090c, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x88043a6c, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0x26e2714c, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x10ea07a6, __VMLINUX_SYMBOL_STR(sock_kzfree_s) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x97f26326, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xda10ec3, __VMLINUX_SYMBOL_STR(security_sock_graft) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

