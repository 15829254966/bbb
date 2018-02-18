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
	{ 0xd5f0ff9f, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x28b29238, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8ffcfc6c, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0x66e91865, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0x1479c8a2, __VMLINUX_SYMBOL_STR(gether_get_host_addr_cdc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x574bd50f, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0x728c8f3, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xe7cf0752, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x7174673b, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0x8908e279, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0x860f3a33, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x82fc8f56, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x3fe9bcbd, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc2ed8eb7, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd2a8e5c3, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0x3f9ab17e, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0xc21f6ad7, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x5c341ab9, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x87d6a42d, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9ae4cdd0, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x324b8e07, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xcdcf67bd, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1c4c129, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x5754d4f0, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether";

