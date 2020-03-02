#include <stdio.h>

/**
 *这个函数返回一个指针  函数功能就是将a，b最大值的地址返回。 
*/
int *returnPointe(int a,int b) {
    int *p;
    if(a > b) {
        p = &a;
    }else {
        p = &b;
    }    
    return p;    
}

int main ()
{
    int a = 10,b = 20;
    int *p;
    p = &a;
    printf("returnPointe=%d\n", *returnPointe(a,b) );//输出最大值

    return 0;
}