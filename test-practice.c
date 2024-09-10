#include<stdio.h>

int main(){
    // char randomCharacter = 'akvshjgds';
    // printf("%c", randomCharacter);

    char studName[] = "Nifemi";
    char studName[] = "notNIfemi";
    char course[] = "EEE";
    int matNo = 2268890;

    struct idCard {
        char studName[20];
        char course[20];
        int matNo;  
    };

    struct idCard stud1 = {"Kazeem", "EEE", 220045};

    printf("%s ", stud1.matNo);
}

    //  struct leader
    //     {
    // //     char *lead;
    //     int born;
    // };
    // struct leader leader11 = {"John", 1988};
    // struct leader leader12 = {"notJohn"};
    // printf("%s %d, 12.lead, 11.born");

    // char boy[20] = "I am a boy.";

    // int random[4] = {2,5,8,'8'};

    // printf("%i", random[0]);

//     struct studName{
//     char fName[35];
//     char mName[35];
//     char lName[35];
//    } person1, person2;

//    printf("%s", person1.fName);
