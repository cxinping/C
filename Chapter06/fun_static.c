#include <stdio.h>

int add(int x){
    static int n = 0;
    n = n + x;
    return n;
}

int main ()
{
    int i,j,sum;
    i = 5;
    for(j=1;j<=i;j++){
        sum = add(j);
        printf("j=%d, sum=%d\n",j , sum);
    }


    return 0;
}