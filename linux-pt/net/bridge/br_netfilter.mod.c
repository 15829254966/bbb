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
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9a44ae93, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xa34c960d, __VMLINUX_SYMBOL_STR(ip_do_fragment) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x83caeed5, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x63310206, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf6329ae9, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x7ffb9dc, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0xe809ee90, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2edcf678, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xf637383d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xacb2aff5, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x8f3b6e7c, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0x8c5d5c43, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0xaa98d634, __VMLINUX_SYMBOL_STR(nf_ipv6_ops) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9215d24d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbfcd224e, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x16cb9ead, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb059d198, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x14bdfad1, __VMLINUX_SYMBOL_STR(nf_br_ops) },
	{ 0x75835068, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xfabafe20, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0x13972bd3, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bridge";

