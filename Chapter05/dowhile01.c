#include <stdio.h>
 
int main ()
{
   int sum = 0, i=1;

   do
   {
      sum = sum + i;
      i = i + 1;      
   }while( i <= 10 );
   
   printf("sum=%d" , sum);
 
   return 0;
}