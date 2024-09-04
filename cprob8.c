#include<stdio.h>

int main()
{
    int marks;
    printf("Enter Marks(0-100) : ");
    scanf("%d", &marks);

    // if(marks <= 100 && marks > 30)
    // {
    //     printf("Pass \n");
    // }
    // else if(marks >= 0 && marks <= 30)
    // {
    //     printf("Fail");
    // }
    // else
    // {
    //     printf("Not Appeared in the exam");
    // }

    marks > 30 ? printf("pass") : printf("fail");
    return 0;
}