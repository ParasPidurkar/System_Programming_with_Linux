#include<stdio.h>
#include<stdlib.h>
static void bar_is_now_closed(void)
{
printf("In function %s\n"
"\t(bye, pl go '~/' now).\n", __FUNCTION__);
printf("\n Now blocking on pause()...\n"
" Connect via GDB's 'attach' and then issue the 'bt' command"
" to view the process stack\n");
pause(); /*process blocks here until it receives a signal */
}
static void bar(void)
{
printf("In function %s\n", __FUNCTION__);
bar_is_now_closed();
}
static void foo(void)
{
printf("In function %s\n", __FUNCTION__);
bar();
}
int main(int argc, char **argv)
{
printf("In function %s\n", __FUNCTION__);
foo();
exit (EXIT_SUCCESS);
}