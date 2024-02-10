// Define the elements to be used 
// Integers (0-9)-> Array
// Arithmentic Operators(+,-,/,*,%)-> Array
// Assignment Operator(=)
// Logical Operators(==, >,<,>=,<=)-> Array

// Specify the Algorithm
// *Take input from user 
// Perform operations based on the user's input
// Error Handling 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // Get operator values from users
    printf("%s", "Input first operator: \n");
    int firstValue = 0;
    scanf("%i", &firstValue);

    printf("%s", "Input second operator: \n");
    int secondValue = 0;
    scanf("%i", &secondValue);
    
    printf("%i", "%i", firstValue, secondValue); 
}