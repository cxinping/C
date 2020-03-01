#include <stdio.h>
 
int main()
{
    int a = 100;
    int *p = &a;

    printf("a 变量的地址是: %p\n",&a);
    printf("p 变量的地址是: %p\n", p);

    return 0;
}
