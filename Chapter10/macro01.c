#include <stdio.h>

// 源程序中所有的宏名PI在编译预处理的时候都会被3.14所代替
#define PI 3.14

// 根据圆的半径计radius算周长
float girth(float radius) {
    return 2 * PI *radius;
}

int main ()
{
    float g = girth(2);

    printf("圆的周长为：%f", g);
    return 0;
}