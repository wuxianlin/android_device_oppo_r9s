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
	{ 0x9c52e0ef, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd43df66b, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x462c660f, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x9a6624cd, __VMLINUX_SYMBOL_STR(__skb_dst_set_noref) },
	{ 0x8a99bc47, __VMLINUX_SYMBOL_STR(ip_fragment) },
	{ 0x6bc117c8, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xe7a664c4, __VMLINUX_SYMBOL_STR(nf_hooks) },
	{ 0xd174dfe8, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xc38259af, __VMLINUX_SYMBOL_STR(__this_cpu_preempt_check) },
	{ 0x70ef7967, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0x8617f5ae, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xb6a4dc8b, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xecada177, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x93428258, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xa37ea54b, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x6a7eca86, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xf36794bd, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0xf4af7e46, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0x4e9dffb5, __VMLINUX_SYMBOL_STR(ip_fast_csum) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb68e7bb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x33bf7b15, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc720b5fd, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0xc37c3371, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd7d0e5f3, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xc2c6c3bf, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd8b8d02b, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x723146d7, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

