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
    strcpy(person.name, "��ƽ");
    person.age = 28;

    /* ��� person ��Ϣ */
    printf( "person.index = %d\n", person.index);
    printf( "person.name = %s\n", person.name);
    printf( "person.age = %d\n", person.age);

    return 0;
}