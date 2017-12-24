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
	{ 0x28a40b3f, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0x9c52e0ef, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x80d68d3e, __VMLINUX_SYMBOL_STR(fb_register_client) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0xb0bb8580, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x27f371ca, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_unregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xd9575c1d, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x483b53f0, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x70c49588, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9b05f378, __VMLINUX_SYMBOL_STR(devres_alloc) },
	{ 0xe37d112d, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x5ecf3ffe, __VMLINUX_SYMBOL_STR(devres_release) },
	{ 0xb943d039, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6a627e4c, __VMLINUX_SYMBOL_STR(blocking_notifier_call_chain) },
	{ 0x925a7348, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0xd6b59851, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_register) },
	{ 0x3b932912, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x33bf7b15, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf6159923, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xb12cbacb, __VMLINUX_SYMBOL_STR(fb_unregister_client) },
	{ 0xcd9ccedf, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x88123b47, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x71a56371, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x28bb4280, __VMLINUX_SYMBOL_STR(__init_rwsem) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

