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
	{ 0x121015c3, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x12dd09a2, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x591448e8, __VMLINUX_SYMBOL_STR(fc_fc4_register_provider) },
	{ 0xcd5e4323, __VMLINUX_SYMBOL_STR(fc_lport_iterate) },
	{ 0x1b2240ce, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x1b3cc295, __VMLINUX_SYMBOL_STR(percpu_ida_free) },
	{ 0xc07de430, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0x8e1d3c9f, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9402a6a5, __VMLINUX_SYMBOL_STR(scsilun_to_int) },
	{ 0x67b6677c, __VMLINUX_SYMBOL_STR(target_submit_cmd) },
	{ 0x2c66ff04, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_unregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xb1b4b3c6, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xb051d8a3, __VMLINUX_SYMBOL_STR(_fc_frame_alloc) },
	{ 0x6aac9ed2, __VMLINUX_SYMBOL_STR(fc_fill_reply_hdr) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x84f0a87d, __VMLINUX_SYMBOL_STR(transport_deregister_session_configfs) },
	{ 0x782bfa92, __VMLINUX_SYMBOL_STR(fc_fc4_deregister_provider) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xd0c6f8b, __VMLINUX_SYMBOL_STR(transport_init_session_tags) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xd107a0a9, __VMLINUX_SYMBOL_STR(fc_frame_alloc_fill) },
	{ 0xc3a20356, __VMLINUX_SYMBOL_STR(percpu_ida_alloc) },
	{ 0xccb2439f, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x1f09b2b9, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7d518fdd, __VMLINUX_SYMBOL_STR(transport_register_session) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xbbd47a36, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_register) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9568a065, __VMLINUX_SYMBOL_STR(fc_lport_notifier_head) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbd78e580, __VMLINUX_SYMBOL_STR(target_submit_tmr) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xcedb2ff2, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,libfc";

