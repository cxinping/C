#include <stdio.h>
 
void swap(int *a,int *b){
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
 
int main ()
{
   int x, y;
   int *p_x, *p_y;
   x = 5;
   y = 3;

   p_x = &x;
   p_y = &y;
   printf("交换前 x=%d, y=%d\n",x,y);
   swap(p_x,p_y);
   printf("交换后 x=%d, y=%d\n",x,y);

   return 0;
}