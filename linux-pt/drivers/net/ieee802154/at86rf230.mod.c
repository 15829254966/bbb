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
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0xcdc7288d, __VMLINUX_SYMBOL_STR(ieee802154_register_hw) },
	{ 0x1a72106a, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xf94d68de, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd3fb6a08, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0xd381e479, __VMLINUX_SYMBOL_STR(ieee802154_alloc_hw) },
	{ 0xa71e78d, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x9b2434d9, __VMLINUX_SYMBOL_STR(of_property_read_u8_array) },
	{ 0x2be40654, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xa46f2405, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x58c0acf4, __VMLINUX_SYMBOL_STR(ieee802154_wake_queue) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x3056b115, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf8baf0df, __VMLINUX_SYMBOL_STR(spi_async) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9c140c32, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xa814d4cd, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf6f48abf, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x541f805a, __VMLINUX_SYMBOL_STR(ieee802154_xmit_complete) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x417d4be7, __VMLINUX_SYMBOL_STR(ieee802154_rx_irqsafe) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x84644bd6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xaa33c788, __VMLINUX_SYMBOL_STR(ieee802154_free_hw) },
	{ 0x4760e0b7, __VMLINUX_SYMBOL_STR(ieee802154_unregister_hw) },
	{ 0xe5a0ff85, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x9af2fd11, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x4bd8024f, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac802154";

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212*");
