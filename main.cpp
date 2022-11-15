// ========== PROJECT INFO =========== // 

// GOAL: You must write a program containing two classes (i.e., Student and Roster). The program will maintain a current roster of students within a given course. Student data for the program include student ID, first name, last name, email address, age, an array of the number of days to complete each course, and degree program. This information can be found in the “studentData Table” below. The program will read a list of five students and use function calls to manipulate data (see part F4 in the requirements below). While parsing the list of data, the program should create student objects. The entire student list will be stored in one array of students called classRosterArray. Specific data-related output will be directed to the console.

#include<iostream>
#include "student.h"
using namespace std;

int main(){

    cout << "C867 Scripting and Programming Applications" << endl << "C++" << endl << "STUDENT ID HERE" << endl << "Nicole Hamilton" << endl;

    Student student1("A1","John","Smith","John1989@gm ail.com",20,30,35,40,"SECURITY");

    student1.Print();

    return 0;
};