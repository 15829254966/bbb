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
	{ 0xa755a817, __VMLINUX_SYMBOL_STR(xfrm_unregister_km) },
	{ 0x1885258d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x77eb267f, __VMLINUX_SYMBOL_STR(xfrm_register_km) },
	{ 0x5fd9b2f, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x45e04620, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_add) },
	{ 0x60fde443, __VMLINUX_SYMBOL_STR(xfrm_policy_insert) },
	{ 0xe349ca67, __VMLINUX_SYMBOL_STR(km_query) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8db90bd7, __VMLINUX_SYMBOL_STR(xfrm_state_add) },
	{ 0x3cdab986, __VMLINUX_SYMBOL_STR(xfrm_audit_state_add) },
	{ 0xe10d33f2, __VMLINUX_SYMBOL_STR(xfrm_state_update) },
	{ 0x4d2b4db2, __VMLINUX_SYMBOL_STR(xfrm_init_replay) },
	{ 0x27866435, __VMLINUX_SYMBOL_STR(security_xfrm_state_alloc) },
	{ 0x76f59ec1, __VMLINUX_SYMBOL_STR(__xfrm_init_state) },
	{ 0x3bf471d7, __VMLINUX_SYMBOL_STR(xfrm_calg_get_byname) },
	{ 0x47b34e60, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byname) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x60b73277, __VMLINUX_SYMBOL_STR(xfrm_aead_get_byname) },
	{ 0xf80672da, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x1f56774b, __VMLINUX_SYMBOL_STR(xfrm_state_delete) },
	{ 0xc599a772, __VMLINUX_SYMBOL_STR(security_xfrm_state_delete) },
	{ 0xbaa3c58a, __VMLINUX_SYMBOL_STR(xfrm_state_lookup_byaddr) },
	{ 0x926c5c6e, __VMLINUX_SYMBOL_STR(xfrm_sad_getinfo) },
	{ 0xd1ab90e0, __VMLINUX_SYMBOL_STR(xfrm_spd_getinfo) },
	{ 0x8345e035, __VMLINUX_SYMBOL_STR(xfrm_find_acq_byseq) },
	{ 0xb8bf7796, __VMLINUX_SYMBOL_STR(xfrm_alloc_spi) },
	{ 0x8de6f87c, __VMLINUX_SYMBOL_STR(xfrm_find_acq) },
	{ 0xf10526ac, __VMLINUX_SYMBOL_STR(verify_spi_info) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xbb5d343d, __VMLINUX_SYMBOL_STR(xfrm_get_acqseq) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf6d2fc6f, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0x20b7f065, __VMLINUX_SYMBOL_STR(xfrm_policy_alloc) },
	{ 0x4d10b0ca, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0xbbe8b817, __VMLINUX_SYMBOL_STR(xfrm_state_walk) },
	{ 0x83b009ea, __VMLINUX_SYMBOL_STR(xfrm_state_walk_init) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xc5bfdf02, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0xf2d81e1d, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
	{ 0x562011dd, __VMLINUX_SYMBOL_STR(xfrm_state_walk_done) },
	{ 0x365d66f2, __VMLINUX_SYMBOL_STR(xfrm_policy_walk) },
	{ 0xe5ed5467, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_init) },
	{ 0xe2b775e3, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_done) },
	{ 0x133515c7, __VMLINUX_SYMBOL_STR(xfrm_audit_state_delete) },
	{ 0x958f86a7, __VMLINUX_SYMBOL_STR(__xfrm_state_delete) },
	{ 0x1c8121b5, __VMLINUX_SYMBOL_STR(km_state_expired) },
	{ 0x6787cfca, __VMLINUX_SYMBOL_STR(xfrm_policy_destroy) },
	{ 0xa9c63b69, __VMLINUX_SYMBOL_STR(security_xfrm_policy_free) },
	{ 0x36ae091a, __VMLINUX_SYMBOL_STR(xfrm_policy_bysel_ctx) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x3ded0b4f, __VMLINUX_SYMBOL_STR(km_policy_expired) },
	{ 0x7418c26f, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_delete) },
	{ 0xd50d6276, __VMLINUX_SYMBOL_STR(xfrm_policy_delete) },
	{ 0x9617df0d, __VMLINUX_SYMBOL_STR(xfrm_policy_byid) },
	{ 0xb15cb614, __VMLINUX_SYMBOL_STR(security_xfrm_policy_alloc) },
	{ 0xc2b3df62, __VMLINUX_SYMBOL_STR(xfrm_state_flush) },
	{ 0x1ef4a04a, __VMLINUX_SYMBOL_STR(km_policy_notify) },
	{ 0xecb10012, __VMLINUX_SYMBOL_STR(xfrm_policy_flush) },
	{ 0xadcd337c, __VMLINUX_SYMBOL_STR(km_state_notify) },
	{ 0x929da45d, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xbc9363c6, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x1dc23e75, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xaa2d44c3, __VMLINUX_SYMBOL_STR(xfrm_migrate) },
	{ 0x796a4a40, __VMLINUX_SYMBOL_STR(xfrm_policy_hash_rebuild) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x51e4af74, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbf830d57, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x2167db87, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0xaad89d07, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xf637383d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8e3b16e9, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x22222609, __VMLINUX_SYMBOL_STR(netlink_has_listeners) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";

