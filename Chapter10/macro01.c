#include <stdio.h>

// Դ���������еĺ���PI�ڱ���Ԥ�����ʱ�򶼻ᱻ3.14������
#define PI 3.14

// ����Բ�İ뾶��radius���ܳ�
float girth(float radius) {
    return 2 * PI *radius;
}

int main ()
{
    float g = girth(2);

    printf("Բ���ܳ�Ϊ��%f", g);
    return 0;
}