#include <stdio.h>
 
int main()
{
    int a = 20;
    printf("修改前，a的值：%d\n", a);

    // 指针变量p指向变量a
    int *p = &a;

    // 通过指针变量p间接修改变量a的值
    *p = 5;

    printf("修改后，a的值：%d\n", a);
    return 0;
}
