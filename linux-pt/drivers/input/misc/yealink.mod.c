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
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1403bc31, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xcf720183, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xfa3b251c, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x8c844aa3, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xeec7aaf1, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x3995c8b7, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xb07e4956, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xf6f3ee79, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x7aa9f2b8, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6a112424, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xf2415352, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x36ad0865, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x8f538c1b, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v6993pB001d*dc*dsc*dp*ic03isc00ip00in*");
