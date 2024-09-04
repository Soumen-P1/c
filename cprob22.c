#include<stdio.h>


//Function


float squarearea(float side);
float circlearea(float radius);
float rectanglearea(float a, float b);

int main(){
    float a=5.0;
    float  b=10.0;
    printf("area is %f", rectanglearea(a, b));
    return 0;
}

float squarearea(float side){
    return side*side;
}

float circlearea(float radius){
    return 3.14 * radius * radius;
}

float rectanglearea(float a, float b){
    return a * b;
}