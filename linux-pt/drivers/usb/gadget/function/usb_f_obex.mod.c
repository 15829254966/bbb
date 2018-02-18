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
	{ 0xd91098cc, __VMLINUX_SYMBOL_STR(usb_function_deactivate) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd5f0ff9f, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x28b29238, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0xb7ab10c3, __VMLINUX_SYMBOL_STR(gserial_connect) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x728c8f3, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xff92f5f5, __VMLINUX_SYMBOL_STR(usb_function_activate) },
	{ 0x860f3a33, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x82fc8f56, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x36db159c, __VMLINUX_SYMBOL_STR(gserial_disconnect) },
	{ 0x3f9ab17e, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x33bfdca2, __VMLINUX_SYMBOL_STR(gserial_alloc_line) },
	{ 0x5c341ab9, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x324b8e07, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb6652875, __VMLINUX_SYMBOL_STR(gserial_free_line) },
	{ 0x1c4c129, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x5754d4f0, __VMLINUX_SYMBOL_STR(usb_interface_id) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_serial";

