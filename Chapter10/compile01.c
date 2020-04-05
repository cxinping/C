#include <stdio.h>

#define MAX 11

int main ()
{
#if MAX == 0
    printf("MAX是0");
#elif MAX > 0
    printf("MAX大于0");
#else
    printf("MAX小于0");
#endif
    return 0;
}