#include <stdio.h>
 
int main()
{
   int a = 4;
   short b;
   int* ptr;
  
   /* & �� * �����ʵ�� */
   ptr = &a;    /* 'ptr' ���ڰ��� 'a' �ĵ�ַ */
   printf("a ��ֵ�� %d\n", a);
   printf("*ptr �� %d\n", *ptr);
 
   /* ��Ԫ�����ʵ�� */
   a = 10;
   b = (a == 1) ? 20: 30;
   printf( "b ��ֵ�� %d\n", b );
 
   b = (a == 10) ? 20: 30;
   printf( "b ��ֵ�� %d\n", b );
}