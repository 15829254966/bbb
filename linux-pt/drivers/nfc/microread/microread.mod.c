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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdab01f4a, __VMLINUX_SYMBOL_STR(nfc_hci_send_event) },
	{ 0x7b532a7e, __VMLINUX_SYMBOL_STR(nfc_dep_link_is_up) },
	{ 0xc6d0ead1, __VMLINUX_SYMBOL_STR(nfc_targets_found) },
	{ 0x269d58d9, __VMLINUX_SYMBOL_STR(nfc_hci_set_param) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xca8f8fae, __VMLINUX_SYMBOL_STR(nfc_hci_allocate_device) },
	{ 0x309a9602, __VMLINUX_SYMBOL_STR(nfc_tm_activated) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x52fe4673, __VMLINUX_SYMBOL_STR(nfc_hci_get_clientdata) },
	{ 0x595e7eae, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x9902543c, __VMLINUX_SYMBOL_STR(nfc_set_remote_general_bytes) },
	{ 0xaa0d075a, __VMLINUX_SYMBOL_STR(nfc_hci_register_device) },
	{ 0x9ac6809b, __VMLINUX_SYMBOL_STR(nfc_get_local_general_bytes) },
	{ 0x4187ca81, __VMLINUX_SYMBOL_STR(nfc_hci_free_device) },
	{ 0xbca0b4fd, __VMLINUX_SYMBOL_STR(nfc_hci_sak_to_protocol) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xebe5ffd, __VMLINUX_SYMBOL_STR(nfc_hci_unregister_device) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x43028a27, __VMLINUX_SYMBOL_STR(nfc_hci_result_to_errno) },
	{ 0x9880e7c, __VMLINUX_SYMBOL_STR(nfc_tm_data_received) },
	{ 0x3771b461, __VMLINUX_SYMBOL_STR(crc_ccitt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xa0884f95, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd_async) },
	{ 0xa54a8017, __VMLINUX_SYMBOL_STR(nfc_hci_get_param) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa422f1c3, __VMLINUX_SYMBOL_STR(nfc_hci_set_clientdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hci,nfc,crc-ccitt";

