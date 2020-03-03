#include<stdio.h>
#include <string.h>

int main()
{
    struct Person
    {
        int index;
        char name[30];
        short age ;
    } person;
 
    person.index = 1;
    strcpy(person.name, "信平");
    person.age = 28;

    /* 输出 person 信息 */
    printf( "person.index = %d\n", person.index);
    printf( "person.name = %s\n", person.name);
    printf( "person.age = %d\n", person.age);

    return 0;
}