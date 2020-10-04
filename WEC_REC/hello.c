#include<linux/kernel.h>    // Needed for kernal info
#include<linux/module.h>    // Needed for all modules
#include<linux/init.h>      // Needed for using  macros

static int __init hello2_init(void)	// __init macro causes the function to be discarded after the function is executed
{
	printk(KERN_DEBUG "Hello world! i am dharmick's code \n");	 //prints to the kern debug log level
	return 0;
}

static void __exit hello2_exit(void)	 // __exit macro causes the omission of the function when the module is built into the kernel 
{
	printk(KERN_DEBUG "Goodbye \n");
}

module_init(hello2_init);	//module_init is a macro which points towards the code that has to to be run on loading module onto kernel 
module_exit(hello2_exit);	//module_exit is a macro which points towards the code that has to to be run on removing module from  kernel

MODULE_LICENSE("GPL");		//this provides the type of license used

MODULE_AUTHOR("K Dharmick Sai");	
MODULE_DESCRIPTION("Prints hello world on loading module and goodbye on removing module");
