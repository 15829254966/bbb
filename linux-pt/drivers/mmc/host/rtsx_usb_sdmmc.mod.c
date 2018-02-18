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
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x30682a49, __VMLINUX_SYMBOL_STR(rtsx_usb_write_ppbuf) },
	{ 0x1424f59, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x134286a0, __VMLINUX_SYMBOL_STR(rtsx_usb_transfer_data) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1530f058, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6888b3c, __VMLINUX_SYMBOL_STR(rtsx_usb_ep0_read_register) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x4b003d8b, __VMLINUX_SYMBOL_STR(rtsx_usb_switch_clock) },
	{ 0xc97c65c5, __VMLINUX_SYMBOL_STR(rtsx_usb_get_card_status) },
	{ 0x9a19ad01, __VMLINUX_SYMBOL_STR(rtsx_usb_card_exclusive_check) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x9c12b187, __VMLINUX_SYMBOL_STR(rtsx_usb_write_register) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x80d5f474, __VMLINUX_SYMBOL_STR(rtsx_usb_read_register) },
	{ 0xdd77513f, __VMLINUX_SYMBOL_STR(rtsx_usb_read_ppbuf) },
	{ 0x594e6a44, __VMLINUX_SYMBOL_STR(rtsx_usb_get_rsp) },
	{ 0xb0206ba2, __VMLINUX_SYMBOL_STR(rtsx_usb_send_cmd) },
	{ 0x731db452, __VMLINUX_SYMBOL_STR(rtsx_usb_add_cmd) },
	{ 0xf1ece412, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x96d1eb34, __VMLINUX_SYMBOL_STR(rtsx_usb_ep0_write_register) },
	{ 0x15e1de7b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa949a43e, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0xd8a7658c, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xacaff8e6, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x97cf28ec, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x8e56a21f, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xff3c48a7, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0x315102e3, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x8956fa51, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xeb9afb8a, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtsx_usb";

MODULE_ALIAS("platform:rtsx_usb_sdmmc");
