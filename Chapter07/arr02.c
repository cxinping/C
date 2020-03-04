#include <stdio.h>
 
int main ()
{
    int i,a[5];
    // 利用循环，分别为数组中5个元素赋值
    for(i=0;i<5;i++){
        a[i] = i;
    }

    // 将数组中的5个元素输出到控制台
    for(i =0;i<5;i++)
        printf("a[%d]=%d\n",i,a[i]);

    return 0;
}