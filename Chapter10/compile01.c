#include <stdio.h>

#define MAX 11

int main ()
{
#if MAX == 0
    printf("MAX��0");
#elif MAX > 0
    printf("MAX����0");
#else
    printf("MAXС��0");
#endif
    return 0;
}