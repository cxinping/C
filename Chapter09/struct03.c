#include<stdio.h>
#include <string.h>

int main()
{
    struct Person {
        int index;
        char name[30];
        short age;
        
        struct WrokPlace
        {
            char address[200];
            char postCode[50];
            char area[100];            
        }workPlace;         
    };
 
    struct Person person;
    strcpy(person.workPlace.address, "beijing");
    strcpy(person.workPlace.postCode, "100101");
    strcpy(person.workPlace.area, "chao yang");

    printf("person.workPlace.address=%s\n",person.workPlace.address);
    printf("person.workPlace.postCode=%s\n",person.workPlace.postCode);
    printf("person.workPlace.postareaCode=%s\n",person.workPlace.area);

    return 0;
}