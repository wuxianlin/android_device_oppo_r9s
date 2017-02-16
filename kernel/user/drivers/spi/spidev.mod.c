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
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xcf383754, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x650c67d6, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x13a00a02, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x244712c1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x8c71e92d, __VMLINUX_SYMBOL_STR(spi_new_device) },
	{ 0x27f7fe64, __VMLINUX_SYMBOL_STR(spi_busnum_to_master) },
	{ 0xb2619ddc, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0xd3592dae, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x7641d2e8, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x9c92c396, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x3db9d206, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xbed71da9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x136fd3fa, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa9924d95, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xbdac8b02, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x4b644fc6, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf9dde891, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2775db20, __VMLINUX_SYMBOL_STR(spi_async) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x14c55f04, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfee8f228, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x68383fa3, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xa0d1bf5b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Crohm,dh2228fv*");
MODULE_ALIAS("of:N*T*Cqcom,spi-msm-codec-slave*");
