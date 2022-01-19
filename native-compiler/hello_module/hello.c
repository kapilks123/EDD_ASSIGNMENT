#include<linux/init.h>
#include<linux/module.h>
#include<asm/rwonce.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("kapil");
MODULE_DESCRIPTION("A simple hello_world kernel module");

static int __init hello_init(void)
{
  printk(KERN_ALERT "\n In Init Module\n");
  printk(KERN_ALERT "\n Hello, World\n");
return 0;
}

static void __exit hello_exit(void)
{
printk(KERN_ALERT "\n In cleanup Module\n");
printk(KERN_ALERT "\n Good Bye\n");
}

module_init(hello_init);
module_exit(hello_exit);

