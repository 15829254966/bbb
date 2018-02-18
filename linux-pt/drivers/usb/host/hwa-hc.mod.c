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
	{ 0x5d4c4406, __VMLINUX_SYMBOL_STR(wusbhc_rh_start_port_reset) },
	{ 0xaf7aa4ff, __VMLINUX_SYMBOL_STR(wusbhc_rh_control) },
	{ 0x46ed818c, __VMLINUX_SYMBOL_STR(wusbhc_rh_status_data) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x324f3712, __VMLINUX_SYMBOL_STR(wusbhc_b_create) },
	{ 0x72230de, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0xa43f42a9, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x3f8bc3a0, __VMLINUX_SYMBOL_STR(wa_create) },
	{ 0x6b638b78, __VMLINUX_SYMBOL_STR(wusbhc_create) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9924c496, __VMLINUX_SYMBOL_STR(__usb_get_extra_descriptor) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xfd8607b8, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x53d7eb9d, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xa95c39bf, __VMLINUX_SYMBOL_STR(usb_init_urb) },
	{ 0xc543b60e, __VMLINUX_SYMBOL_STR(wa_process_errored_transfers_run) },
	{ 0xf4654c3f, __VMLINUX_SYMBOL_STR(wa_urb_enqueue_run) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8bb804f9, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0xdb73d773, __VMLINUX_SYMBOL_STR(wa_dti_start) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfe2e17d7, __VMLINUX_SYMBOL_STR(wusb_et_name) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbb6bf5e, __VMLINUX_SYMBOL_STR(wusb_cluster_id_get) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xb725d128, __VMLINUX_SYMBOL_STR(wusb_cluster_id_put) },
	{ 0x83d9dfc4, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0x1d278c00, __VMLINUX_SYMBOL_STR(wa_urb_enqueue) },
	{ 0xa633838a, __VMLINUX_SYMBOL_STR(wa_urb_dequeue) },
	{ 0xa8d60fc1, __VMLINUX_SYMBOL_STR(rpipe_ep_disable) },
	{ 0x688ca6f8, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0xe235cff7, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x5b579501, __VMLINUX_SYMBOL_STR(wusbhc_b_destroy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb70740e, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xf9791427, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0x4b9deee8, __VMLINUX_SYMBOL_STR(uwb_rc_put) },
	{ 0x83517f8c, __VMLINUX_SYMBOL_STR(wusbhc_destroy) },
	{ 0x3c20e816, __VMLINUX_SYMBOL_STR(__wa_destroy) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wusbcore,wusb-wa,uwb";

MODULE_ALIAS("usb:v13DCp5310d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v13DCp5611d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc02ip01in*");
