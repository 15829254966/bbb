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
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x7bc5d8ee, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x417d4be7, __VMLINUX_SYMBOL_STR(ieee802154_rx_irqsafe) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x84644bd6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xce01f638, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xcdc7288d, __VMLINUX_SYMBOL_STR(ieee802154_register_hw) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd381e479, __VMLINUX_SYMBOL_STR(ieee802154_alloc_hw) },
	{ 0x1a72106a, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x65cfafe4, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe5a0ff85, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x9af2fd11, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xa71e78d, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x61a3844c, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb1bbca04, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x2be40654, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9a6be253, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaa33c788, __VMLINUX_SYMBOL_STR(ieee802154_free_hw) },
	{ 0x4760e0b7, __VMLINUX_SYMBOL_STR(ieee802154_unregister_hw) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac802154";

MODULE_ALIAS("of:N*T*Cti,cc2520*");
MODULE_ALIAS("spi:cc2520");
