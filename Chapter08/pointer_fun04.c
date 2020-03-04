#include <stdio.h>

// 减法运算
int minus(int a, int b) {
    return a - b;
}

// 加法运算
int sum(int a, int b) {
    return a + b;
}

int mul(int a, int b) {
    return a * b;
}

// 这个counting函数是用来做a和b之间的计算，至于做加法还是减法运算，由函数的第1个参数决定
void counting( int (*p)(int, int) , int a, int b) {
    int result = p(a, b);
    printf("计算结果为：%d\n", result);
}

int main()
{
    // 进行乘法运算
    counting(mul, 6, 4);

    return 0;
}