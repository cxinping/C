#include <stdio.h>
 
int main( )
{
   char c1,c2;
   c1 = 'a';
   c2 = 'B';
   printf("c1=%c,c2=%c\n" , c1 - 32,c2 + 32);
   printf("c1+10=%d\n" , c1 + 10);
   printf("c1+10=%c\n" , c1 + 10);
   printf("c2+10=%d\n" , c2 + 10);
   printf("c2+10=%c\n" , c2 + 10);
   return 0;
}