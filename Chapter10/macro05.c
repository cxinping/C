#include <stdio.h>

#define pow(a) ( (a) * (a) )

int main()
{
    int b = pow(10) / pow(2);

    printf("b=%d", b);
    return 0;
}
