#include <stdio.h>
 
int main ()
{
   int sum = 0, i;

   for(i=1;i<=10;i++){
       sum +=i;
   }
   
   printf("sum=%d" , sum);
 
   return 0;
}