#include<stdio.h>
 
enum Season 
{ 
    Spring = 1,Summer , Autumn , Winter 
}season;
 
int main()
{
 // 遍历枚举元素
    for (season = Spring; season <= Winter; season++) {
        printf("枚举元素：%d \n", season);
    }
    return 0;
}