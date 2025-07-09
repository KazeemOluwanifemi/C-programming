#include<stdio.h>

int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int i;
    int len = sizeof(arr)/sizeof(arr[i]);
    int sum = 0;

    // printf("%d", len);

    for(i = 0; i < len ; i+=2){
        sum = arr[i] + arr[i + 1];
    }

    printf("%d", sum);

}

