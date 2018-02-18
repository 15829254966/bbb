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
	{ 0xcb2273a3, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x31683780, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0x50a84a, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xd5bc4832, __VMLINUX_SYMBOL_STR(padata_start) },
	{ 0x9752f8e2, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0x852a1c30, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0x5698c26a, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xbda965ed, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xcfc68341, __VMLINUX_SYMBOL_STR(synchronize_rcu_bh) },
	{ 0xf85ea46d, __VMLINUX_SYMBOL_STR(padata_stop) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xe1f6f73, __VMLINUX_SYMBOL_STR(padata_free) },
	{ 0x2e989199, __VMLINUX_SYMBOL_STR(padata_unregister_cpumask_notifier) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0xc0c9f04a, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x8d313235, __VMLINUX_SYMBOL_STR(kobject_add) },
	{ 0x788e19f9, __VMLINUX_SYMBOL_STR(padata_register_cpumask_notifier) },
	{ 0x7c62d042, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3135c2ae, __VMLINUX_SYMBOL_STR(padata_alloc_possible) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe6653b78, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x607900fe, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x7272c3c8, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xd2d5ed59, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x9ac1dc76, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x3741b29e, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x722ec8d, __VMLINUX_SYMBOL_STR(padata_do_parallel) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2fc7c5eb, __VMLINUX_SYMBOL_STR(padata_do_serial) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

