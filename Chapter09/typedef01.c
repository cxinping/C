#include <stdio.h>
 
typedef char * String ;
 
int main ()
{
    String str;
    char temp[] ="www.ultrapower.com";
    str = temp;
    printf("str=%s" , str);

    return 0;
}