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
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xffc50a8f, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xc9ce651, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xcc836451, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x34c085de, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xda389260, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xaef5dd37, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xda2e3f83, __VMLINUX_SYMBOL_STR(rproc_shutdown) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x1fdeaf6f, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0x3f97ab8a, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xac03652c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x4919864f, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x515b372c, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0xdadf2089, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x66a0ab4, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x84644bd6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xcea3c5a6, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x210dc07c, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xbb4c9200, __VMLINUX_SYMBOL_STR(gen_pool_virt_to_phys) },
	{ 0x47acf829, __VMLINUX_SYMBOL_STR(gen_pool_alloc) },
	{ 0xc26211ca, __VMLINUX_SYMBOL_STR(of_gen_pool_get) },
	{ 0x2af72f68, __VMLINUX_SYMBOL_STR(pruss_request_mem_region) },
	{ 0x7bfd5683, __VMLINUX_SYMBOL_STR(pruss_cfg_xfr_enable) },
	{ 0xaa39fe89, __VMLINUX_SYMBOL_STR(pruss_cfg_miirt_enable) },
	{ 0xf39e72c1, __VMLINUX_SYMBOL_STR(pruss_cfg_gpimode) },
	{ 0x453deec0, __VMLINUX_SYMBOL_STR(pruss_rproc_get) },
	{ 0xd248df2b, __VMLINUX_SYMBOL_STR(pruss_get) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe488aeeb, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x68d62fd, __VMLINUX_SYMBOL_STR(of_phy_connect) },
	{ 0x52f84526, __VMLINUX_SYMBOL_STR(of_get_phy_mode) },
	{ 0x26bbcc39, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x58fa43c8, __VMLINUX_SYMBOL_STR(of_get_mac_address) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf659c4c7, __VMLINUX_SYMBOL_STR(of_irq_get_byname) },
	{ 0x3e4c2bd1, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x82ed594, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x401c9951, __VMLINUX_SYMBOL_STR(phy_print_status) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x81697525, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0x611033c2, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe25ebc36, __VMLINUX_SYMBOL_STR(pruss_put) },
	{ 0xda2a7887, __VMLINUX_SYMBOL_STR(pruss_rproc_put) },
	{ 0xbb487871, __VMLINUX_SYMBOL_STR(pruss_release_mem_region) },
	{ 0xce30f482, __VMLINUX_SYMBOL_STR(gen_pool_free) },
	{ 0xeda13d45, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x6b38aa60, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x3fe9bcbd, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x5d3073fc, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x1b418be5, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe4443c9b, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x7ef938fa, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x1eb145c, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0xaffc27a6, __VMLINUX_SYMBOL_STR(rproc_boot) },
	{ 0xfa5d9eaf, __VMLINUX_SYMBOL_STR(pru_rproc_set_ctable) },
	{ 0x21110dbf, __VMLINUX_SYMBOL_STR(mmioset) },
	{ 0xf2900328, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x216d759a, __VMLINUX_SYMBOL_STR(mmiocpy) },
	{ 0xfde0aa60, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0xd3fac4ce, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xbf209dda, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pruss,pru_rproc";

MODULE_ALIAS("of:N*T*Cti,am57-prueth*");
MODULE_ALIAS("of:N*T*Cti,am4372-prueth*");
MODULE_ALIAS("of:N*T*Cti,am3359-prueth*");
MODULE_ALIAS("of:N*T*Cti,k2g-prueth*");
