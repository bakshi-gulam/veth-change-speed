#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5eadf54a, "module_layout" },
	{ 0xe46177a, "ethtool_op_get_link" },
	{ 0xcd0b22d9, "eth_mac_addr" },
	{ 0x5607660f, "rtnl_link_unregister" },
	{ 0x6657f9d3, "rtnl_link_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb81960ca, "snprintf" },
	{ 0x4a4f61ee, "dev_alloc_name" },
	{ 0x349cba85, "strchr" },
	{ 0x58087a76, "rtnl_configure_link" },
	{ 0x4796e4d2, "__put_net" },
	{ 0x666a592b, "register_netdevice" },
	{ 0x38ef68a8, "rtnl_create_link" },
	{ 0x257bbed0, "rtnl_link_get_net" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0x4f391d0e, "nla_parse" },
	{ 0x4bc96635, "ifla_policy" },
	{ 0x237cbb48, "netif_carrier_on" },
	{ 0x153383f5, "free_netdev" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x48c7c564, "dev_forward_skb" },
	{ 0x7628f3c7, "this_cpu_off" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x579fbcd2, "cpu_possible_mask" },
	{ 0x7ecb001b, "__per_cpu_offset" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6afc0d61, "ether_setup" },
	{ 0x69e82307, "netif_carrier_off" },
	{ 0xa82eb7f, "unregister_netdevice_queue" },
	{ 0x50eedeb8, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8F902500F9B3ED530179944");
