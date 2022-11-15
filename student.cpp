#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "student.h"
using namespace std;

// ========= Student Class Constructors========= //

Student::Student(string kidId, string firstname, string lastname, string email, int studentAge, int day1, int day2, int day3, string program) 
{
    
    studentId = kidId;
    firstName = firstname;
    lastName = lastname;
    emailAddress = email;
    age = studentAge;
    daysInCourse[0] = day1;
    daysInCourse[1] = day2;
    daysInCourse[2] = day3;
    degreeProgram = program; 
};

// ========= Getter Functions ========= //

string Student::GetStudentId(){
    return studentId;
};

string Student::GetFirstName(){
    return firstName;
};

string Student::GetLastName(){
    return lastName;
};

string Student::GetEmail(){
    return emailAddress;
};

int Student::GetAge(){
    return age;
};

string Student::GetDegreeProgram(){
    return degreeProgram;
};
        
int Student::GetDaysToComplete() {

    cout << "FIXME: Return the days to course completion array" << endl;
    return 0;
};

// ========= Setter Functions ========= //

void Student::SetStudentId(string newStudentId){
    studentId = newStudentId;
};

void Student::SetFirstName(string newFirstName){
    firstName = newFirstName;
};

void Student::SetLastName(string newLastName){
    lastName = newLastName;
};

void Student::SetEmail(string newEmail){
    emailAddress = newEmail;
};

void Student::SetAge(int newAge){
    age = newAge;
};

void Student::SetDegreeProgram(string newDegree){
    degreeProgram = newDegree;
}
    // SetDaysToComplete;

// ======== Print ======== //

void Student::Print(){
    cout << "Student ID: " << studentId << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Email: " << emailAddress << endl;
    cout << "Age: " << age << endl;
    cout << "Degree Program: " << degreeProgram << endl;
}