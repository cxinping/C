#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int main ()
{
    int a,b,result;
    a = 3;
    b = 2;

    int (*pfun)(int ,int);
    pfun = add;

    result = pfun(a,b);
    printf("a+b=%d",result);

    return 0;
}