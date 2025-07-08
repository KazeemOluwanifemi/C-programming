// Online C compiler to run C program online
#include <stdio.h>

// bubbleSort function
// The aim of this program is to sort an array of numbers into ascending order(lowest value to highest value)

void bubbleSort(int data[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i -1; j++){
            int temp;
            if(data[j] > data[j + 1]){
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}


int main() {
    int data[] = {20,10,40,5};
    bubbleSort(data, 4);
    for(int i = 0; i < 4; i++){
        printf("%d \n", data[i]);
    }
    return 0;
}