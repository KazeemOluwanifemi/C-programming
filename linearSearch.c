// // Online C compiler to run C program online
// #include <stdio.h>

// // Linear Search function
// //  In searching for an element,it checks each element until the target is found or the array is exhausted
// // The target is specified
// // the search area(the array) is given

// void linearSearch (int hayStack[], int size, int targetHay){
//     for(int i = 0; i < size; i++){
//         if(hayStack[i] == targetHay){
//             printf("%d", hayStack[i]);
//             break;
//         } else{
//             printf("Target not found");
//             break;
//         }
//     }
// }

// int main() {
//     int hayStack[] = {20, 300, 400, 500, 21};
//     linearSearch(hayStack, 5, 2);
//     return 0;
// }

// Online C compiler to run C program online
#include <stdio.h>

int linearSearch(int arr[], int key){
    int i;
    int length = sizeof(arr)/sizeof(arr[i]);
    for(int i = 0; i < length; i++){
        if(arr[i] == key){
            printf("%d", arr[i]);
        }
    }
}

int main() {
    // Write C code here
    int key = 20;
    int arr[3] = {30, 20, 10};
    linearSearch(arr, 3);
}