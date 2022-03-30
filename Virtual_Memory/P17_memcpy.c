#include <stdio.h>
#include <string.h>
int main () {
   char a[] = "Firststring";
   const char b[] = "Secondstring";
   memcpy(a, b, 5);
   printf("New arrays : %s\t%s", a, b);
   return 0;
}