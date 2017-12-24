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
	{ 0x5c9309b8, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x9ea6d626, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x984b0bd9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xdeaa304b, __VMLINUX_SYMBOL_STR(mmc_unregister_driver) },
	{ 0x10cc1e4, __VMLINUX_SYMBOL_STR(mmc_register_driver) },
	{ 0xf698d57e, __VMLINUX_SYMBOL_STR(mmc_can_trim) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x1bdc26cf, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x628f6aa1, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x880fe1e3, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0xde761acb, __VMLINUX_SYMBOL_STR(mmc_set_blocklen) },
	{ 0xf8e398fc, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0x211f68f1, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xa2955fa, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0xebb69abf, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0xf076147c, __VMLINUX_SYMBOL_STR(mmc_start_req) },
	{ 0x897b3791, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x5cdc4eb, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x1536dd82, __VMLINUX_SYMBOL_STR(mmc_erase) },
	{ 0xbfa0ef82, __VMLINUX_SYMBOL_STR(mmc_can_erase) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0xbf7c62c5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x930f4c92, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x74ac250b, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x9c52e0ef, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x763ee429, __VMLINUX_SYMBOL_STR(mmc_release_host) },
	{ 0x33bf7b15, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3934d80a, __VMLINUX_SYMBOL_STR(__mmc_claim_host) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x7d88731e, __VMLINUX_SYMBOL_STR(kstrtol_from_user) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x18eb6dc1, __VMLINUX_SYMBOL_STR(mmc_can_reset) },
	{ 0xac0362d2, __VMLINUX_SYMBOL_STR(mmc_hw_reset_check) },
	{ 0xc5f0bdfa, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x6c17d5f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xfabd2ec3, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xb0bb8580, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x70c49588, __VMLINUX_SYMBOL_STR(mutex_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

