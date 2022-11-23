#include <iostream>
#include <string>
#include <tuple>
#include "student.h"

using namespace std;

// ========= Student Class Constructors========= //

Student::Student(string kidId, string firstname, string lastname, string email, int studentAge, int day1, int day2, int day3, DegreeProgram program) 
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

DegreeProgram Student::GetDegreeProgram(){
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

void Student::SetDegreeProgram(DegreeProgram newDegree){
    degreeProgram = newDegree;
};

void Student::SetDaysToComplete(int day1, int day2, int day3){

    daysInCourse[0] = day1;
    daysInCourse[1] = day2;
    daysInCourse[2] = day3;

};

// ======== Print ======== //

void Student::Print(){
    // in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security

    tuple<int,int,int> result = GetDaysToComplete();
    string degType;

    if(GetDegreeProgram() == 1){
        degType = "SECURITY";
    } else if(GetDegreeProgram() == 2){
        degType = "NETWORK";
    } else {
        degType = "SOFTWARE";
    }

    cout << GetStudentId() << "  " << "First Name: " << GetFirstName() << "  " << "Last Name: " << GetLastName() << "   " << "Age: " << GetAge() << "   " << "daysInCourse: {" << get<0>(result) << ", " << get<1>(result) << ", " << get<2>(result) << "} Degree Program: " << degType << endl;

}

// ======== Destructor ======== //
Student::~Student(){
    cout << "Student class destroyed" << endl;
}