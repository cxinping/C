#include <stdio.h>

// b��change�������β�(��ʽ����)
void change(int b) {
    b = 9;
}

int main ()
{
    int a[3];
    a[0] = 10;
    
    printf("��������ǰ��a[0]��%d\n", a[0]);
    change(a[0]); // a[0]��test������ʵ��(ʵ�ʲ���)
    printf("�������ú��a[0]��%d", a[0]);

    return 0;
}