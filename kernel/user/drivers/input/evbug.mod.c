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
	{ 0xcc5e411e, __VMLINUX_SYMBOL_STR(input_unregister_handler) },
	{ 0xbb51e46, __VMLINUX_SYMBOL_STR(input_register_handler) },
	{ 0x9c52e0ef, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7c64f5c3, __VMLINUX_SYMBOL_STR(input_open_device) },
	{ 0xde915114, __VMLINUX_SYMBOL_STR(input_register_handle) },
	{ 0x33bf7b15, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4a0231e5, __VMLINUX_SYMBOL_STR(input_unregister_handle) },
	{ 0xdb2678a1, __VMLINUX_SYMBOL_STR(input_close_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");
