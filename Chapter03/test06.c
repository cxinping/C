#include <stdio.h>

int main(){
   int a = 4;
   short b;
   double c;
 
   /* sizeof �����ʵ�� */
   printf("Line 1 - ���� a �Ĵ�С = %lu\n", sizeof(a) );
   printf("Line 2 - ���� b �Ĵ�С = %lu\n", sizeof(b) );
   printf("Line 3 - ���� c �Ĵ�С = %lu\n", sizeof(c) );

   return 0;
}