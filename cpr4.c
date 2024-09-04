//Q: write a function to print hot n cold depend on the temperature user enters

#include<stdio.h>

void temp(int a);

int main(){
    int a;
    printf("Enter temperature in celsius ");
    scanf("%d", &a);
    temp(a);

    return 0;
}

void temp(int a){
    if(a >= 25){
        printf("HOT");
    }
    else if(a < 25){
        printf("COLD");
    }
    else{
        printf("Invalid Temperature");
    }
}