#include <stdio.h>
 
int main ()
{
    char a[3] = {'x', 'p', '\0'}; // 添加了结束符\0
    char b[] = {'i', 's'}; // 假设忘记添加结束符\0
    printf("字符串a：%s\n", a); // 输出字符串a
    printf("字符串b：%s\n", b); // 输出字符串b
    
    printf("a的地址：%x\n", a);
    printf("b的地址：%x\n", b);

    return 0;
}
