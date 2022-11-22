#include <iostream>
using namespace std;
#include <string>
#include <tuple>
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
        
tuple<int, int, int> Student::GetDaysToComplete() {

    int* ptr = new int[3];
    
    ptr[0] = daysInCourse[0];
    ptr[1] = daysInCourse[1];
    ptr[2] = daysInCourse[2];

    return tie(ptr[0], ptr[1], ptr[2]);
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

    cout << "Student ID: " << GetStudentId() << endl;
    cout << "First Name: " << GetFirstName() << endl;
    cout << "Last Name: " << GetLastName() << endl;
    cout << "Email: " << GetEmail() << endl;
    cout << "Age: " << GetAge() << endl;
    tuple<int,int,int> result = GetDaysToComplete();
    cout << "Days in Courses: " << get<0>(result) << " " << get<1>(result) << " " << get<2>(result) << endl;
    cout << "Degree Program: " << GetDegreeProgram() << endl;
}

// ======== Destructor ======== //
Student::~Student(){
    cout << "Student class destroyed" << endl;
}