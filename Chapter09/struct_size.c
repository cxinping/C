#include<stdio.h>
 
int main()
{
    struct Person{
        int index;
        short age;
        char name[30];
    }person;

    printf("%d" , sizeof(person) );
    return 0;
}