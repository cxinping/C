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

    printf("变量a的地址是: %p\n", &a );
    printf("指针变量p存储的是: %p\n", p );
    printf("指针变量p的地址是: %p\n", &p );

    return 0;
}