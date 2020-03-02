#include <stdio.h>
#include <string.h>   //为了使用 strlen

int main ()
{
    // 定义一个字符串，用指针s指向这个字符串
    char *s = "xp";

    // 使用strlen函数测量字符串长度
    int len = strlen(s);

    printf("字符串长度：%d\n", len);
    printf("s = %s", s);
    return 0;
}