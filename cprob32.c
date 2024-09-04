#include<stdio.h>

int oddNumber(int arr[], int n);

int main(){
    int array[] = {1, 2, 3, 4, 5, 6};
    printf("%d", oddNumber(array, 6));


    return 0;
}

int oddNumber(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}