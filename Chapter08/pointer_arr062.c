#include <stdio.h>
#include <string.h>   //Ϊ��ʹ�� strlen

int main ()
{
    // ����һ���ַ�������ָ��sָ������ַ���
    char *s = "xp";

    // ʹ��strlen���������ַ�������
    int len = strlen(s);

    printf("�ַ������ȣ�%d\n", len);
    printf("s = %s", s);
    return 0;
}