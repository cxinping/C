#include <stdio.h>
 
int main ()
{
    // 定义一个int类型的数组
    int a[4] = {1, 2, 3, 4};

    // 定义一个int类型的指针，并指向数组的第0个元素
    int *p = a;

    int i;
    for (i = 0; i < 4; i++) {
        // 利用指针运算符*取出数组元素的值
        int value = *(p+i);
        
        printf("a[%d] = %d \n", i, value);
    }

    return 0;
}
