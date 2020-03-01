#include <stdio.h>
 
int main()
{
    int var1 = 100;
    char var2 = 'a';
    printf("变量var1的地址是: %p\n",&var1);
    printf("变量var2的地址是: %p\n", &var2);
    
    return 0;
}
