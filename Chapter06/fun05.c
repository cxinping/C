#include <stdio.h>

void swap(char *v1, char *v2) {
    // 中间变量
    char temp;
    
    // 取出v1指向的变量的值
    temp = *v1;
    
    // 取出v2指向的变量的值，然后赋值给v1指向的变量
    *v1 = *v2;
    
    // 赋值给v2指向的变量
    *v2 = temp;
}

int main()
{
    char a = 10, b = 9;
    printf("更换前：a=%d, b=%d\n", a, b);
    
    swap(&a, &b);
    
    printf("更换后：a=%d, b=%d", a, b);
    return 0;
}