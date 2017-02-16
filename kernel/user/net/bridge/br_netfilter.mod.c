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
	{ 0x136fd3fa, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x86db8947, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x462c660f, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x5c576ff3, __VMLINUX_SYMBOL_STR(__skb_dst_set_noref) },
	{ 0x51bd2975, __VMLINUX_SYMBOL_STR(ip_fragment) },
	{ 0x9f204968, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xe7a664c4, __VMLINUX_SYMBOL_STR(nf_hooks) },
	{ 0xa2320e9d, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xc38259af, __VMLINUX_SYMBOL_STR(__this_cpu_preempt_check) },
	{ 0x9901fe0, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0x14b9a35d, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xbde64936, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2bdf7e87, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x76250f7a, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x75e29cfc, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x73f17f9d, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x1d582061, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0xdd6ba5f6, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0x4e9dffb5, __VMLINUX_SYMBOL_STR(ip_fast_csum) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9f31df65, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbed71da9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfe96a6d8, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x9bfdeff1, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x44a87890, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xeb9ff95, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x289230a4, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xbcc16a70, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

