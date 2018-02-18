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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe7b90c5c, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x9301f2cf, __VMLINUX_SYMBOL_STR(hci_recv_diag) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x5c55794b, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x8e56a21f, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x605bc419, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0x9fbb23f0, __VMLINUX_SYMBOL_STR(__hci_cmd_sync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x7b77ddeb, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x4a104647, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0xb4d2ca1f, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x56320741, __VMLINUX_SYMBOL_STR(qca_set_bdaddr_rome) },
	{ 0x3136149f, __VMLINUX_SYMBOL_STR(btbcm_patchram) },
	{ 0x1b31505e, __VMLINUX_SYMBOL_STR(btbcm_check_bdaddr) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xd056134b, __VMLINUX_SYMBOL_STR(hci_reset_dev) },
	{ 0x695fc1d5, __VMLINUX_SYMBOL_STR(tty_unthrottle) },
	{ 0xb87f23de, __VMLINUX_SYMBOL_STR(btbcm_set_bdaddr) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x5641485b, __VMLINUX_SYMBOL_STR(tty_termios_encode_baud_rate) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6f440b9, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x15e1de7b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x739003be, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xa120d33c, __VMLINUX_SYMBOL_STR(tty_unregister_ldisc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x1cdef4a3, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xa6ad0d45, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xbd26502a, __VMLINUX_SYMBOL_STR(tty_ldisc_flush) },
	{ 0x3f77cef2, __VMLINUX_SYMBOL_STR(debugfs_create_u64) },
	{ 0xe4685559, __VMLINUX_SYMBOL_STR(n_tty_ioctl_helper) },
	{ 0xa113cac, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xeac9f591, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0xf5c180a5, __VMLINUX_SYMBOL_STR(debugfs_create_bool) },
	{ 0x5778981e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xacaff8e6, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x6af6c415, __VMLINUX_SYMBOL_STR(tty_driver_flush_buffer) },
	{ 0xcfd4769a, __VMLINUX_SYMBOL_STR(devm_free_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7dbee2e9, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc60e451a, __VMLINUX_SYMBOL_STR(btbcm_initialize) },
	{ 0x90a46b77, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x1f310f22, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0xfb53097a, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x19f49fbd, __VMLINUX_SYMBOL_STR(btbcm_finalize) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xec724552, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xde55446, __VMLINUX_SYMBOL_STR(tty_register_ldisc) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x9dd12db3, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1a72106a, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x83fe03e3, __VMLINUX_SYMBOL_STR(qca_uart_setup_rome) },
	{ 0x3642a302, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x982aac84, __VMLINUX_SYMBOL_STR(tty_set_termios) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,btqca,btbcm";


MODULE_INFO(srcversion, "EC558DC060F819886CB8B4F");
