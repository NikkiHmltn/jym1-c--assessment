#ifndef ROSTER_H
#define ROSTER_H
#include "degree.h"

// ROSTER CLASS

class Roster {
    public:
        // Constructor
        Roster();

        // Class Methods
        void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
        // void remove(string studentID);
        // void printAll();
        // void printAverageDaysInCourse(string studentID);
        // void printInvalidEmails();
        // void printByDegreeProgram(DegreeProgram degreeProgram);       
                    
    private:
        int* classRosterArray[5];
};


#endif