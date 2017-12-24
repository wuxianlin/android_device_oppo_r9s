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
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9c7e35e4, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xcd9ccedf, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0xf6159923, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xe6c9184a, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x3e62e34a, __VMLINUX_SYMBOL_STR(spi_new_device) },
	{ 0x9d09c630, __VMLINUX_SYMBOL_STR(spi_busnum_to_master) },
	{ 0x4ffa8a5f, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x71a56371, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xcd4375a7, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x9c52e0ef, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x9b4c4b98, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x483b53f0, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x33bf7b15, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb943d039, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x24365922, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x3ebf9845, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf9dde891, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x89fa0a53, __VMLINUX_SYMBOL_STR(spi_async) },
	{ 0xba8c1381, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb0bb8580, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x61414efb, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x70c49588, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Crohm,dh2228fv*");
MODULE_ALIAS("of:N*T*Cqcom,spi-msm-codec-slave*");
