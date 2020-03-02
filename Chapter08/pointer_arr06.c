#include <stdio.h>
 
int main ()
{
    char *str = "hello";

    for (int i = 0; i < 5; i++)
   {
      printf("character = %c\n", *str++ );
   }

    return 0;
}
