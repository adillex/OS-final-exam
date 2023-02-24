#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/kthread.h>
#include <linux/sched.h>
#include <linux/time.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MAA");
MODULE_AUTHOR("CS-2106");

int init_module(void)
{

int q;
int w = 14;
int e= 45;
q= w + e;

printk(KERN_INFO "The sum is %d\n",q);

return 0;
}

void cleanup_module(void)
{
print(KERN_INFO "Goodbye!\n");
}
