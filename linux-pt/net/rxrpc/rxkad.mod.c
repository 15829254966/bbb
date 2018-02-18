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
	{ 0x331cb93d, __VMLINUX_SYMBOL_STR(rxrpc_unregister_security) },
	{ 0x7dc6bd92, __VMLINUX_SYMBOL_STR(rxrpc_register_security) },
	{ 0xe809ee90, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xe159deea, __VMLINUX_SYMBOL_STR(rxrpc_get_server_data_key) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8a2d86f5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xdd1dc93a, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe067b136, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x9fc270b8, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xe29ebb6, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0x64c72835, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xdd27fa87, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0xb6e009b6, __VMLINUX_SYMBOL_STR(key_validate) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd2d5ed59, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af-rxrpc";

