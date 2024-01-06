#include <stdio.h>
#include "cs50.h"

// Prototyping: Informing your code of the existence of a function you haven't
// declared yet
// void meow (void);

int main(void){
      meow(3);

   // char answer = get_char("Do you agree? Y/N ");

   // While statement
   // int i = 0;
   // while (i < 50)
   // {
   //    printf("Hola weurld.\n");
   //    i++;
   // }
   // // For Statement
   // for (int i = 0; i < 50; i++)
   // {
   //    printf("Hello World \n");
   // }

   // Application of Abstraction
   
   // Without Abstraction
   // printf("Meow\n");
   // printf("Meow\n");
   // printf("Meow\n");

   // With Abstraction(While Loop)
   // int i = 0;
   // while(i < 3){
   //    printf("Meow\n");
   //    i++;
   // }

 
   
   
   // if(answer == 'Y' || answer == 'y'){
   //    printf("Agreed.");
   // }
   // else if(answer == 'N' || answer == 'n'){
   //    printf("Disagreed.");
   // }
   // else{
   //    printf("Input valid answer.");
   // }
}

void meow (int n){
   for (int i = 0; i < n; i++)
   {
      printf("meow\n");
   }
}