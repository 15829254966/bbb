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
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa120d33c, __VMLINUX_SYMBOL_STR(tty_unregister_ldisc) },
	{ 0xde55446, __VMLINUX_SYMBOL_STR(tty_register_ldisc) },
	{ 0x2427be00, __VMLINUX_SYMBOL_STR(ppp_register_channel) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1c0bd19b, __VMLINUX_SYMBOL_STR(ppp_input_error) },
	{ 0xfb53097a, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xe19a9b0b, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0xef9d84c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa6ad0d45, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5f13d707, __VMLINUX_SYMBOL_STR(ppp_unregister_channel) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xb5c00014, __VMLINUX_SYMBOL_STR(_raw_write_lock_irq) },
	{ 0xbe5a9400, __VMLINUX_SYMBOL_STR(ppp_output_wakeup) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x40576dd, __VMLINUX_SYMBOL_STR(ppp_channel_index) },
	{ 0xce25340b, __VMLINUX_SYMBOL_STR(tty_mode_ioctl) },
	{ 0xe4685559, __VMLINUX_SYMBOL_STR(n_tty_ioctl_helper) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x479d0e6e, __VMLINUX_SYMBOL_STR(ppp_unit_number) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x1d9c388d, __VMLINUX_SYMBOL_STR(stop_tty) },
	{ 0xc0806ebe, __VMLINUX_SYMBOL_STR(start_tty) },
	{ 0x5778981e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x84644bd6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x695fc1d5, __VMLINUX_SYMBOL_STR(tty_unthrottle) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x75811312, __VMLINUX_SYMBOL_STR(crc_ccitt_table) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ppp_generic,crc-ccitt";

