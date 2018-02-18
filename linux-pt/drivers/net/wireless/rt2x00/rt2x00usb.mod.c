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
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4919864f, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x33b518c5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xd416ff6a, __VMLINUX_SYMBOL_STR(rt2x00lib_resume) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xebb85e5e, __VMLINUX_SYMBOL_STR(rt2x00lib_dmastart) },
	{ 0x7c36f219, __VMLINUX_SYMBOL_STR(rt2x00queue_flush_queue) },
	{ 0x2dc264c0, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x8d70a72d, __VMLINUX_SYMBOL_STR(rt2x00queue_for_each_entry) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5181c781, __VMLINUX_SYMBOL_STR(rt2x00queue_start_queue) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x7975cdc0, __VMLINUX_SYMBOL_STR(rt2x00lib_remove_dev) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x53d7eb9d, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x945473f5, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfd10495b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x1e501ec3, __VMLINUX_SYMBOL_STR(rt2x00lib_rxdone) },
	{ 0xb70740e, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa814d4cd, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x123d0d7d, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbdf808a7, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone_noinfo) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xd376eeac, __VMLINUX_SYMBOL_STR(rt2x00lib_dmadone) },
	{ 0xfdab7987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x64bd2883, __VMLINUX_SYMBOL_STR(rt2x00lib_probe_dev) },
	{ 0xcba4581, __VMLINUX_SYMBOL_STR(rt2x00queue_stop_queue) },
	{ 0xb43acabc, __VMLINUX_SYMBOL_STR(rt2x00lib_suspend) },
	{ 0x93d26cd2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "FADD78F4B0B6C8F4DDFA8E5");
