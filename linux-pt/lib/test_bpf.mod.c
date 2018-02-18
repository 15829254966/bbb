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
	{ 0x3a6cc6de, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x63ee3422, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x8458f70b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x75ae7ae4, __VMLINUX_SYMBOL_STR(bpf_prog_destroy) },
	{ 0xcbc01417, __VMLINUX_SYMBOL_STR(bpf_prog_free) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x568e5a7b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xc035bde6, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0x91f5e473, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x2efd09c6, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x442a091f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x9db27e16, __VMLINUX_SYMBOL_STR(bpf_prog_select_runtime) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x57cb2950, __VMLINUX_SYMBOL_STR(bpf_prog_alloc) },
	{ 0xf9cc4662, __VMLINUX_SYMBOL_STR(bpf_prog_create) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x33c7435c, __VMLINUX_SYMBOL_STR(prandom_u32_state) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x34a6fa23, __VMLINUX_SYMBOL_STR(__bpf_call_base) },
	{ 0x6f7e5c91, __VMLINUX_SYMBOL_STR(bpf_skb_vlan_pop_proto) },
	{ 0xe4c511c3, __VMLINUX_SYMBOL_STR(bpf_skb_vlan_push_proto) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

