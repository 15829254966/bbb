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
	{ 0x9331b6d5, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x1f09b2b9, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xbb53c6ea, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xc07de430, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0x297e62fe, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xb0aaff4f, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0xf448b173, __VMLINUX_SYMBOL_STR(__root_device_register) },
	{ 0x2a5a9212, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x4f9d85f, __VMLINUX_SYMBOL_STR(root_device_unregister) },
	{ 0x58f930da, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xa976827f, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x8e1d3c9f, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x165c5f7b, __VMLINUX_SYMBOL_STR(transport_free_session) },
	{ 0x7d518fdd, __VMLINUX_SYMBOL_STR(transport_register_session) },
	{ 0x5e58b9cd, __VMLINUX_SYMBOL_STR(core_tpg_check_initiator_node_acl) },
	{ 0x631dd9ee, __VMLINUX_SYMBOL_STR(transport_init_session) },
	{ 0x121015c3, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0xcedb2ff2, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5d30e311, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x36dff7eb, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x915d5f0f, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0xfef31ea5, __VMLINUX_SYMBOL_STR(target_submit_cmd_map_sgls) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x7b16268f, __VMLINUX_SYMBOL_STR(transport_generic_handle_tmr) },
	{ 0x51f6a3b0, __VMLINUX_SYMBOL_STR(transport_lookup_tmr_lun) },
	{ 0xeede8dc, __VMLINUX_SYMBOL_STR(core_tmr_alloc_req) },
	{ 0xd121c933, __VMLINUX_SYMBOL_STR(transport_init_se_cmd) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3621cbb8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x7621ab43, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x1b2240ce, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x15a23252, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xbe7be850, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x5210a6d6, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x28352af3, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xebfdb35, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x12dd09a2, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x79f8a4f5, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x80d8a2c0, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x65db4dcf, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfffe6f2e, __VMLINUX_SYMBOL_STR(core_allocate_nexus_loss_ua) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

