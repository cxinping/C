#include <stdio.h>
 
int main ()
{
    // ����һ��ָ��p
    char *p;

    // ����һ������s����ַ���
    char s[] = "xp";

    // ָ��pָ���ַ��������ַ�'x'
    p = s; // ���� p = &s[0];

    for (; *p != '\0'; p++) {
        printf("character = %c \n", *p);
    }

    return 0;
}