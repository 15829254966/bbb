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
	{ 0x72aedf9c, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x3f510825, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0xb21fc627, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0x63ee3422, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x1e1d4773, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfe636d3f, __VMLINUX_SYMBOL_STR(ffs_name_dev) },
	{ 0x135a0bf0, __VMLINUX_SYMBOL_STR(ffs_single_dev) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x96eaf73e, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0x73e46b3a, __VMLINUX_SYMBOL_STR(usb_remove_function) },
	{ 0x18940c30, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x32bfbf54, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8189eb43, __VMLINUX_SYMBOL_STR(usb_otg_descriptor_init) },
	{ 0xb9cc4789, __VMLINUX_SYMBOL_STR(usb_otg_descriptor_alloc) },
	{ 0xb9544878, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0xe1ec5ae0, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0xa86aa373, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x499207e7, __VMLINUX_SYMBOL_STR(rndis_borrow_net) },
	{ 0x87d6a42d, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xc2ed8eb7, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x9ae4cdd0, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0xe7cf0752, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0xc21f6ad7, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x60eb1995, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x860f3a33, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0xca33ba3a, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0xb6f28e1e, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0x97f26326, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb_f_fs,libcomposite,usb_f_rndis,u_ether";

