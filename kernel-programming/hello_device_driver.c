#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_AUTHOR("Piyush Thange");
MODULE_DESCRIPTION("This is a hello world device driver");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

static int __init hello_init(void)
{
	pirntk(KERN_INFO "Hello, World!!\n");
	return 0; /* succes */
}

static void __exit hello_exit(void)
{
	printk(KERN_INFO "Goodbye, Wrold!!\n");
}

module_init(hello_init);
module_init(hello_eixt);
