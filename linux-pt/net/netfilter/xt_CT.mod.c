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
	{ 0xc1a25988, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x323f0077, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0xcf622f71, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x8a25479f, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6d78916b, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0xf1fabd61, __VMLINUX_SYMBOL_STR(nf_ct_timeout_find_get_hook) },
	{ 0x42cdb18d, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x344d9413, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_try_module_get) },
	{ 0x7cc1f9e8, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_free) },
	{ 0x343ceceb, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0xed4a466f, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_alloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xf0efe4d0, __VMLINUX_SYMBOL_STR(nf_ct_timeout_put_hook) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7bd5ea3c, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack";

