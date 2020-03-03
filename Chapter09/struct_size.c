#include<stdio.h>
 
int main()
{
    struct Person{
        int index;
        char name[30];
        short age;
    }person;

    printf("%d" , sizeof(person) );
    return 0;
}