#include <stdio.h>
#include "cs50.h"

// Prototyping: Informing your code of the existence of a function you haven't
// declared yet
// void meow (void);

// int get_positive_int(void);


// Structure declaration with Structure name(studData), structure members(studAge & studDOB) and structure variables(stud1)

struct studData {
   char studName[20];
   int studAge;
   int studDOB;
} stud1;

// structure initialization using Initializer list
struct studData stud1 = {"", 19, 10112006};

// Use of strcpy to use strings in structures

int main()
   {
      printf("Enter your name: ");
      scanf("%s", &stud1.studName);
      printf("%s", stud1.studName);
   }