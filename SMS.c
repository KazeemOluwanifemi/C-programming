#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// operations to be carried out by this program:
// Add student information
// View student information/List all student information(Display total number of students)
// Remove/Delete student information
// Find a Student by the matriculation number
// Student information to be recorded
// Categories:
// -> Personal Info
    // 1. Name, DOB(has to be a struct), Age, State of Origin
// -> Academic Info
    // MatNo, RegNo, College of Study, CGPA, Deparment
// -> Residential Info
//    Hall, Room Number

int addData();
int removeData();
int listData();
int searchMatNo(){};

int noOfStudents;
char userConfirmation;
int i = 0;

struct studData {
   struct studName{
    char fName[35];
    char mName[35];
    char lName[35];
   } full;
   int studAge;
   struct studDOB{
    char day[3];
    char month[10];
    char year[3];
   } formatted;
} stud[400];

int activeNoOfStudents = sizeof(stud)/sizeof(stud[0]);

int addData(){
    // Use struct to accept and organize data
    char studFName[20], studLName[20], studMName[20];

    printf("How many students? ");
    scanf(" %d", &noOfStudents);

    for (int i = 0; i < noOfStudents; i++){
        printf("\t\t\t\t\t\t\n|----------PERSONAL INFORMATION DATABASE----------| \t\t\t\t\t\t\n\n");
    
        printf("Enter your Firstname: ");
        scanf("%s", stud[i].full.fName);
      
        printf("Enter your Middlename: ");
        scanf("%s", stud[i].full.mName);
      
        printf("Enter your Lastname: ");
        scanf("%s", stud[i].full.lName);

        printf("Enter your age: ");
        scanf("%i", &stud[i].studAge);

        printf("Enter your day of birth: ");
        scanf("%s", stud[i].formatted.day);

        printf("Enter your month of birth: ");
        scanf("%s", stud[i].formatted.month);

        printf("Enter your year of birth: ");
        scanf("%s", stud[i].formatted.year);

        //   User Details confirmation
        printf("\t\t\t\t\t\t\n|------STUDENT'S DETAILS------| \t\t\t\t\t\t\n\n");  
        printf("%s %s \n", "Student's Firstname:", stud[i].full.fName);
        printf("%s %s \n", "Student's Middlename:", stud[i].full.mName);
        printf("%s %s \n", "Student's Lastname:", stud[i].full.lName);
        printf("%s %i \n", "Student's Age:", stud[i].studAge);
        printf("%s %s-%s-%s \n","Student's DOB:", stud[i].formatted.day, stud[i].formatted.month, stud[i].formatted.year);
        printf("\t\t\t\t\t\t\n|-----------------------------| \t\t\t\t\t\t\n\n"); 

        printf("%s", "Please confirm your details, Y/N:");
        scanf(" %c", &userConfirmation);

        if (userConfirmation == 'Y' && i == noOfStudents-1){
            printf("%s", "Your details have been saved successfully!\n");
            printf("%s", "What would you like to do now?\n\n");
        } else if (userConfirmation == 'Y' && i != noOfStudents-1){
            printf("%s", "Your details have been saved successfully!\n");
            printf("%s", "Please enter the next set of details\n");
        } else if (userConfirmation == 'N' && i != noOfStudents-1){
            printf("%s", "Please try again\n");
        } else if (userConfirmation == 'N' && i == noOfStudents-1){
            printf("%s", "Please try again\n");
            return 1;
        } else {
            printf("%s", "Invalid input, please try again.\n");
            return 1;
        }   
    }
}

int removeData(){
    printf("This option isn't available yet, please try again later");
}

int listData(){
    while (i < activeNoOfStudents)
    {
        if (i == 0){
            printf("Please enter student data first\n");
            return 1;
        } else{
            printf("\t\t\t\t\t\t\n|------STUDENT'S DETAILS------| \t\t\t\t\t\t\n\n");  
            printf("%s %s \n", "Student's Firstname:", stud[i].full.fName);
            printf("%s %s \n", "Student's Middlename:", stud[i].full.mName);
            printf("%s %s \n", "Student's Lastname:", stud[i].full.lName);
            printf("%s %i \n", "Student's Age:", stud[i].studAge);
            printf("%s %s-%s-%s \n","Student's DOB:", stud[i].formatted.day, stud[i].formatted.month, stud[i].formatted.year);
            printf("\t\t\t\t\t\t\n|-----------------------------| \t\t\t\t\t\t\n\n");
        }
        i++;
    } 
}

int searchMatno(){
    printf("This option isn't available yet, please try again later");
}


int main(){
    // Main screen
    int running = 1;

    while (running)
    {
        printf("%s", "\t\t\t\t\t\t |----------STUDENT DATABASE MANAGEMENT SYSTEM----------| \t\t\t\t\t\t\n\n");
        printf("%s", "\t\t\t\t\t\t\t\t 1. Add Student Data \n");
        printf("%s", "\t\t\t\t\t\t\t\t 2. Delete Student Data\n");
        printf("%s", "\t\t\t\t\t\t\t\t 3. List Student Data\n");
        printf("%s", "\t\t\t\t\t\t\t\t 4. Search with Matriculation Number\n");
        printf("%s", "\t\t\t\t\t\t\t\t 5. Exit\n");
        printf("%s", "\t\t\t\t\t\t _______________________________________________________ \t\t\t\t\t\t\n\n");

        // Ask user to choose an option
        printf("%s", "Pick an option: ");
        int choice;
        scanf("%i", &choice);

        // Perform operation based on user's choice
        switch(choice){
        case 1:
            addData();
            break;
        case 2:
            removeData();
            break;
        case 3:
            listData();
            break;
        case 4:
            searchMatNo();
            break;
        case 5:
            exit(0);
        }
    }
}