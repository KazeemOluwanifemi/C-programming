#include <stdio.h>
#include "cs50.h"

int main(void) {
   // string answer = get_string("What's your name, muggle?");
   // printf("Hello, %s\n", answer);

   int x = get_int("Enter your value of x: ");
   int y = get_int("Enter your value of y: ");

   printf("%i\n", x+y);
}
