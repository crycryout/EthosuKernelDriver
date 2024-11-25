#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(staging, "Y");


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xddf6ad7a, "completion_done" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6450d1dd, "__class_create" },
	{ 0x20978fb9, "idr_find" },
	{ 0xc0d1212d, "rproc_get_by_phandle" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x90e6520d, "devm_kmalloc" },
	{ 0xb882241a, "rproc_boot" },
	{ 0x42a9845b, "of_property_read_variable_u32_array" },
	{ 0xe455ba3b, "platform_driver_unregister" },
	{ 0xa6257a2f, "complete" },
	{ 0x14013af3, "of_n_size_cells" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf8d5cf6f, "class_destroy" },
	{ 0xd18205c0, "fget" },
	{ 0xe2964344, "__wake_up" },
	{ 0x87099077, "of_get_property" },
	{ 0xd9a1196b, "rproc_set_firmware" },
	{ 0x92997ed8, "_printk" },
	{ 0xc6a958cb, "anon_inode_getfd" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdd448aa3, "of_reserved_mem_device_release" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xe4227d60, "cdev_add" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x174ddd0d, "fput" },
	{ 0x431312b8, "devm_kfree" },
	{ 0x5ba6d756, "_dev_err" },
	{ 0x22d9ca83, "__register_rpmsg_driver" },
	{ 0x7c137cbc, "device_create" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x15cce07e, "dma_alloc_attrs" },
	{ 0x17df5e91, "unregister_rpmsg_driver" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0xdcb764ad, "memset" },
	{ 0x2218a687, "_dev_warn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcd09d777, "of_n_addr_cells" },
	{ 0xb73dc69c, "of_reserved_mem_device_init_by_idx" },
	{ 0xc29643dd, "nonseekable_open" },
	{ 0x3cd61e2b, "__platform_driver_register" },
	{ 0x7dfe32a9, "dma_set_coherent_mask" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc459ab38, "dma_free_attrs" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x776edf49, "device_destroy" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x61d56470, "rpmsg_send" },
	{ 0xabf3804f, "dma_mmap_attrs" },
	{ 0xeed20ec7, "alt_cb_patch_nops" },
	{ 0xa0e6bafb, "dma_set_mask" },
	{ 0xd022689a, "cdev_init" },
	{ 0xfd3c584f, "cdev_del" },
	{ 0x754e4864, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Carm,ethosu");
MODULE_ALIAS("of:N*T*Carm,ethosuC*");

MODULE_INFO(srcversion, "4823ACB46C598D61D02E339");
