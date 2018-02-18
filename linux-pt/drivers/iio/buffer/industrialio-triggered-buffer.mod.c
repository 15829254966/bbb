#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbba89470, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x36c9f25c, __VMLINUX_SYMBOL_STR(iio_kfifo_allocate) },
	{ 0xdd58e184, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0xa5809b34, __VMLINUX_SYMBOL_STR(iio_buffer_get) },
	{ 0x960ccd0c, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0xefde917c, __VMLINUX_SYMBOL_STR(iio_kfifo_free) },
	{ 0xd145dbee, __VMLINUX_SYMBOL_STR(iio_alloc_pollfunc) },
	{ 0x3917cc04, __VMLINUX_SYMBOL_STR(iio_dealloc_pollfunc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kfifo_buf,industrialio";

