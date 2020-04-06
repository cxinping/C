#include <stdio.h>

int main()
{
   FILE *fp;
   fp = fopen("d:/demo.txt","w");

   if(fp == NULL)
   {
       printf("fail to open the file !\n");
   }
   else
   {
       printf("The file is open\n"); 
       fclose(fp);
   }
     
    return 0;
}
