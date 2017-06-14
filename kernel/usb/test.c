#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michael");

static int __init test(void)
{
	printk(KERN_INFO "Hello world");
	return 0;
}

static void __exit test_exit(void)
{
	printk(KERN_INFO "Bye");
}


