#include <stdio.h>
#include "cs50.h"

int main(void) {
   // string answer = get_string("What's your name, muggle?");
   // printf("Hello, %s\n", answer);

   // int x = get_int("Enter your value of x: ");
   // int y = get_int("Enter your value of y: ");

   // printf("%i\n", x+y);

   // truncation...dividing with different data types
   // int x = get_int("Enter your x value: ");
   // int y = get_int("Enter your y value: ");

   // Casting: converting one data type to another
   // float z = (float)x/(float)y;
   // printf("%f\n", z);

   // Conditions
   int x = get_int("Enter your value of x: ");
   int y = get_int("Enter your value of y: ");

   if(x > y){
      printf("x is greater than y.");
   }
   else if(x < y){
      printf("x is less than y.");
   }
   else{
      printf("x is equal to y.");
   }

}
