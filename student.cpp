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
    // for(int i=0; i < 3; ++i){
    //     daysInCourse[i]
    // }
    int arr[3];
    arr[0] = daysInCourse[0];
    arr[1] = daysInCourse[1];
    arr[2] = daysInCourse[2];

    return *arr;
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
};

void Student::SetDaysToComplete(int day1, int day2, int day3){

    daysInCourse[0] = day1;
    daysInCourse[1] = day2;
    daysInCourse[2] = day3;

};

// ======== Print ======== //

void Student::Print(){
    cout << "Student ID: " << studentId << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Email: " << emailAddress << endl;
    cout << "Age: " << age << endl;
    cout << "Days in Courses: " << daysInCourse[3] << endl;
    cout << "Degree Program: " << degreeProgram << endl;
}