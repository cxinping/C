
#include <stdio.h>
 
const int MAX = 3;
 
int main ()
{
   int  var[] = {10, 100, 200};
   int i, *ptr[MAX];
 
   for ( i = 0; i < MAX; i++)
   {
      ptr[i] = &var[i]; /* 赋值为整数的地址 */
   }

   for ( i = 0; i < MAX; i++)
   {
      printf("var[%d] = %d\n", i, *ptr[i] );
   }
   
   return 0;
}
