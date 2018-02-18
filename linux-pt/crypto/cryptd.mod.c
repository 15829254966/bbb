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
	{ 0xf506eec0, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcde5a8f, __VMLINUX_SYMBOL_STR(ahash_register_instance) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb63a5c52, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0x376bf888, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x19183544, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0xc861b8a6, __VMLINUX_SYMBOL_STR(crypto_dequeue_request) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x1b45332a, __VMLINUX_SYMBOL_STR(shash_ahash_digest) },
	{ 0xcb2273a3, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x425cd027, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xecdf0928, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0xbad6b5b1, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x1f5d6846, __VMLINUX_SYMBOL_STR(shash_ahash_finup) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xbda965ed, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x50a84a, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x42956e7e, __VMLINUX_SYMBOL_STR(crypto_register_instance) },
	{ 0x1e627be0, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x499043d3, __VMLINUX_SYMBOL_STR(crypto_init_queue) },
	{ 0xe6653b78, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x9ac1dc76, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x57c6e382, __VMLINUX_SYMBOL_STR(crypto_enqueue_request) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7c62d042, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xd2d5ed59, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x2ce98559, __VMLINUX_SYMBOL_STR(kcrypto_wq) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x3741b29e, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xd22f7ecf, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x607900fe, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0xc8e06f02, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6dafe30a, __VMLINUX_SYMBOL_STR(shash_ahash_update) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xdd1dc93a, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x5698c26a, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0xa6058671, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

