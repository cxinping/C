#include <stdio.h>
 
int main ()
{
    // 定义一个指针p
    char *p;

    // 定义一个数组s存放字符串
    char s[] = "xp";

    // 指针p指向字符串的首字符'x'
    p = s; // 或者 p = &s[0];

    for (; *p != '\0'; p++) {
        printf("character = %c \n", *p);
    }

    return 0;
}