#include <stdio.h>

// Program to calculate CGPA for first year students
// declare required global variables

int no_of_courses;
// float credit_unit[];
// char grade[];
// float tot_credit_unit;
// float tot_weighted_score;
// float CGPA;

// define function to convert grade to gradepoint

float grade_to_gradepoint(char grade){
    switch (grade)
    {
    case 'A':
        return 5.0;
        break;
    case 'B':
        return 4.0;
        break;
    case 'C':
        return 3.0;
        break;
    case 'D':
        return 2.0;
        break;
    case 'F':
        return 0.0;
        break;
    default:
        return -1.0;
        break;
    }
}

int main(){
    // Get user defined variables
    printf("Enter your number of courses: ");
    scanf("%d", &no_of_courses);

    float credit_unit[no_of_courses];
    char grade[no_of_courses];
    float weighted_score[no_of_courses];
    float tot_credit_unit = 0;
    float tot_weighted_score = 0.00;

    // Loop to make dynamic computations

    int i = 0;
    for (i; i < no_of_courses; i++){
        printf("Enter the credit unit for course %d: ", i + 1);
        scanf(" %f", &credit_unit[i]);
        tot_credit_unit += credit_unit[i];

        printf("Enter your grade for course %d: ", i + 1);
        scanf(" %c", &grade[i]);
        weighted_score[i] = grade_to_gradepoint(grade[i]) * credit_unit[i];
        tot_weighted_score += weighted_score[i];
    }
    // CGPA calculation

    float CGPA = tot_weighted_score / tot_credit_unit;

    printf("Your CGPA for this semester is: %.2f", CGPA);
}