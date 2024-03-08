#include<stdio.h>
#include<string.h>

// operations to be carried out by this program:
// Add student information
// View student information/List all student information(Display total number of students)
// Remove/Delete student information
// Find a Student by the matriculation number
// Student information to be recorded
// Categories:
// -> Personal Info
    // 1. Name, DOB, Age, State of Origin
// -> Academic Info
    // MatNo, RegNo, College of Study, CGPA, Deparment
// -> Residential Info
//    Hall, Room Number

int addName(){};
int removeName(){};
int listName(){};
int searchMatNO(){};

int main(){
    // Create main screen
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
            addName();
            break;
        case 2:
            removeName();
            break;
        case 3:
            listName();
            break;
        case 4:
            searchMatNo();
            break;
        case 5:
            exit(0);
    }
    // functions
}