#include<stdio.h>

void namaste();
void bonjour();

int main(){
    char ch;
    printf("enter i for Indian & f for French : ");
    scanf("%c", &ch);

    if(ch == 'i'){
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
}

void namaste(){
    printf("Namaste\n");
}

void bonjour(){
    printf("bonjour");
}