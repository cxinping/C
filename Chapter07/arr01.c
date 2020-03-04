#include <stdio.h>
 
int main ()
{
    int a[3]; 
    printf("a[0] address = %x\n", &a[0]);
    printf("a[1] address = %x\n" , &a[1]);
    printf("a[2] address = %x\n" , &a[2]);
    return 0;
}