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
	{ 0xcf7a114c, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x5775cb48, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0xdddb2ab2, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0xabee3afd, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x5c11be01, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x31ebbbfc, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3741b29e, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x9ac1dc76, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0xd22f7ecf, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x47c2b6f7, __VMLINUX_SYMBOL_STR(pskb_put) },
	{ 0xe809ee90, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x9fc270b8, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xe29ebb6, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xd2d5ed59, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xb49a3246, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb059d198, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xef72dc31, __VMLINUX_SYMBOL_STR(km_new_mapping) },
	{ 0xe067b136, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xec37c6f1, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xafcf1265, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x929da45d, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x774c87ee, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x1dc23e75, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";

