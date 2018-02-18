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
	{ 0x950e9921, __VMLINUX_SYMBOL_STR(get_acl) },
	{ 0x6c21551d, __VMLINUX_SYMBOL_STR(vfs_create) },
	{ 0xed1b0aa4, __VMLINUX_SYMBOL_STR(svcauth_gss_flavor) },
	{ 0xc75a0417, __VMLINUX_SYMBOL_STR(d_path) },
	{ 0xbb53c6ea, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xbe435e43, __VMLINUX_SYMBOL_STR(auth_domain_put) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5b5898be, __VMLINUX_SYMBOL_STR(rpc_destroy_wait_queue) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x4b9903b7, __VMLINUX_SYMBOL_STR(set_groups) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8ba4adeb, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x465cca10, __VMLINUX_SYMBOL_STR(locks_free_lock) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x380cfa2, __VMLINUX_SYMBOL_STR(xdr_truncate_encode) },
	{ 0x39649413, __VMLINUX_SYMBOL_STR(sunrpc_cache_update) },
	{ 0x72a196fa, __VMLINUX_SYMBOL_STR(vfs_setlease) },
	{ 0x5d04d095, __VMLINUX_SYMBOL_STR(__mnt_is_readonly) },
	{ 0x54ba5075, __VMLINUX_SYMBOL_STR(lease_get_mtime) },
	{ 0x47dbbddd, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x486f645d, __VMLINUX_SYMBOL_STR(mntget) },
	{ 0x6256f286, __VMLINUX_SYMBOL_STR(inode_permission) },
	{ 0x13322d4b, __VMLINUX_SYMBOL_STR(locks_start_grace) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x81267a36, __VMLINUX_SYMBOL_STR(cache_destroy_net) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x134bb9b3, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x4a74c02f, __VMLINUX_SYMBOL_STR(rpc_call_async) },
	{ 0x3022fd04, __VMLINUX_SYMBOL_STR(write_bytes_to_xdr_buf) },
	{ 0xe33c7475, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x3d1a8b78, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x4bbf6ea1, __VMLINUX_SYMBOL_STR(svc_pool_stats_open) },
	{ 0x957f098d, __VMLINUX_SYMBOL_STR(vfs_link) },
	{ 0x940b434d, __VMLINUX_SYMBOL_STR(svc_print_addr) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x7272c3c8, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x64789398, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0x59db5575, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x389207a0, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x63537088, __VMLINUX_SYMBOL_STR(rpc_unlink) },
	{ 0xb8c26be7, __VMLINUX_SYMBOL_STR(vfs_llseek) },
	{ 0xd6e34553, __VMLINUX_SYMBOL_STR(gss_mech_get) },
	{ 0xb6c057a9, __VMLINUX_SYMBOL_STR(svc_addsock) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x9413698e, __VMLINUX_SYMBOL_STR(put_rpccred) },
	{ 0xc4746e8c, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8b101732, __VMLINUX_SYMBOL_STR(gss_mech_put) },
	{ 0x58821a78, __VMLINUX_SYMBOL_STR(rpc_init_wait_queue) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xe8ebaac1, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x356de74a, __VMLINUX_SYMBOL_STR(svc_proc_unregister) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xfe11391c, __VMLINUX_SYMBOL_STR(svc_find_xprt) },
	{ 0x1c23b60f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x9f903279, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xce079954, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0x239de645, __VMLINUX_SYMBOL_STR(rpc_restart_call) },
	{ 0x875683a7, __VMLINUX_SYMBOL_STR(nlmsvc_ops) },
	{ 0x4d4fdfda, __VMLINUX_SYMBOL_STR(rpc_uaddr2sockaddr) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbfd03632, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x4c9626f9, __VMLINUX_SYMBOL_STR(cache_register_net) },
	{ 0x60142cce, __VMLINUX_SYMBOL_STR(vfs_mknod) },
	{ 0xeef161aa, __VMLINUX_SYMBOL_STR(groups_free) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x71fa908a, __VMLINUX_SYMBOL_STR(cache_flush) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x898e465d, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x23b1d9d5, __VMLINUX_SYMBOL_STR(svc_seq_show) },
	{ 0xc4a64ad0, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0xe4957136, __VMLINUX_SYMBOL_STR(vfs_symlink) },
	{ 0x710b09ae, __VMLINUX_SYMBOL_STR(rpc_mkpipe_data) },
	{ 0xd41ef057, __VMLINUX_SYMBOL_STR(path_get) },
	{ 0x1916d50d, __VMLINUX_SYMBOL_STR(rpc_mkpipe_dentry) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7ad77260, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0xb0a2218, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x75804391, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0x40c7247c, __VMLINUX_SYMBOL_STR(si_meminfo) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xf271b26b, __VMLINUX_SYMBOL_STR(mnt_drop_write) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xd815526c, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xcf47188b, __VMLINUX_SYMBOL_STR(rpc_wake_up_next) },
	{ 0x91836265, __VMLINUX_SYMBOL_STR(svc_set_client) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9a196bfc, __VMLINUX_SYMBOL_STR(mutex_lock_killable) },
	{ 0xd3bc530e, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_lock) },
	{ 0x76e80dc, __VMLINUX_SYMBOL_STR(vfs_rmdir) },
	{ 0x7bc3445f, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0x3a6cc6de, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0x819a356c, __VMLINUX_SYMBOL_STR(gss_pseudoflavor_to_service) },
	{ 0x41fb3a22, __VMLINUX_SYMBOL_STR(splice_direct_to_actor) },
	{ 0xe0e2656d, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xd4d7a32, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0x6dabec69, __VMLINUX_SYMBOL_STR(rpc_get_sb_net) },
	{ 0x332b2cd3, __VMLINUX_SYMBOL_STR(svc_xprt_names) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xc0cd27a0, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0xc16bedba, __VMLINUX_SYMBOL_STR(cache_check) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x471dba7d, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x1fce1867, __VMLINUX_SYMBOL_STR(vfs_lock_file) },
	{ 0xa816c470, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x56dbfa37, __VMLINUX_SYMBOL_STR(vfs_readv) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xa0369442, __VMLINUX_SYMBOL_STR(rpc_queue_upcall) },
	{ 0x1885258d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x381ce59f, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x5b584c4b, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x3323c10e, __VMLINUX_SYMBOL_STR(locks_alloc_lock) },
	{ 0xa0552fb4, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0xfaeb9f8, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xa3d2eb7e, __VMLINUX_SYMBOL_STR(svcauth_unix_purge) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xb07abe2, __VMLINUX_SYMBOL_STR(unshare_fs_struct) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x98b742c3, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0x4c2d578a, __VMLINUX_SYMBOL_STR(cache_seq_stop) },
	{ 0x7985f0f2, __VMLINUX_SYMBOL_STR(svc_destroy) },
	{ 0xe7075b97, __VMLINUX_SYMBOL_STR(idr_alloc_cyclic) },
	{ 0xece4f2d2, __VMLINUX_SYMBOL_STR(rpc_create) },
	{ 0x4600c3a3, __VMLINUX_SYMBOL_STR(set_posix_acl) },
	{ 0x2022557d, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x2061ee88, __VMLINUX_SYMBOL_STR(sunrpc_cache_lookup) },
	{ 0xd4eb1022, __VMLINUX_SYMBOL_STR(xdr_restrict_buflen) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5615121b, __VMLINUX_SYMBOL_STR(simple_transaction_read) },
	{ 0x39837f4c, __VMLINUX_SYMBOL_STR(svc_alien_sock) },
	{ 0x80951b28, __VMLINUX_SYMBOL_STR(rpcauth_get_gssinfo) },
	{ 0xf6100bd1, __VMLINUX_SYMBOL_STR(vfs_getxattr) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x2e1960e2, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0x2a0e0ccd, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x980d7548, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x68b83ac6, __VMLINUX_SYMBOL_STR(posix_acl_alloc) },
	{ 0x2989dd45, __VMLINUX_SYMBOL_STR(mount_ns) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7621ab43, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfb97f0e9, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xa32aef88, __VMLINUX_SYMBOL_STR(svc_create_pooled) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xba1a7d51, __VMLINUX_SYMBOL_STR(rpc_lookup_machine_cred) },
	{ 0xe4ab1af5, __VMLINUX_SYMBOL_STR(rpc_d_lookup_sb) },
	{ 0xe97f4ce5, __VMLINUX_SYMBOL_STR(qword_get) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0xc8e96dea, __VMLINUX_SYMBOL_STR(qword_addhex) },
	{ 0x8c0247f1, __VMLINUX_SYMBOL_STR(__splice_from_pipe) },
	{ 0x6eb42a83, __VMLINUX_SYMBOL_STR(unix_domain_find) },
	{ 0x9ae00572, __VMLINUX_SYMBOL_STR(svc_process) },
	{ 0xbb8318e5, __VMLINUX_SYMBOL_STR(svc_rpcb_cleanup) },
	{ 0x69898cc9, __VMLINUX_SYMBOL_STR(svc_set_num_threads) },
	{ 0x5336bdde, __VMLINUX_SYMBOL_STR(cache_seq_next) },
	{ 0x4c933863, __VMLINUX_SYMBOL_STR(exportfs_encode_fh) },
	{ 0xf637383d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2e064e03, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xccb2439f, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2fb4bfa7, __VMLINUX_SYMBOL_STR(lease_modify) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x7b08aa7, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0x9180a9cc, __VMLINUX_SYMBOL_STR(nfsacl_encode) },
	{ 0xedcf6be4, __VMLINUX_SYMBOL_STR(qword_add) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xa5a43783, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x25cde358, __VMLINUX_SYMBOL_STR(cache_unregister_net) },
	{ 0xc23f8b5a, __VMLINUX_SYMBOL_STR(security_inode_getsecctx) },
	{ 0x53c013d, __VMLINUX_SYMBOL_STR(__fsnotify_parent) },
	{ 0x25117cc, __VMLINUX_SYMBOL_STR(svc_xprt_put) },
	{ 0x616bf082, __VMLINUX_SYMBOL_STR(simple_transaction_release) },
	{ 0x9ea4d595, __VMLINUX_SYMBOL_STR(svc_create_xprt) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x63c02ef7, __VMLINUX_SYMBOL_STR(rpc_pipe_generic_upcall) },
	{ 0x486d4250, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0x16e297c3, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0x3621cbb8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x387e1639, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_register) },
	{ 0xbf9d1b96, __VMLINUX_SYMBOL_STR(nfsd_debug) },
	{ 0xeb6bd683, __VMLINUX_SYMBOL_STR(rpc_destroy_pipe_data) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x2affdfa4, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0x58603438, __VMLINUX_SYMBOL_STR(locks_init_lock) },
	{ 0x6f119f7b, __VMLINUX_SYMBOL_STR(mnt_want_write) },
	{ 0x3ccc897f, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xbf1f72f7, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x4f55176c, __VMLINUX_SYMBOL_STR(vfs_fallocate) },
	{ 0x55473219, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x1eebcd3f, __VMLINUX_SYMBOL_STR(exportfs_decode_fh) },
	{ 0xb01da9d5, __VMLINUX_SYMBOL_STR(cache_purge) },
	{ 0xdaa57ec3, __VMLINUX_SYMBOL_STR(totalhigh_pages) },
	{ 0xd2d5ed59, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x17ab16de, __VMLINUX_SYMBOL_STR(vfs_statfs) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0xead811da, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x95add812, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0x94e310e5, __VMLINUX_SYMBOL_STR(svc_proc_register) },
	{ 0xff4e4011, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0xfb0a0a24, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x10927416, __VMLINUX_SYMBOL_STR(locks_in_grace) },
	{ 0x5fd9b2f, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x3b464854, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xab00a6a0, __VMLINUX_SYMBOL_STR(rpc_put_sb_net) },
	{ 0x2d4a8e7, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x90de3f5e, __VMLINUX_SYMBOL_STR(rpc_sleep_on) },
	{ 0x2330651b, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc83b4d5b, __VMLINUX_SYMBOL_STR(posix_acl_from_mode) },
	{ 0x7848b381, __VMLINUX_SYMBOL_STR(nfsacl_decode) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0x95eb66bf, __VMLINUX_SYMBOL_STR(simple_transaction_set) },
	{ 0x41f74a3d, __VMLINUX_SYMBOL_STR(sync_inode_metadata) },
	{ 0x6f7517ba, __VMLINUX_SYMBOL_STR(vfs_writev) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x98498fdf, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x2a5a9212, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xf894eedb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xda8d61a7, __VMLINUX_SYMBOL_STR(security_inode_setsecctx) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xa6fccdb9, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x3746285e, __VMLINUX_SYMBOL_STR(rpc_restart_call_prepare) },
	{ 0x3f5f5e12, __VMLINUX_SYMBOL_STR(svc_shutdown_net) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x2f8ebbe0, __VMLINUX_SYMBOL_STR(rpc_ntop) },
	{ 0xf2c2d059, __VMLINUX_SYMBOL_STR(rpc_wake_up_queued_task) },
	{ 0x36bd681b, __VMLINUX_SYMBOL_STR(groups_alloc) },
	{ 0x5b235297, __VMLINUX_SYMBOL_STR(rpc_pton) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0xf02d1a74, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xb3779978, __VMLINUX_SYMBOL_STR(follow_down) },
	{ 0x4868e84f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xe1a4ed6f, __VMLINUX_SYMBOL_STR(xdr_commit_encode) },
	{ 0xae72d185, __VMLINUX_SYMBOL_STR(svc_exit_thread) },
	{ 0x63da7b78, __VMLINUX_SYMBOL_STR(vfs_test_lock) },
	{ 0x565ad8bf, __VMLINUX_SYMBOL_STR(svc_max_payload) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc5a8500b, __VMLINUX_SYMBOL_STR(simple_transaction_get) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xf3c19ac0, __VMLINUX_SYMBOL_STR(follow_up) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5e07ab84, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x70c81d21, __VMLINUX_SYMBOL_STR(fsnotify) },
	{ 0xee94602d, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0x999826ec, __VMLINUX_SYMBOL_STR(svc_reserve) },
	{ 0x1ff6c8b8, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0xb595995d, __VMLINUX_SYMBOL_STR(svc_xprt_do_enqueue) },
	{ 0x2a1592a, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0x418f5e6d, __VMLINUX_SYMBOL_STR(abort_creds) },
	{ 0x4d07a51b, __VMLINUX_SYMBOL_STR(lockd_up) },
	{ 0x26e2714c, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xc6efdca0, __VMLINUX_SYMBOL_STR(lockd_down) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd5150ff7, __VMLINUX_SYMBOL_STR(read_bytes_from_xdr_buf) },
	{ 0x8b602c2e, __VMLINUX_SYMBOL_STR(iterate_dir) },
	{ 0x1fe1e1ad, __VMLINUX_SYMBOL_STR(locks_end_grace) },
	{ 0x3d454406, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xe6c27926, __VMLINUX_SYMBOL_STR(nlmsvc_unlock_all_by_sb) },
	{ 0xb51a3724, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_unregister) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x4441cc59, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x94cef4d, __VMLINUX_SYMBOL_STR(cache_create_net) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x680cbdc4, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xeb234814, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xeafe2fe4, __VMLINUX_SYMBOL_STR(svc_recv) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x55aa57eb, __VMLINUX_SYMBOL_STR(__break_lease) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xf7b3aedb, __VMLINUX_SYMBOL_STR(auth_domain_find) },
	{ 0x88b18415, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xcf624ee9, __VMLINUX_SYMBOL_STR(svc_bind) },
	{ 0x4ad453b4, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0xe4d25ff0, __VMLINUX_SYMBOL_STR(rpc_shutdown_client) },
	{ 0x528d0c14, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7830fb61, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0xdd1dc93a, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x2919b156, __VMLINUX_SYMBOL_STR(xdr_decode_string_inplace) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0xb236b43f, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0x79df47b0, __VMLINUX_SYMBOL_STR(opens_in_grace) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x6dcdbcb9, __VMLINUX_SYMBOL_STR(svc_close_xprt) },
	{ 0xab95d144, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0x40d7923a, __VMLINUX_SYMBOL_STR(cache_seq_start) },
	{ 0x97f26326, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xf9aa2bc4, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0x380160fc, __VMLINUX_SYMBOL_STR(seq_path) },
	{ 0x77e35ccc, __VMLINUX_SYMBOL_STR(nlmsvc_unlock_all_by_ip) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xadf0d969, __VMLINUX_SYMBOL_STR(locks_mandatory_area) },
	{ 0x3b0a0b53, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0xef464c28, __VMLINUX_SYMBOL_STR(getboottime64) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";
