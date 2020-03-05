#include <stdio.h>

// b是test函数的形参(形式参数)
void test(int b) 
{
    b = 9; // 改变了形参b的值
}

int main()
{
    int a = 10;
    printf("函数调用前的a：%d\n", a);
    
    test(a); // a是test函数的实参(实际参数)

    printf("函数调用后的a：%d", a);
    return 0;
}
