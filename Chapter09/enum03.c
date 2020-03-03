#include<stdio.h>
 
enum Season 
{ 
    Spring ,Summer , Autumn , Winter 
}season;
 
int main()
{
    int a = 2;
    enum Season season;
    season = ( enum Season ) a;  // 强制类型转换
    //season = 2;        // 直接给枚举变量赋值是错误的
    printf("season=%d",season);
    return 0;
}
