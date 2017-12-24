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
	{ 0x8b001288, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9c52e0ef, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xaa0c3c43, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x232bd278, __VMLINUX_SYMBOL_STR(check_test_completion) },
	{ 0x6c17d5f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x3df2c64a, __VMLINUX_SYMBOL_STR(compare_buffer_to_pattern) },
	{ 0x9d3dea2f, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x2e8ffaa8, __VMLINUX_SYMBOL_STR(test_iosched_add_wr_rd_test_req) },
	{ 0xcd27efa9, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x74ac250b, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x26ff5605, __VMLINUX_SYMBOL_STR(test_iosched_register) },
	{ 0x3d0a331d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x9ea6d626, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x43e392c1, __VMLINUX_SYMBOL_STR(blk_post_runtime_resume) },
	{ 0xfa82e194, __VMLINUX_SYMBOL_STR(ufshcd_query_attr) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8af89c67, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x10f1064d, __VMLINUX_SYMBOL_STR(kstrtoint_from_user) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x48c90ed5, __VMLINUX_SYMBOL_STR(scsi_gendisk_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xcc85fcb6, __VMLINUX_SYMBOL_STR(async_schedule) },
	{ 0x8738ec3e, __VMLINUX_SYMBOL_STR(ufshcd_query_flag) },
	{ 0x1e044225, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0xecf62623, __VMLINUX_SYMBOL_STR(test_iosched_start_test) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x33bf7b15, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x73ea71a2, __VMLINUX_SYMBOL_STR(ufshcd_query_descriptor) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xf14ecfab, __VMLINUX_SYMBOL_STR(scsi_gendisk_get_from_dev) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xf3a426a4, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x893e204b, __VMLINUX_SYMBOL_STR(test_iosched_free_test_req_data_buffer) },
	{ 0x5bbd8828, __VMLINUX_SYMBOL_STR(test_iosched_mark_test_completion) },
	{ 0x90a16d40, __VMLINUX_SYMBOL_STR(test_iosched_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=test-iosched";

