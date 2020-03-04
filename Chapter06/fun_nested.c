#include <stdio.h>

void showMessage(){
    printf("call ShowMessage function");
}

void display(){
    showMessage();
}

int main(){
    display();

    return 0;
}