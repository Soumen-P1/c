#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1, j=n; i<=n && j>=1; i++,j--){
        sum = sum + i;//sum += i
        printf("%d \n", j);
    }
    printf("the value of sum is %d", sum);
    return 0;
}