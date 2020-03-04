#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main()
{
    // 定义一个指针变量p，指向sum函数
    int (*p)(int a, int b) = sum;
    
    // 利用指针变量p调用函数
    int result = (*p)(1, 3);
    
    printf("%d", result);
    return 0;
}