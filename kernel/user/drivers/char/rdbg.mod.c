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
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x72502cd, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x13a00a02, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x68383fa3, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x9c92c396, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd3592dae, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x12d2e27f, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xac0e1f11, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3db9d206, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xabf42529, __VMLINUX_SYMBOL_STR(smem_find) },
	{ 0x66b6249f, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x524aadb8, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x55e4b4c8, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0xd842c77, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xb681df3, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x6dbec6dc, __VMLINUX_SYMBOL_STR(of_count_phandle_with_args) },
	{ 0xe9a93e35, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfee8f228, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xa0d1bf5b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6e4ea346, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xde434656, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

