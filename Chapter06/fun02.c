#include <stdio.h>

int add(int x, int y){
    return x + y;
}

double add(double x, double y){
    return x + y;
}

int main ()
{
    int iVar = add(1,2);
    float fVar = add(3.5, 6.3);
    printf("iVar=%d", iVar);

    return 0;
}