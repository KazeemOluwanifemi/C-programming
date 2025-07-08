#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// float getGrade(char grade){
//     switch (grade)
//     {
//     case 'A':
//         return 5.0;
//     case 'B':
//         return 4.5;
//     default:
//         printf("%s", "Your CGPA is non-existent");
//     }
// }

// int sum = 0;
//     int ages[] = {12,14,15,18};
//     int lengthOfArray = sizeof(ages)/sizeof(ages[0]);

//     for (int i = 0; i < lengthOfArray; i++)
//     {
//         sum += ages[i];
//     }
    
//     float averageValue = sum/lengthOfArray;
//     printf("%f", averageValue);

// Things to note on C pointers
// When the aserik(*) sign is used while declaring a variable, it creates a pointer variable
// However, when it isn't used in declaration of a pointer variable, it acts a a dereference operator

// As a pointer variable, it creates a variable that stores the memory address of a particular variable, eg.
// int aNumber = 5;
// int* ptr = &aNumber;
// printf("&d", ptr);

// While as a dereference operator, it will make reference to the value that is stored in that memory address, eg.
// int aNumber = 5;
// int* ptr = &aNumber;
// printf("%d", *ptr);

// Note: a pointer variable can be declare in two ways
// int* ptr = &aNumber;
// int *ptr = &aNumber;

FILE *fptr;


int main(){
    fptr = fopen("new.txt", "r");
    char myString[100];

    while (fgets(myString, 100, fptr))
    {
       printf("%s", myString);
    }
    
}