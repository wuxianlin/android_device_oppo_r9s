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
	{ 0x894a0f00, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0x136fd3fa, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x80d68d3e, __VMLINUX_SYMBOL_STR(fb_register_client) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0xfee8f228, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaefa34b5, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_unregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xe3f0136d, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x3db9d206, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa0d1bf5b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x575697af, __VMLINUX_SYMBOL_STR(devres_alloc) },
	{ 0xfc29bed2, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x59f4888e, __VMLINUX_SYMBOL_STR(devres_release) },
	{ 0xa9924d95, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6cbdacf1, __VMLINUX_SYMBOL_STR(blocking_notifier_call_chain) },
	{ 0x9a8de073, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0xfe8d0acd, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_register) },
	{ 0x27272c18, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0xbed71da9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x13a00a02, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xb12cbacb, __VMLINUX_SYMBOL_STR(fb_unregister_client) },
	{ 0x650c67d6, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb193cae7, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xd3592dae, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xeb2640d1, __VMLINUX_SYMBOL_STR(__init_rwsem) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

