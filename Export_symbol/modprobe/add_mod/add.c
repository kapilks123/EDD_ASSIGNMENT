#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/moduleparam.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("kapil");

static int add(int x, int y)
{
return (x+y);
}
//command to export symbol to "proc/kallsyms"

EXPORT_SYMBOL_GPL(add);

static int __init add_init(void)
{
printk(KERN_ALERT "\n Explicity added symbol!\n");
return 0;
}

static void __exit add_exit(void)
{
printk(KERN_ALERT "\n cleanup\n");
}

module_init(add_init);
module_exit(add_exit);
