#include <stdio.h>
 
const int MAX = 3;
 
int main ()
{
   const char *names[] = {
                   "wang",
                   "zhang",
                   "li"
   };
   int i = 0;
 
   for (i = 0; i < MAX; i++)
   {
      printf("names[%d] = %s\n", i, names[i] );
   }
   return 0;
}