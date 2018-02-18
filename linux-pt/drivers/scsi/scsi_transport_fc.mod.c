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
	{ 0x1b84cfe5, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3c747a48, __VMLINUX_SYMBOL_STR(scsi_remove_target) },
	{ 0x407cba6, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xa5d93c70, __VMLINUX_SYMBOL_STR(scsi_flush_work) },
	{ 0xc4c08d84, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x46f6669, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x1b118d83, __VMLINUX_SYMBOL_STR(transport_destroy_device) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc7f6e3e4, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0xdf758b30, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x2939d29a, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x98e68eca, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x898d455e, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x3987f01, __VMLINUX_SYMBOL_STR(scsi_queue_work) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x782cc296, __VMLINUX_SYMBOL_STR(transport_add_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x604415ce, __VMLINUX_SYMBOL_STR(bsg_register_queue) },
	{ 0x3d5367d5, __VMLINUX_SYMBOL_STR(transport_configure_device) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb3d1922a, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xe9af4232, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x9bf5ef24, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x875e5cda, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xb5195665, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xd4797bca, __VMLINUX_SYMBOL_STR(scsi_target_unblock) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xaad89d07, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xc907fa9a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x4d04f904, __VMLINUX_SYMBOL_STR(blk_queue_softirq_done) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x9973090d, __VMLINUX_SYMBOL_STR(transport_setup_device) },
	{ 0x8a036d32, __VMLINUX_SYMBOL_STR(bsg_unregister_queue) },
	{ 0x60317b1b, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0x9ca9eb75, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd2508b7d, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x9c9030a4, __VMLINUX_SYMBOL_STR(blk_run_queue_async) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7a171265, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0x182112f8, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xe7d19ac7, __VMLINUX_SYMBOL_STR(blk_complete_request) },
	{ 0x10b89f7e, __VMLINUX_SYMBOL_STR(scsi_is_target_device) },
	{ 0x8b199607, __VMLINUX_SYMBOL_STR(scsi_nl_sock) },
	{ 0x87d78400, __VMLINUX_SYMBOL_STR(transport_remove_device) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x702960ac, __VMLINUX_SYMBOL_STR(scsi_target_block) },
	{ 0x28352af3, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x72aedf9c, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x8e3b16e9, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xd7ac5fb9, __VMLINUX_SYMBOL_STR(__scsi_alloc_queue) },
	{ 0x1aa17441, __VMLINUX_SYMBOL_STR(blk_queue_rq_timed_out) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

