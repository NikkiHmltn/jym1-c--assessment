// ========== PROJECT INFO =========== // 

// GOAL: You must write a program containing two classes (i.e., Student and Roster). The program will maintain a current roster of students within a given course. Student data for the program include student ID, first name, last name, email address, age, an array of the number of days to complete each course, and degree program. This information can be found in the “studentData Table” below. The program will read a list of five students and use function calls to manipulate data (see part F4 in the requirements below). While parsing the list of data, the program should create student objects. The entire student list will be stored in one array of students called classRosterArray. Specific data-related output will be directed to the console.

#include<iostream>
// #include "student.h"
#include "roster.h"
using namespace std;
#include <vector>
#include <sstream>
#include <string>


int main(){

    //Personal Submission Info
    cout << "C867 Scripting and Programming Applications" << endl << "C++" << endl << "STUDENT ID HERE" << endl << "Nicole Hamilton" << endl;
    cout << endl;

    //All student data from table
    const string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Nicole,Hamilton,nhami67@wgu.edu,28,10,20,5,SOFTWARE"};

    //Construct Roster
    Roster classRoster;

    //This separates the commas from the strings, creates enum for degree, and then sends all that and converted strings to int to make a new Student
    for(int i=0; i < 5; ++i){
        stringstream ss(studentData[i]);
        vector<string> studentStr;

        while(ss.good()){
            string subStr;
            getline(ss, subStr, ',');
            studentStr.push_back(subStr);
        }

        //Make the degree
        DegreeProgram studentDeg;
        if(studentStr.at(8) == "SECURITY"){
            studentDeg = SECURITY;
        } else if(studentStr.at(8) == "NETWORK"){
            studentDeg = NETWORK;
        } else if(studentStr.at(8) == "SOFTWARE"){
            studentDeg = SOFTWARE;
        };

        //Make the student
        classRoster.add(studentStr.at(0), studentStr.at(1), studentStr.at(2), studentStr.at(3), stoi(studentStr.at(4)), stoi(studentStr.at(5)), stoi(studentStr.at(6)), stoi(studentStr.at(7)), studentDeg);

        //Delete the stream
        ss.clear();
    }    

    // ========= RUNNING TESTS =========== //

        cout << "Printing all students... " << endl;
    classRoster.printAll(); //prints all students
        cout << "Printing all invalid emails... " << endl;
    classRoster.printInvalidEmails(); //returns all invalid student emails
    //Print all students avg days in course
        cout << "Printing all students' averages days... " << endl;
    for(int i=0; i < 5; ++i){
        if(classRoster.classRosterArray[i] != nullptr){
            string studentID = classRoster.classRosterArray[i]->GetStudentId();
            classRoster.printAverageDaysInCourse(studentID);
        }
    }
        cout << "Printing all {SOFTWARE} degrees..." << endl;
    classRoster.printByDegreeProgram(SOFTWARE); //displays all students by degree type
        cout << "Removing A3..." << endl;
    classRoster.remove("A3"); //Deletes student from roster
        cout << "Printing all students... " << endl;
    classRoster.printAll(); //prints all students
        cout << "Removing A3..." << endl;
    classRoster.remove("A3"); //Should print error cant find
 
    return 0;
};