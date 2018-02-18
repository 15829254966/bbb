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
	{ 0xb0aaff4f, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x297e62fe, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x755af74e, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf_rpmsg) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x39a0686a, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x152d6c91, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8ef3f172, __VMLINUX_SYMBOL_STR(virtqueue_kick_prepare) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x27dcdd3f, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9ba45b72, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x5210a6d6, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2034acda, __VMLINUX_SYMBOL_STR(device_find_child) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x492b2723, __VMLINUX_SYMBOL_STR(virtqueue_add_outbuf_rpmsg) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x29430981, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x611c529b, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x58f930da, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x6aa70036, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xf4421d11, __VMLINUX_SYMBOL_STR(virtqueue_notify) },
	{ 0x8a727d99, __VMLINUX_SYMBOL_STR(virtqueue_get_vring_size) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x266a9484, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xc907fa9a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xf14f8e95, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xebfdb35, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x28352af3, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x528d0c14, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0xdc29f0d5, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
	{ 0xbd704c1, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("virtio:d00000007v*");
