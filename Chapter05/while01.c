#include <stdio.h>
 
int main ()
{
   /* 局部变量定义 */
   int sum = 0, i=1;

   /* while 循环执行 */
   while( i <= 10 )
   {
      sum = sum + i;
      i = i + 1;      
   }
   printf("sum=%d" , sum);
 
   return 0;
}