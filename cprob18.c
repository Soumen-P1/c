#include<stdio.h>

int main()
{
    int n;
    printf("enter the number n : ");
    scanf("%d", &n);

    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    printf("Final Factorial is %d\n", fact);
    return 0;
}