#include <stdio.h>
 
int main ()
{
   int  var;
   int  *ptr;
   int  **pptr;

   var = 3000;

   /* ��ȡ var �ĵ�ַ */
   ptr = &var;

   /* ʹ������� & ��ȡ ptr �ĵ�ַ */
   pptr = &ptr;

   /* ʹ�� pptr ��ȡֵ */
   printf("var = %d\n", var );
   printf("*ptr = %d\n", *ptr );
   printf("**pptr = %d\n", **pptr);

   return 0;
}