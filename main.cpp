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

    cout << "C867 Scripting and Programming Applications" << endl << "C++" << endl << "STUDENT ID HERE" << endl << "Nicole Hamilton" << endl;

    const string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Nicole,Hamilton,nhami67@wgu.edu,28,10,20,5,SOFTWARE"};

    Roster classRoster;

    for(int i=0; i < 5; ++i){
        stringstream ss(studentData[i]);
        vector<string> studentStr;

        while(ss.good()){
            string subStr;
            getline(ss, subStr, ',');
            studentStr.push_back(subStr);
        }

        DegreeProgram studentDeg;
        if(studentStr.at(8) == "SECURITY"){
            studentDeg = SECURITY;
        } else if(studentStr.at(8) == "NETWORK"){
            studentDeg = NETWORK;
        } else if(studentStr.at(8) == "SOFTWARE"){
            studentDeg = SOFTWARE;
        };

        classRoster.add(studentStr.at(0), studentStr.at(1), studentStr.at(2), studentStr.at(3), stoi(studentStr.at(4)), stoi(studentStr.at(5)), stoi(studentStr.at(6)), stoi(studentStr.at(7)), studentDeg);

        ss.clear();
    }    

    classRoster.printAll();
    classRoster.printByDegreeProgram(SOFTWARE);


        
    return 0;
};