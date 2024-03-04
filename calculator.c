// Define the elements to be used 
// Integers (0-9)-> Array
// Arithmentic Operators(+,-,/,*,%)-> Array
// Assignment Operator(=)
// Logical Operators(==, >,<,>=,<=)-> Array

// Specify the Algorithm
// *Take input from user 
// Perform operations based on the user's input
// Switch case
// Error Handling 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // // Calculation operations
    // // addition
    // int addition= firstValue + secondValue;
    // // subtraction
    // int subtraction = firstValue - secondValue;
    // // multiplication
    // int multiplication = firstValue * secondValue;
    // // division
    // float division = (float) firstValue/secondValue;

// Get integer values from users
    printf("%s", "Input first operator: \n");
    int firstValue = 0;
    scanf("%i", &firstValue);

    printf("%s", "Input second operator: \n");
    int secondValue = 0;
    scanf("%i", &secondValue);

// Get operator from user
    printf("%s", "Select an operator from the following: \n +,-,/,*\n");
    char operatorVal;
    scanf(" %c", &operatorVal);

// Calculate based on the user's operator
    switch(operatorVal)
    {
        case '-':
            printf("%i - %i = %i", firstValue, secondValue, firstValue - secondValue);
            break;
        case '+':
            printf("%i + %i = %i", firstValue, secondValue, firstValue + secondValue);
            break;
        case '/':
            printf("%i / %i = %i", firstValue, secondValue, firstValue / secondValue);
            break;
        case '*':
            printf("%i * %i = %i", firstValue, secondValue, firstValue * secondValue);
            break;
        // default:
        //     printf("Error!! Please enter a valid operator.");
    }
}