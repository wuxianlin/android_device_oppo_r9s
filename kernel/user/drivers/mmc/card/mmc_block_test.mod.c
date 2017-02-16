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
	{ 0x78a0576c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x75a35f4c, __VMLINUX_SYMBOL_STR(test_iosched_unregister) },
	{ 0x1aaa5fad, __VMLINUX_SYMBOL_STR(test_iosched_register) },
	{ 0x21a342c0, __VMLINUX_SYMBOL_STR(test_iosched_set_ignore_round) },
	{ 0x7c484c0b, __VMLINUX_SYMBOL_STR(mmc_blk_get_packed_statistics) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4119a07, __VMLINUX_SYMBOL_STR(test_iosched_add_unique_test_req) },
	{ 0x29926abe, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x8d3f8a42, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbed71da9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x136fd3fa, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xaeda1167, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xe08ff7ad, __VMLINUX_SYMBOL_STR(test_iosched_mark_test_completion) },
	{ 0xcfa53b1f, __VMLINUX_SYMBOL_STR(test_iosched_create_test_req) },
	{ 0x1c3cfc56, __VMLINUX_SYMBOL_STR(check_test_completion) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x638a280c, __VMLINUX_SYMBOL_STR(test_iosched_free_test_req_data_buffer) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x3a07aade, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x569f94b2, __VMLINUX_SYMBOL_STR(test_iosched_set_test_result) },
	{ 0xd5b38042, __VMLINUX_SYMBOL_STR(__blk_run_queue) },
	{ 0x59af4b8f, __VMLINUX_SYMBOL_STR(test_iosched_add_wr_rd_test_req) },
	{ 0x9f7fdce7, __VMLINUX_SYMBOL_STR(mmc_blk_init_packed_statistics) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa3b11f0a, __VMLINUX_SYMBOL_STR(test_iosched_start_test) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=test-iosched";

