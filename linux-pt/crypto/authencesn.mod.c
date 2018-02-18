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
	{ 0xcb2273a3, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x50a84a, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x5698c26a, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0x376bf888, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe6653b78, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb10f6d18, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0xfc8addab, __VMLINUX_SYMBOL_STR(crypto_init_ahash_spawn) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x7057b95d, __VMLINUX_SYMBOL_STR(ahash_attr_alg) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x5673cb12, __VMLINUX_SYMBOL_STR(crypto_get_default_null_skcipher) },
	{ 0xbad6b5b1, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x607900fe, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x21cd536a, __VMLINUX_SYMBOL_STR(crypto_put_default_null_skcipher) },
	{ 0xd2d5ed59, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x36c5945e, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x587ef278, __VMLINUX_SYMBOL_STR(crypto_authenc_extractkeys) },
	{ 0x8eb9ad17, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x607f18e2, __VMLINUX_SYMBOL_STR(scatterwalk_ffwd) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xf40b2297, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0x91dda801, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=authenc";

