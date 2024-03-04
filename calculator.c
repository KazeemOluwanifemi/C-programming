// Define the elements to be used 
// Integers (0-9)-> Array
// Arithmentic Operators(+,-,/,*)-> Array
// Assignment Operator(=)
// Logical Operators(==, >,<,>=,<=)-> Array

// Specify the Algorithm
// *Take input from user 
// Perform operations based on the user's input
// Switch case
// Loop Events
// Error Handling 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
// Get integer values from users
    printf("%s", "Input two operands: \n");
    int firstValue = 0;
    int secondValue = 0;
    scanf("%i %i", &firstValue, &secondValue);

// Get operator from user
    printf("%s", "Select an operator from the following: \n +,-,/,*,^\n");
    char operatorVal;
    scanf(" %c", &operatorVal);

// Calculate and print based on the user's operator
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
        case '^':
            printf("%i * %i = %i", firstValue, firstValue, firstValue * firstValue);
            break;
        default:
            printf("Error!! Please enter a valid operator.");
    }
}