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
	{ 0xae277d72, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0xd6e93d71, __VMLINUX_SYMBOL_STR(st_sensors_set_dataready_irq) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x28bce2c4, __VMLINUX_SYMBOL_STR(st_sensors_power_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4666d6a, __VMLINUX_SYMBOL_STR(st_sensors_set_enable) },
	{ 0x74d7047, __VMLINUX_SYMBOL_STR(st_sensors_trigger_handler) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91d78c52, __VMLINUX_SYMBOL_STR(st_sensors_deallocate_trigger) },
	{ 0xc661371a, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_sampling_frequency_avail) },
	{ 0x71cdd88d, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x72bc8f8e, __VMLINUX_SYMBOL_STR(st_sensors_allocate_trigger) },
	{ 0x492bc167, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x92ed8612, __VMLINUX_SYMBOL_STR(st_sensors_check_device_support) },
	{ 0x7245ec2a, __VMLINUX_SYMBOL_STR(st_sensors_validate_device) },
	{ 0xdd58e184, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xb0f9c002, __VMLINUX_SYMBOL_STR(st_sensors_power_disable) },
	{ 0xa1a9556e, __VMLINUX_SYMBOL_STR(st_sensors_init_sensor) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc639400e, __VMLINUX_SYMBOL_STR(st_sensors_debugfs_reg_access) },
	{ 0x960ccd0c, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x4b9b00a2, __VMLINUX_SYMBOL_STR(st_sensors_set_odr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb845dd37, __VMLINUX_SYMBOL_STR(st_sensors_read_info_raw) },
	{ 0xe56f59c7, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-triggered-buffer,st_sensors,industrialio";

