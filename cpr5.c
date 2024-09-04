//Q: Make your own POW function

#include<stdio.h>

void power(float a, float b);

int main(){
    float a,b;
    printf("Enter the base ");
    scanf("%d", &a);
    
    power(a,b);

    return 0;
}

void power(float a, float b){
    printf("Enter the exponent ");
        scanf("%d", &b);
    for(float i = b; i>0 ; i--){
        
        a = a*a;
    }printf("The Answer is %f", a);
}