#include <stdio.h>
 
int main ()
{
    int a[2][3]; 
    printf("a[0][0] address = %x\n", &a[0][0]);
    printf("a[0][1] address = %x\n", &a[0][1]);
    printf("a[0][2] address = %x\n", &a[0][2]);
    printf("a[1][0] address = %x\n" , &a[1][0]);
    printf("a[1][1] address = %x\n" , &a[1][1]);
    printf("a[1][2] address = %x\n" , &a[1][2]);
      
    return 0;
}