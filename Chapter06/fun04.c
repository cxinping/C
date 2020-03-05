#include <stdio.h>

void swap(int v1, int v2) {
    printf("更换前：v1=%d, v2=%d\n", v1, v2);
    
    // 定义一个中间变量
    int temp;
    
    // 交换v1和v2的值
    temp = v1;
    v1 = v2;
    v2 = temp;
    
    printf("更换后：v1=%d, v2=%d\n", v1, v2);
}

int main()
{
    int a = 10, b = 9;
    printf("更换前：a=%d, b=%d\n", a, b);
    
    swap(a, b);
    
    printf("更换后：a=%d, b=%d", a, b);
    return 0;
}
