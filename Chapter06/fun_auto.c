#include <stdio.h>

int main ()
{
    auto int i,j,k;
    i = 9, j = 4;
    k = i + j;

    if(i !=j){
        auto int k;
        k = i - j;
        printf("inner k=%d\n",k);
    }    
    printf("outter k=%d\n",k);

    return 0;
}