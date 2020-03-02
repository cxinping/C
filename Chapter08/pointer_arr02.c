#include <stdio.h>
 
const int MAX = 3;
 
int main ()
{
   int  var[] = {10, 100, 200};
   int  i, *ptr;
 
   /* 指针中最后一个元素的地址 */
   ptr = &var[MAX-1];
   for ( i = MAX; i > 0; i--)
   { 
      printf("var[%d]的存储地址 = %p\n", i, ptr );
      printf("var[%d]的存储值 = %d\n", i, *ptr );
 
      /* 移动到下一个位置 */
      ptr--;
   }
   return 0;
}