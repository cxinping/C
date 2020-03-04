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
        printf("index = %d, name = %s, age = %d\n", pStruct -> index , pStruct -> name , pStruct -> age);
    }

    return 0;
}