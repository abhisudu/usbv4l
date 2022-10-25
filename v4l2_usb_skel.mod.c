#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
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

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc4162456, "module_layout" },
	{ 0x1490644b, "vb2_ops_wait_finish" },
	{ 0x2ce42f7c, "vb2_ops_wait_prepare" },
	{ 0xec38e348, "v4l2_event_unsubscribe" },
	{ 0x4464470, "v4l2_ctrl_subscribe_event" },
	{ 0x2a5b188d, "v4l2_ctrl_log_status" },
	{ 0x384eb8ff, "vb2_ioctl_streamoff" },
	{ 0x96e14390, "vb2_ioctl_streamon" },
	{ 0x4741a548, "vb2_ioctl_create_bufs" },
	{ 0x14afc34b, "vb2_ioctl_dqbuf" },
	{ 0x1ee1aa5, "vb2_ioctl_expbuf" },
	{ 0xa73dd223, "vb2_ioctl_qbuf" },
	{ 0x93593ce, "vb2_ioctl_querybuf" },
	{ 0x995f149, "vb2_ioctl_reqbufs" },
	{ 0xf1865426, "vb2_fop_release" },
	{ 0x83dd63e0, "v4l2_fh_open" },
	{ 0x8736f72b, "vb2_fop_mmap" },
	{ 0x6769086c, "video_ioctl2" },
	{ 0xbf004aa4, "vb2_fop_poll" },
	{ 0xad952f61, "vb2_fop_read" },
	{ 0xb7f634e0, "usb_deregister" },
	{ 0x8f63b77a, "usb_register_driver" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8e72f861, "video_device_release" },
	{ 0x6e386bac, "__video_register_device" },
	{ 0x23a4805d, "video_device_release_empty" },
	{ 0xdd64e639, "strscpy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x476f8154, "vb2_queue_init" },
	{ 0x1db73d11, "vb2_vmalloc_memops" },
	{ 0x3e1931af, "v4l2_device_register" },
	{ 0x6a118319, "devm_kmalloc" },
	{ 0xed77a7c6, "usb_register_dev" },
	{ 0x643477f0, "vb2_buffer_done" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x67ff8751, "usb_bulk_msg" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x174ed0bb, "video_devdata" },
	{ 0xb7f3306b, "_dev_err" },
	{ 0xd2b987bb, "v4l2_device_unregister" },
	{ 0x89a894bc, "video_unregister_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x1da88f1a, "_dev_info" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v13D3p56C9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "853530699668C65B71650B2");
