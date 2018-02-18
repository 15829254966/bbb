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
	{ 0xd31ccb06, __VMLINUX_SYMBOL_STR(of_machine_is_compatible) },
	{ 0xac1bbfab, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x47dbbddd, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x59db5575, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x389207a0, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x347c2799, __VMLINUX_SYMBOL_STR(pruss_cfg_set_gpmux) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x1bdce2b3, __VMLINUX_SYMBOL_STR(rproc_del) },
	{ 0xec0e7ada, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x3672ca8c, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x6a882f63, __VMLINUX_SYMBOL_STR(rproc_vq_interrupt) },
	{ 0xb0a2218, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf0457165, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x76ac3c06, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x620ff8b5, __VMLINUX_SYMBOL_STR(mbox_request_channel) },
	{ 0xd47ea471, __VMLINUX_SYMBOL_STR(pruss_intc_configure) },
	{ 0x102cef3f, __VMLINUX_SYMBOL_STR(rproc_alloc) },
	{ 0x233a903e, __VMLINUX_SYMBOL_STR(rproc_put) },
	{ 0xeaa27d8, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x5f428112, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x859bec4e, __VMLINUX_SYMBOL_STR(platform_get_irq_byname) },
	{ 0x7e6a3c45, __VMLINUX_SYMBOL_STR(pruss_intc_unconfigure) },
	{ 0xda2e3f83, __VMLINUX_SYMBOL_STR(rproc_shutdown) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf2e9fa5e, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0xbbc3f173, __VMLINUX_SYMBOL_STR(pruss_intc_trigger) },
	{ 0x4868e84f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x3f2acfe8, __VMLINUX_SYMBOL_STR(rproc_add) },
	{ 0xde8d48f8, __VMLINUX_SYMBOL_STR(mbox_free_channel) },
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xaffc27a6, __VMLINUX_SYMBOL_STR(rproc_boot) },
	{ 0x13599bbb, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0xae7448e0, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0x71167f7d, __VMLINUX_SYMBOL_STR(mbox_send_message) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pruss,pruss_intc";

MODULE_ALIAS("of:N*T*Cti,am3352-pru*");
MODULE_ALIAS("of:N*T*Cti,am4372-pru*");
MODULE_ALIAS("of:N*T*Cti,am5728-pru*");
MODULE_ALIAS("of:N*T*Cti,k2g-pru*");
