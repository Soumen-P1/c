//Q: Write a function to find square root of a number

#include<stdio.h>
#include<math.h>

void root(int a, int b);

int main(){
    int a,b;
    printf("write the number");
    scanf("%d",&a);
    root(a,b);

    return 0;
}

void root(int a, int b){
    float c = 0.5;
    b = pow(a ,c);
    printf("The square root of a number is %d", b);
    
}