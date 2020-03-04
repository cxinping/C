#include<stdio.h>
#include <string.h>

struct Person
{
    int index;
    char name[30];
    short age ;
}  ;

/*
    自定义函数，输出结构体变量成员
*/
void showStructMessage(struct Person *person)
{
    printf( "person -> index = %d\n", person -> index);
    printf( "person -> name = %s\n", person -> name);
    printf( "person -> age = %d\n", person -> age);
}

int main()
{
    struct Person person;
    person.index = 1;
    strcpy(person.name, "信平");
    person.age = 29;

    showStructMessage(&person);
    return 0;
}