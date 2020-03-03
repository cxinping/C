#include<stdio.h>
 
int main()
{
    struct Person {
        int index;
        char name[30];
        short age;
    }*person;

    struct Person p1;
    p1.index = 10;
    person = &p1;
    person -> index = 20;
    printf("index=%d\n" , person->index);
    printf("p1.index=%d" , p1.index );
    return 0;
}