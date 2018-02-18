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
	{ 0x8e35cccf, __VMLINUX_SYMBOL_STR(ath6kl_core_destroy) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x9e7e1e23, __VMLINUX_SYMBOL_STR(ath6kl_hif_intr_bh_handler) },
	{ 0xcb31410a, __VMLINUX_SYMBOL_STR(ath6kl_core_cleanup) },
	{ 0x8a2d86f5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x91cfb84a, __VMLINUX_SYMBOL_STR(ath6kl_hif_rw_comp_handler) },
	{ 0x3564f0f1, __VMLINUX_SYMBOL_STR(ath6kl_core_create) },
	{ 0xfc184764, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xe8e8c3ea, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x76fb0e76, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x83f74c15, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x51e77c97, __VMLINUX_SYMBOL_STR(pfn_valid) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x21fb6468, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x43478e7b, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0xcb014460, __VMLINUX_SYMBOL_STR(ath6kl_err) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa6f66cc1, __VMLINUX_SYMBOL_STR(ath6kl_warn) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xd719dd66, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x6dc5dace, __VMLINUX_SYMBOL_STR(ath6kl_cfg80211_suspend) },
	{ 0x6b3c266d, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x5230a67b, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x5c218908, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xbc42a448, __VMLINUX_SYMBOL_STR(ath6kl_cfg80211_resume) },
	{ 0x50db87dc, __VMLINUX_SYMBOL_STR(ath6kl_stop_txrx) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x4f656b7b, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x847b6b5e, __VMLINUX_SYMBOL_STR(ath6kl_core_init) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe33cd27d, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb454851, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x8101ada5, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x75cc8f, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xd3c5bcb, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x9979e07e, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x3e72b5a2, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath6kl_core";

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
MODULE_ALIAS("sdio:c*v0271d0400*");
MODULE_ALIAS("sdio:c*v0271d0401*");
MODULE_ALIAS("sdio:c*v0271d0402*");
