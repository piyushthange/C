#include <linux/module.h>
#include <linux/init.h>

/* Mod Inf */
MODULE_LICENSE("GPLv2");
MODULE_AUTHOR("Pi");
MODULE_DESCRIPTION("This is hello module & can be loaded using insmod/rmmod/lsmod");

static int __init hello(void) {
	printk("Hello, Kernel!\n");
	return 0;
}

static void __exit bye_k(void) {
	printk("Bye, Kernel!\n");
}

module_init(hello);
module_exit(bye_k);
