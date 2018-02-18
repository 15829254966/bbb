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
	{ 0xeb234814, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xb0a2218, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x4868e84f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x34c085de, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xcc836451, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xcfb6a3da, __VMLINUX_SYMBOL_STR(unregister_atmdevice_notifier) },
	{ 0x1c23b60f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x5f566aaf, __VMLINUX_SYMBOL_STR(deregister_atm_ioctl) },
	{ 0xb09faf79, __VMLINUX_SYMBOL_STR(register_atmdevice_notifier) },
	{ 0x6a2fbeb6, __VMLINUX_SYMBOL_STR(register_atm_ioctl) },
	{ 0xf02d1a74, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x4443d399, __VMLINUX_SYMBOL_STR(atm_proc_root) },
	{ 0xff1e9dd8, __VMLINUX_SYMBOL_STR(seq_list_start) },
	{ 0xe7d4daac, __VMLINUX_SYMBOL_STR(seq_list_next) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3d1a8b78, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x6fdcfed0, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xda389260, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x4d773f0e, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf98dffe0, __VMLINUX_SYMBOL_STR(vcc_process_recv_queue) },
	{ 0x3454a49f, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xcea3c5a6, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xfa92f77f, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x95dbe078, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3fe9bcbd, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x6b38aa60, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x66a0ab4, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xef9d84c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x3c274739, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xb5c00014, __VMLINUX_SYMBOL_STR(_raw_write_lock_irq) },
	{ 0xd3fac4ce, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x82ed594, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x9cba3c37, __VMLINUX_SYMBOL_STR(_raw_read_unlock_irqrestore) },
	{ 0xf2900328, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xe1f0ab3a, __VMLINUX_SYMBOL_STR(_raw_read_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm";

