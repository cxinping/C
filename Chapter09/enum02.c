#include<stdio.h>
 
enum Season 
{ 
    Spring = 1,Summer , Autumn , Winter 
}season;
 
int main()
{
 // ����ö��Ԫ��
    for (season = Spring; season <= Winter; season++) {
        printf("ö��Ԫ�أ�%d \n", season);
    }
    return 0;
}