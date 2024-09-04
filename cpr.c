//Q: Write a function to find sum of two numbers


#include<stdio.h>
void sum(int a, int b, int c);

int main(){
    int a,b,c;
    printf("Give the value of a");
    scanf("%d", &a);
    printf("Give the value of b");
    scanf("%d", &b);

    c=a+b;
    sum(a,b,c);


    return 0;
}

void sum(int a, int b, int c){
    c = a + b;
    printf("The value of the sum is %d", c);2
}