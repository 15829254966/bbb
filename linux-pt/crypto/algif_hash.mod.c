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
	{ 0x267cb8a7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xd145c52, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xbf8f1fe9, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x78e69f28, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x21660bc1, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x889fd594, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0x4158f267, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0xb06d6fd3, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x4c504b72, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x8286090c, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xb2a67e3, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xfb37c79e, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0x48210d6e, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0x39576250, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0xa6058671, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd2d5ed59, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x36c5945e, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8847ed59, __VMLINUX_SYMBOL_STR(af_alg_complete) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x654d393, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0xacccb173, __VMLINUX_SYMBOL_STR(af_alg_release_parent) },
	{ 0x1c3c0731, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0x10ea07a6, __VMLINUX_SYMBOL_STR(sock_kzfree_s) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xba3a42e6, __VMLINUX_SYMBOL_STR(af_alg_accept) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x4e3cf6c, __VMLINUX_SYMBOL_STR(af_alg_make_sg) },
	{ 0x72926c98, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x1385d134, __VMLINUX_SYMBOL_STR(af_alg_free_sg) },
	{ 0x404c4afb, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x81d9a3f9, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0x8eb9ad17, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x6ead4c74, __VMLINUX_SYMBOL_STR(af_alg_wait_for_completion) },
	{ 0xe78123b, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbf842eae, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x858563a5, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xb803321b, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";

