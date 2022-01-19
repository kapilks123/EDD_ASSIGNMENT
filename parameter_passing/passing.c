#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_AUTHOR("kapil");

static char* charvar = "module";
static int intvar = 10;

module_param(charvar,charp,S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH);
module_param(intvar, int, S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH);

static int __init param_init(void)
{
printk(KERN_ALERT "\n We are in init function\n");
printk(KERN_ALERT "\n The Value of character =%s\n", charvar);
printk(KERN_ALERT "\n The value of integer =%d\n",intvar);
return 0;
}
static void __exit param_exit(void)
{
printk(KERN_ALERT "\n Bye\n");
}

module_init(param_init);
module_exit(param_exit);
