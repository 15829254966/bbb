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
	{ 0xb4772200, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x10d5c175, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x8456196f, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x7c123fcc, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x10a6c818, __VMLINUX_SYMBOL_STR(tty_port_link_device) },
	{ 0x86a37f0, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x7708f4c0, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0xf73668bb, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xab7a6b1, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa01f11d2, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

