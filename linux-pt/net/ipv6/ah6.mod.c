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
	{ 0x9ef64cee, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0xb515750a, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0xc824c0b3, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xabee3afd, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xac8465bf, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x31ebbbfc, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x36c5945e, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0xa6058671, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2d5ed59, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xe809ee90, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x9215d24d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xb49a3246, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8eb9ad17, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x8a2d86f5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xa810ea21, __VMLINUX_SYMBOL_STR(skb_to_sgvec_nomark) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe29ebb6, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xec37c6f1, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf093d137, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x929da45d, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xe6c8e94, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x1dc23e75, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";

