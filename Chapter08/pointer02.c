#include <stdio.h>
 
int main()
{
    int  var = 20;   /* 实际变量的声明 */
    int  *p;        /* 指针变量的声明 */

    p = &var;  /* 在指针变量中存储 var 的地址 */

    printf("变量var的地址是: %p\n", &var  );

    /* 在指针变量中存储的地址 */
    printf("指针变量p存储的是: %p\n", p );
    printf("指针变量p的地址是: %p\n", &p );

    /* 使用指针访问值 */
    printf("指针*p访问值是: %d\n", *p );

    return 0;
}