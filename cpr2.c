//Q: Write a function to find sum of digits of a number


#include<stdio.h>
void sum(int a, int b, int c);

int main(){
    int a,b,c;
    printf("write the 1st digit");
    scanf("%d", &a);
    printf("write the 2nd digit");
    scanf("%d", &b);

    c=a+b;
    sum(a,b,c);


    return 0;
}

void sum(int a, int b, int c){
    c = a + b;
    printf("The value of the sum is %d", c);
}