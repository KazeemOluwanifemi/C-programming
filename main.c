#include <stdio.h>
#include "cs50.h"

int main(void) {
   string answer = get_string("What's your name, muggle?");
   printf("Hello, %s\n", answer);
}
