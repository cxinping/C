#include<stdio.h>

int main()
{
    struct Person
    {
        int index;
        char name[30];
        short age ;
    } person[] ={
                {1,"zhang" ,21},
                {2,"li",22},
                {3,"zhao",23}
    };

    struct Person *pStruct;
    pStruct = person;
  
    for(int i=0; i < 3; i++, pStruct++){
        printf( "person -> index = %d\n", person -> index);
        printf( "person -> name = %s\n", person -> name);
        printf( "person -> age = %d\n", person -> age);        
    }

    return 0;
}