#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/moduleparam.h>
#include "add.h"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("kapil");

static int avg_init(void)
{
int sum = add(2,4);
printk(KERN_ALERT "Average =%d", (sum/2));
return 0;
}

static void avg_exit(void)
{
printk(KERN_ALERT "averag calculated\n");
}

module_init(avg_init);
module_exit(avg_exit);
