#include <iostream>
using namespace std;
#include <string>
#include <tuple>
#include "roster.h"
#include "degree.h"
#include "student.h"

// ===== CONSTRUCTOR ===== // 

Roster::Roster(){
    Student* classRosterArray[5] = {nullptr, nullptr, nullptr, nullptr, nullptr};
};

// ============== Class Methods ================ //

//  sets the instance variables from student and updates the roster
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram){
    for(int i=0; i < 5; ++i){
        if(classRosterArray[i] == nullptr){
            classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
            break;
        };
    };
};

// // that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found
void Roster::remove(string comparisonID){
    int removed = 0;
    for(int i=0; i < 5; ++i){
        if(classRosterArray[i] != nullptr){
             string arrStudentId = classRosterArray[i]->GetStudentId();
            string newId = comparisonID;
            // cout << compare << " " << sid << endl;
            if(arrStudentId != comparisonID){
                continue;
            }else {
                if(classRosterArray[i] != NULL){
                    // delete classRosterArray[i];
                    classRosterArray[i] = NULL;
                    ++removed;
                };
            };
        }; 
    };
    if(removed == 0){
        cout << "Unable to find student with ID: " << comparisonID << endl;
    };
    cout << "Removed " << removed << " student(s) from the roster." << endl;
};

// // that prints a complete tab-separated list of student data
void Roster::printAll(){
    for(int i=0; i < 5; ++i){
        if(classRosterArray[i] != nullptr){
            classRosterArray[i]->Print();
        };
    };
    
};

// // that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter
void Roster::printAverageDaysInCourse(string studentID){
    
    int total=0;
    int avg=0;

    for(int i=0; i < 5; ++i){
        if(classRosterArray[i] != nullptr){
            if(classRosterArray[i]->GetStudentId() == studentID){
                tuple<int,int,int> days;
                days = classRosterArray[i]->GetDaysToComplete();
                total = get<0>(days) + get<1>(days) + get<2>(days);
            };
        };
    };
    avg = total /3;
    cout << "Total average days: " << avg << " for " << studentID << endl;
};

// //  that verifies student email addresses and displays all invalid email addresses to the user
void Roster::printInvalidEmails(){
    for(int i=0; i < 5; ++i){
        if(classRosterArray[i] != nullptr){
            string studentEml = classRosterArray[i]->GetEmail();

            if(!studentEml.find("@")){
                classRosterArray[i]->Print();
            } else if (studentEml.find(" ")){
                classRosterArray[i]->Print();
            } else if (!studentEml.find(".")){
                classRosterArray[i]->Print();
            };
        };  
    };
};

// // prints out student information for a degree program specified by an enumerated type
void Roster::printByDegreeProgram(DegreeProgram degreeProgram){
    for(int i=0; i < 5; ++i){
        if(classRosterArray[i] != nullptr){
            if(classRosterArray[i]->GetDegreeProgram() == degreeProgram){
                classRosterArray[i]->Print();
            };
        };  
    };
}; 

// ============ Deconstructor ============== //

Roster::~Roster(){
    cout << "Roster class destroyed" << endl;
};
