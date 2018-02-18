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
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x51cc8cd8, __VMLINUX_SYMBOL_STR(usbip_event_happened) },
	{ 0xd02753dc, __VMLINUX_SYMBOL_STR(usbip_header_correct_endian) },
	{ 0x64c72835, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x8165de8a, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xa43f42a9, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe235cff7, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x8bb804f9, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0xe1825715, __VMLINUX_SYMBOL_STR(usb_hcd_poll_rh_status) },
	{ 0xced465fe, __VMLINUX_SYMBOL_STR(usbip_alloc_iso_desc_pdu) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe82d940c, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3995c8b7, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x4ac6f695, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x688ca6f8, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x7177d3f, __VMLINUX_SYMBOL_STR(usbip_event_add) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe1ea0586, __VMLINUX_SYMBOL_STR(usbip_dump_header) },
	{ 0x77ae495d, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0xe6e59584, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xa37d97e1, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x1403bc31, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x7ff35e2b, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x7385a1d6, __VMLINUX_SYMBOL_STR(usbip_stop_eh) },
	{ 0x894c7144, __VMLINUX_SYMBOL_STR(dev_attr_usbip_debug) },
	{ 0x70610941, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x2e064e03, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xa89a7fcc, __VMLINUX_SYMBOL_STR(usbip_recv_iso) },
	{ 0xd9bffdfc, __VMLINUX_SYMBOL_STR(usbip_pad_iso) },
	{ 0xab9e094d, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd532db63, __VMLINUX_SYMBOL_STR(usbip_dump_urb) },
	{ 0xe78a352, __VMLINUX_SYMBOL_STR(platform_device_register) },
	{ 0x53d7eb9d, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xb6b3f5b8, __VMLINUX_SYMBOL_STR(usbip_recv) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb70740e, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xfb0a0a24, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x153ceb6a, __VMLINUX_SYMBOL_STR(usbip_recv_xbuff) },
	{ 0xd90597c6, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x78b72f44, __VMLINUX_SYMBOL_STR(usbip_debug_flag) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x397dead, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf1db89b, __VMLINUX_SYMBOL_STR(usb_hcd_resume_root_hub) },
	{ 0xa926845c, __VMLINUX_SYMBOL_STR(usbip_start_eh) },
	{ 0x7edd4d43, __VMLINUX_SYMBOL_STR(usbip_pack_pdu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";


MODULE_INFO(srcversion, "146F4068E3BD0239860F77A");
