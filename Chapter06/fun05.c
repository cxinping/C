#include <stdio.h>

void swap(char *v1, char *v2) {
    // �м����
    char temp;
    
    // ȡ��v1ָ��ı�����ֵ
    temp = *v1;
    
    // ȡ��v2ָ��ı�����ֵ��Ȼ��ֵ��v1ָ��ı���
    *v1 = *v2;
    
    // ��ֵ��v2ָ��ı���
    *v2 = temp;
}

int main()
{
    char a = 10, b = 9;
    printf("����ǰ��a=%d, b=%d\n", a, b);
    
    swap(&a, &b);
    
    printf("������a=%d, b=%d", a, b);
    return 0;
}