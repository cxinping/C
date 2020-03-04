#include<stdio.h>
 
int main()
{
    struct Person {
        int index;
        char name[30];
        short age;
    }*person, pinfo = {1, "ĞÅÆ½",28};

    person = &pinfo;
    printf( "person -> index = %d\n", person -> index);
    printf( "person -> name = %s\n", person -> name);
    printf( "person -> age = %d\n", person -> age);

    return 0;
}