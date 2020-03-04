#include<stdio.h>

int main()
{
    struct 
    {
        int index;
        char name[30];
        short age ;
    } Person[] ={
                {1,"zhang" ,21},
                {2,"li",22},
                {3,"zhao",23}
    };

    return 0;
}