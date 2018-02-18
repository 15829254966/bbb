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
	{ 0xa0552fb4, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x15934e80, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xfaeb9f8, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x229a0009, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x3d454406, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xa958380f, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0xf2a97ac1, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0xf894eedb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xfb0a560, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa36014, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x6a262b22, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x2022557d, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x6e81b2c, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x88b18415, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xc8339e24, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdc1a78c, __VMLINUX_SYMBOL_STR(bin2hex) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x23db6d60, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0xe8ebaac1, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x150cb2b9, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x5a04785, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x127097f7, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x2a1592a, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0xf2ab8ae8, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9f69bfc7, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9a766d9c, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0xb1c2b381, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0xe2c353d9, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0xdc1494d4, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0x9ba49946, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0xd6703119, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0x3b1bc9ba, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0xc0fcaf68, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0x2e064e03, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

