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
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0xb87f23de, __VMLINUX_SYMBOL_STR(btbcm_set_bdaddr) },
	{ 0xcca14cec, __VMLINUX_SYMBOL_STR(btbcm_setup_patchram) },
	{ 0x8aa89b81, __VMLINUX_SYMBOL_STR(btbcm_setup_apple) },
	{ 0xfbed21b4, __VMLINUX_SYMBOL_STR(btintel_set_diag) },
	{ 0x542e9519, __VMLINUX_SYMBOL_STR(btintel_hw_error) },
	{ 0x4c7392a3, __VMLINUX_SYMBOL_STR(btintel_set_bdaddr) },
	{ 0x81a6d45, __VMLINUX_SYMBOL_STR(btintel_set_diag_mfg) },
	{ 0x9e425be6, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xea175825, __VMLINUX_SYMBOL_STR(btrtl_setup_realtek) },
	{ 0xe94347b6, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0x4a104647, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0x1fc7469, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0xa113cac, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xf740788e, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x9301f2cf, __VMLINUX_SYMBOL_STR(hci_recv_diag) },
	{ 0x6ef72169, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xbdc405af, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x3446f2aa, __VMLINUX_SYMBOL_STR(__hci_cmd_sync_ev) },
	{ 0x643efc11, __VMLINUX_SYMBOL_STR(btintel_set_event_mask_mfg) },
	{ 0xcf721522, __VMLINUX_SYMBOL_STR(btintel_set_event_mask) },
	{ 0xfa2e4ada, __VMLINUX_SYMBOL_STR(btintel_load_ddc_config) },
	{ 0xe7822b34, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_timeout) },
	{ 0x44bae227, __VMLINUX_SYMBOL_STR(bit_wait_timeout) },
	{ 0xf49a041b, __VMLINUX_SYMBOL_STR(btintel_check_bdaddr) },
	{ 0x3642a302, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x105a7aae, __VMLINUX_SYMBOL_STR(btintel_secure_send) },
	{ 0x90a46b77, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0xab6f7fc9, __VMLINUX_SYMBOL_STR(btintel_version_info) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xcdfee6b3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9fbb23f0, __VMLINUX_SYMBOL_STR(__hci_cmd_sync) },
	{ 0xe2d95612, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0xec724552, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0x739003be, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x5200c3b4, __VMLINUX_SYMBOL_STR(usb_scuttle_anchored_urbs) },
	{ 0xd02df0fb, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6f440b9, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xaaa5868e, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcf2b8c18, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btbcm,btintel,btrtl,bluetooth";

MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105BpE065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F15FADCBCA754F11D03AC0C");
