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
	{ 0x51854ade, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xf614f8a3, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xfdac2924, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x79a7512b, __VMLINUX_SYMBOL_STR(mmc_unregister_driver) },
	{ 0x122765b8, __VMLINUX_SYMBOL_STR(mmc_register_driver) },
	{ 0x471ef495, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xd700edf5, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0x51287220, __VMLINUX_SYMBOL_STR(mmc_can_trim) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x1bdc26cf, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x18fd4ba5, __VMLINUX_SYMBOL_STR(mmc_set_blocklen) },
	{ 0x211f68f1, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xf8e398fc, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x40b0ac7b, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0xd2a1cbcf, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0x3ce8698, __VMLINUX_SYMBOL_STR(mmc_start_req) },
	{ 0x4e448ac9, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x9cade8a6, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x10e16549, __VMLINUX_SYMBOL_STR(mmc_erase) },
	{ 0x7fb18fa8, __VMLINUX_SYMBOL_STR(mmc_can_erase) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0x2f7b5c7b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6e4ea346, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x29926abe, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x95cf4e8a, __VMLINUX_SYMBOL_STR(mmc_release_host) },
	{ 0xbed71da9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x136fd3fa, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x320f1e5f, __VMLINUX_SYMBOL_STR(__mmc_claim_host) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x7d88731e, __VMLINUX_SYMBOL_STR(kstrtol_from_user) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xab4217f3, __VMLINUX_SYMBOL_STR(mmc_can_reset) },
	{ 0x3c04b8a9, __VMLINUX_SYMBOL_STR(mmc_hw_reset_check) },
	{ 0x6c057685, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe9bdb9b5, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xaeda1167, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xfee8f228, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa0d1bf5b, __VMLINUX_SYMBOL_STR(mutex_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

