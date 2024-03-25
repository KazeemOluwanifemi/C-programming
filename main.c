#include <stdio.h>
#include "cs50.h"

// Prototyping: Informing your code of the existence of a function you haven't
// declared yet
// void meow (void);

// int get_positive_int(void);


// Structure declaration with Structure name(studData), structure members(studAge & studDOB) and structure variables(stud1)

struct studData {
   struct studName{
      char fName[35];
      char mName[35];
      char lName[35];
   } full;
   int studAge;
   int studDOB;
} stud1;

// structure initialization using Initializer list
// struct studName full= {};

// Use of strcpy to use strings in structures

int main()
   {
      
   }