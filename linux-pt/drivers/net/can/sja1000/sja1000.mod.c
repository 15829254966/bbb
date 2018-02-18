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
	{ 0x414743df, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x944f3940, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x52fb19ff, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x334a064f, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x7b33fd80, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x3a80b724, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0x3c274739, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x756f4db8, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0xd3fac4ce, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xf0764b97, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0x93608ba, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0xff8d8739, __VMLINUX_SYMBOL_STR(can_change_state) },
	{ 0x643d88ff, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0x38905e5d, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbf209dda, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xb2c2cca0, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf71f3944, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x956514e5, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x1fcad1b0, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xc06f9e8d, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

