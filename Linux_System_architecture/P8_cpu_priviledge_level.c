//General Protection Fault
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
typedef unsigned long u64;
static u64 get_cr0(void)
{
__asm__ __volatile__("movq %cr0, %rax");

}
int main(void)
{
get_cr0();
exit(0);
}
/*Intel processor's CR0 control
register: Contains system control flags that control operating mode and states of the
processor. If one has unlimited (read/write) access to the CR0 register, one could
toggle bits that could do the following:
Turn hardware paging on or off
Disable the CPU cache
Change caching and alignment attributes
Disable WP (write protect) on memory (technically, pages) marked as read-
only by the OS

The modern CPU will support at least two privilege levels, or modes, which are
generically called the following:
Supervisor
User
4 rings ring 0 (high priority),ring1,ring2,ring3

Originally, ring levels 1 and 2 were intended for device drivers, but
modern OSes typically run driver code at ring 0 itself. Some
hypervisors (VirtualBox being one) used to use Ring 1 to run the
guest kernel code; this was the case earlier when no hardware
virtualization support was available (Intel VT-x, AMD SV).


##############################################################

7 execution mode in ARM is 


User mode is the usual ARM program execution state, and is used for executing most application programs.

Fast Interrupt (FIQ) mode supports a data transfer or channel process.

Interrupt (IRQ) mode is used for general-purpose interrupt handling.

Supervisor mode is a protected mode for the operating system.

Abort mode is entered after a data or instruction Prefetch Abort.

System mode is a privileged user mode for the operating system.

*/