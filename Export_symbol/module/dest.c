#include <linux/init.h> // Required header for the ininialization and cleanup Functionalities
#include <linux/module.h> //this Header contains the necessary stuff for the module
#include <linux/kernel.h> // This header allow the passing of parameter to the modules during insertion
#include "Adding.h"

MODULE_LICENSE("GPL"); // Macros that decide the license of the module
MODULE_AUTHOR("kapil");
MODULE_DESCRIPTION("Export symbol module");

//static int one =20;
//static int two =30;
// Initialization function for the program
static int adding_init(void)
{
printk(KERN_ALERT "Initialization of module\n");
printk(KERN_ALERT "\n we are going to add\n");
printk(KERN_ALERT "\n add result is: %d\n", my_add(2,4));

// printk(KERN_ALERT "Average of two number : %d\n", (my_add(30,30))/2);

return 0;
}

static void adding_exit(void)
{
printk(KERN_ALERT "\n we are leaving\n");
}

module_init(adding_init);
module_exit(adding_exit);

