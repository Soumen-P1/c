#include<stdio.h>

int main(){
    //char firstName[50];
    //scanf("%s", firstName);
    //printf("your name is %s", firstName);

    /*char fullName[100];
    scanf("%s", fullName);
    printf("your full name is %s", fullName);*/

    char *canchange = "hello world";
    puts(canchange);
    canchange = "hello";
    puts(canchange);

    
    return 0;
}