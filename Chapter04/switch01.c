#include <stdio.h>
 
int main ()
{
   /* �ֲ��������� */
   char grade = 'B';
 
   switch(grade)
   {
   case 'A' :
      printf("�ܰ���\n" );
      break;
   case 'B' :
   case 'C' :
      printf("���ú�\n" );
      break;
   case 'D' :
      printf("��ͨ����\n" );
      break;
   case 'F' :
      printf("�������һ��\n" );
      break;
   default :
      printf("��Ч�ĳɼ�\n" );
   }
   printf("���ĳɼ��� %c\n", grade );
 
   return 0;
}
