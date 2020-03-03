#include<stdio.h>
 
enum Season 
{ 
    Spring = 0,Summer , Autumn , Winter 
};
 
int main()
{
    enum Season season;
    season = Summer;
    printf("%d",season);
    return 0;
}