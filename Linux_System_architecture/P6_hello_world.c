//ABI stands for Application Binary Interface(ABI)
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
int a;
printf("Hemllo \n");
a = 5;
exit(0);
}


//to run gcc -Wall -Wextra hello.c -o hello
// ./hello


//to see the machine source code 
//objdump --source hello