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
	{ 0x8ec27570, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xe3c58afe, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe2f58c71, __VMLINUX_SYMBOL_STR(devm_backlight_device_register) },
	{ 0xbf7c62c5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb0bb8580, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x70c49588, __VMLINUX_SYMBOL_STR(mutex_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=backlight";

