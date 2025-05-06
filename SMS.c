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
int removeData(){};
int listData(){};
int searchMatNo(){};

struct studData {
   struct studName{
    char fName[35];
    char mName[35];
    char lName[35];
   } full;
   int studAge;
   struct studDOB{
    char day[3];
    char month[4];
    char year[3];
   } formatted;
} stud1;

int addData(){
    // Use struct to accept and organize data
    char studFName[20], studLName[20], studMName[20];
    char userConfirmation;
    printf("\t\t\t\t\t\t\n|----------PERSONAL INFORMATION DATABASE----------| \t\t\t\t\t\t\n\n");
    
    printf("Enter your Firstname: ");
    scanf("%s", stud1.full.fName);
      
    printf("Enter your Middlename: ");
    scanf("%s", stud1.full.mName);
      
    printf("Enter your Lastname: ");
    scanf("%s", stud1.full.lName);

    printf("Enter your age: ");
    scanf("%i", &stud1.studAge);

    printf("Enter your day of birth: ");
    scanf("%s", stud1.formatted.day);

    printf("Enter your month of birth: ");
    scanf("%s", stud1.formatted.month);

    printf("Enter your year of birth: ");
    scanf("%s", stud1.formatted.year);

    //   User Details confirmation
      
    printf("%s %s \n", "Student's Firstname:", stud1.full.fName);
    printf("%s %s \n", "Student's Middlename:", stud1.full.mName);
    printf("%s %s \n", "Student's Lastname:", stud1.full.lName);
    printf("%s %i \n", "Student's Age:", stud1.studAge);
    printf("%s %s-%s-%s \n","Student's DOB:", stud1.formatted.day, stud1.formatted.month, stud1.formatted.year);

    printf("%s", "Please confirm your details, Y/N:");
    scanf(" %c", &userConfirmation);

    if (userConfirmation == 'Y'){
        printf("%s", "Your details have been saved successfully!");
        return 1;
    } else if (userConfirmation == 'N'){
        printf("%s", "Please try again");
        return 1;
    } else {
        printf("%s", "Invalid input, please try again.");
        return 1;
    }
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