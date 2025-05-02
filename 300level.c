#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// float getGrade(char grade){
//     switch (grade)
//     {
//     case 'A':
//         return 5.0;
//     case 'B':
//         return 4.5;
//     default:
//         printf("%s", "Your CGPA is non-existent");
//     }
// }


int main(){
    int sum = 0;
    int ages[] = {12,14,15,18};
    int lengthOfArray = sizeof(ages)/sizeof(ages[0]);

    for (int i = 0; i < lengthOfArray; i++)
    {
        sum += ages[i];
    }
    
    float averageValue = sum/lengthOfArray;
    printf("%f", averageValue);
}