#include<stdio.h>
 
enum Season 
{ 
    Spring = 1,Summer , Autumn , Winter 
};
 
int main()
{
    enum Season season;
    season = Autumn ;
    printf("%d",season);
    return 0;
}