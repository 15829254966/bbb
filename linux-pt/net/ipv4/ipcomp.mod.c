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
	{ 0x42bd65de, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0xb6f3a6b3, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x5a71946e, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xdddb2ab2, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0xabee3afd, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x5c11be01, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x31ebbbfc, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x7a0dcaa7, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0x7d0b4a83, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xf80672da, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x63e47fa9, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
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
"depends=xfrm_ipcomp";

