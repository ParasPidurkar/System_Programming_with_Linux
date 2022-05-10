#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
// fork();
// fork();
if (fork() == -1)
printf("fork failed!\n");
//printf("Hello, fork.\n");
printf("PID %d: PPID %d Hello, fork.\n", getpid(),getppid());
exit (EXIT_SUCCESS);
}