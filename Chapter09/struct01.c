#include<stdio.h>
 
int main()
{
    typedef struct {
        int index;
        char name[30];
        short age;
    }Person;

    Person person;
    person.index = 100;

    printf("%d" , person.index);

    return 0;
}