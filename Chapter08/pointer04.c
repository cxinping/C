#include <stdio.h>
 
int main()
{
    int a = 10;

    int *p;
    p = &a;

    int value = *p;
    printf("取出a的值：%d", value);
    return 0;
}