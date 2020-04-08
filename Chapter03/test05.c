
#include <stdio.h>
 
int main()
{
 
   unsigned int a = 60;    /* 60 = 0011 1100 */  
   unsigned int b = 13;    /* 13 = 0000 1101 */
   int c = 0;           
 
   c = a & b;       /* 12 = 0000 1100 */ 
   printf("Line 1 - c ��ֵ�� %d\n", c );
 
   c = a | b;       /* 61 = 0011 1101 */
   printf("Line 2 - c ��ֵ�� %d\n", c );
 
   c = a ^ b;       /* 49 = 0011 0001 */
   printf("Line 3 - c ��ֵ�� %d\n", c );
 
   c = ~a;          /*-61 = 1100 0011 */
   printf("Line 4 - c ��ֵ�� %d\n", c );
 
   c = a << 2;     /* 240 = 1111 0000 */
   printf("Line 5 - c ��ֵ�� %d\n", c );
 
   c = a >> 2;     /* 15 = 0000 1111 */
   printf("Line 6 - c ��ֵ�� %d\n", c );

   return 0;
}
