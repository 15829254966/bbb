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
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0xae277d72, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0xd8df6b54, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0xa538e062, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0xe9a4c1d2, __VMLINUX_SYMBOL_STR(iio_trigger_alloc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x270b846b, __VMLINUX_SYMBOL_STR(spi_sync_locked) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdd58e184, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0xb46d1e96, __VMLINUX_SYMBOL_STR(iio_trigger_poll) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x9a6be253, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfb259033, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0x960ccd0c, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x1c1db89e, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x39c6393a, __VMLINUX_SYMBOL_STR(spi_bus_lock) },
	{ 0xd2508b7d, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x3454a49f, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x5f2757f8, __VMLINUX_SYMBOL_STR(iio_trigger_free) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x21603de, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x4109581b, __VMLINUX_SYMBOL_STR(iio_validate_scan_mask_onehot) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xa46f2405, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xe56f59c7, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0x806f74af, __VMLINUX_SYMBOL_STR(spi_bus_unlock) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-triggered-buffer,industrialio";

