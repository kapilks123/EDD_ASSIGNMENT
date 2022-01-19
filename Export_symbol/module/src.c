#include <linux/init.h>
#include <linux/module.h>
//#include <linux/moduleparam.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("kapil");
MODULE_DESCRIPTION("Export symbol module");

static int my_add(int a, int b)
{
return (a + b);
}
/* Command to export symbol into kernel symbol table */
EXPORT_SYMBOL_GPL(my_add);

// initialization function for the program
static int prog_init(void)
{
printk("\n Initialization of module\n");
return 0;
}

// cleanup function
static void prog_exit(void)
{
	printk(KERN_ALERT "\n exit from module\n");
}
//MACROS that allow the user to override the names of the above mentioned functions with thier own choice...
module_init(prog_init); //for INITIALIZATION function
module_exit(prog_exit); //for CLEANUP function

