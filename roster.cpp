#include <iostream>
using namespace std;
#include <string>
#include "roster.h"
#include "degree.h"
#include "student.h"


int rosterArr = 0;

Roster::Roster(){
    Student* classRosterArray[5] = {nullptr, nullptr, nullptr, nullptr, nullptr};
};

//  sets the instance variables from student and updates the roster
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram){
    for(int i=0; i < 5; ++i){
        if(classRosterArray[i] == nullptr){
            classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
            cout << classRosterArray[i] << endl;
            break;
        };
    };
};

// // that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found
// Roster::remove(string studentID){

//     for(int i=0; i < sizeof(classRosterArray); ++i){
//         if(studentID = Student student.studentId){
//             classRosterArray[i] = null;
//         }
//         else {
//             cout << "Couldn't find a student by that ID: " << studentId << endl;
//         }
//     }
// };

// // that prints a complete tab-separated list of student data
// Roster::printAll(){
    
// };

// // that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter
// Roster::printAverageDaysInCourse(string studentID);

// //  that verifies student email addresses and displays all invalid email addresses to the user
// Roster::printInvalidEmails();

// // prints out student information for a degree program specified by an enumerated type
// Roster::printByDegreeProgram(DegreeProgram degreeProgram); 
