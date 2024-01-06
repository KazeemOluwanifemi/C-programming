#include <stdio.h>
#include "cs50.h"

int main(void){
   char answer = get_char("Do you agree? Y/N ");
   if(answer == 'Y'){
      printf("Agreed.");
   }
   else if(answer == 'N'){
      printf("Disagreed.");
   }
   else{
      printf("Input valid answer.");
   }
}