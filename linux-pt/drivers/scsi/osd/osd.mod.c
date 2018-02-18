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
	{ 0xed6484a2, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0x94820c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x584d41f1, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xd90aec36, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xc17edb1, __VMLINUX_SYMBOL_STR(osd_sec_init_nosec_doall_caps) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x86a9a698, __VMLINUX_SYMBOL_STR(osd_dev_fini) },
	{ 0x5210a6d6, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2265621a, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x15934e80, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x9f981276, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xdfebb866, __VMLINUX_SYMBOL_STR(osd_dev_init) },
	{ 0x2e064e03, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x29d870b6, __VMLINUX_SYMBOL_STR(osd_auto_detect_ver) },
	{ 0x55694cdd, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x79f8a4f5, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xc907fa9a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7780f5a2, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x82bc90ba, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x5986da6f, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd2508b7d, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xc66fa6a6, __VMLINUX_SYMBOL_STR(ida_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x423d81ed, __VMLINUX_SYMBOL_STR(ida_pre_get) },
	{ 0xebfdb35, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x28352af3, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xafcb906c, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x9a623142, __VMLINUX_SYMBOL_STR(ida_get_new_above) },
	{ 0x3b0a0b53, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd";

