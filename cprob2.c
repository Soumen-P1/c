#include<stdio.h>

int main(){
    float pi = 3.14;
    int radius;
    printf("enter radius");
    scanf("%d", &radius);
    printf("The area of the circle is : %f", pi * radius * radius);
    return 0;
}