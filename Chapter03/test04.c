#include <stdio.h>
 
int main()
{
   int a = 21;
   int c ;
 
   c =  a;
   printf("Line 1 - =  �����ʵ����c ��ֵ = %d\n", c );
 
   c +=  a;
   printf("Line 2 - += �����ʵ����c ��ֵ = %d\n", c );
 
   c -=  a;
   printf("Line 3 - -= �����ʵ����c ��ֵ = %d\n", c );
 
   c *=  a;
   printf("Line 4 - *= �����ʵ����c ��ֵ = %d\n", c );
 
   c /=  a;
   printf("Line 5 - /= �����ʵ����c ��ֵ = %d\n", c );
 
   c  = 200;
   c %=  a;
   printf("Line 6 - %= �����ʵ����c ��ֵ = %d\n", c );
 
   c <<=  2;
   printf("Line 7 - <<= �����ʵ����c ��ֵ = %d\n", c );
 
   c >>=  2;
   printf("Line 8 - >>= �����ʵ����c ��ֵ = %d\n", c );
 
   c &=  2;
   printf("Line 9 - &= �����ʵ����c ��ֵ = %d\n", c );
 
   c ^=  2;
   printf("Line 10 - ^= �����ʵ����c ��ֵ = %d\n", c );
 
   c |=  2;
   printf("Line 11 - |= �����ʵ����c ��ֵ = %d\n", c );
 
   return 0;
}
