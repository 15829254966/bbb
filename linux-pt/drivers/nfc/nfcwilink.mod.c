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
	{ 0xab1bc792, __VMLINUX_SYMBOL_STR(nci_recv_frame) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xf9916132, __VMLINUX_SYMBOL_STR(nci_register_device) },
	{ 0xf8392c56, __VMLINUX_SYMBOL_STR(nci_allocate_device) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3642a302, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x90a46b77, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa46f2405, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x98206a1e, __VMLINUX_SYMBOL_STR(st_register) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xee4aba47, __VMLINUX_SYMBOL_STR(st_unregister) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f0f44fb, __VMLINUX_SYMBOL_STR(nci_free_device) },
	{ 0x8bf983f0, __VMLINUX_SYMBOL_STR(nci_unregister_device) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nci,st_drv";

