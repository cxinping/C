#include <stdio.h>
 
int main()
{
   FILE *fp = NULL; 
   fp = fopen("d:/demo.txt", "w+");
   fprintf(fp, "hello C\n");
   fputs("hello C\n", fp);
   fclose(fp);
}
