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
struct studData stud1 = {19, 10112006};

// Use of strcpy to use strings in structures

int main()
   {
      printf("Enter your Firstname: ");
      scanf("%s", &stud1.full.fName);
      
      printf("Enter your Middlename: ");
      scanf("%s", &stud1.full.mName);
      
      printf("Enter your Lastname: ");
      scanf("%s", &stud1.full.lName);

      printf("Enter your age: ");
      scanf("%i", &stud1.studAge);

      printf("Enter your date of birth: ");
      scanf("%i", &stud1.studDOB);
      

      printf("%s ", stud1.full.fName);
      printf("%s ", stud1.full.mName);
      printf("%s", stud1.full.lName);
      printf("%i", stud1.studAge);
      printf("%i", stud1.studDOB);
   }