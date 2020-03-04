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

    struct Person *personInfo;
    personInfo = Person;

    for(int i=0; i < 3;i++){
        printf( "person -> index = %d\n", personInfo -> index);
        //*(personInfo++);

    }


    return 0;
}