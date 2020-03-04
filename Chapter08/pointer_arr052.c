#include <stdio.h>
 
int main ()
{
    int i,j;
    int a[4][3] = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9},
                {10, 11, 12}};
 
    int *p;
    p = a[0];

    for(i=0 ;i <4;i++){ //行
        for(j=0; j<3;j++){  //列
            printf("a[%d][%d]=%d " ,i , j , *p++ );
        }
        printf("\n");
    }

    return 0;
}