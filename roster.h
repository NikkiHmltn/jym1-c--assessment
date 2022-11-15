// GUARD ALL HEADER FILES
#ifndef ROSTER_H
#define ROSTER_H

// ROSTER CLASS
    // Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
    // Create a student object for each student in the data table and populate classRosterArray.
        // a.  Parse each set of data identified in the “studentData Table.”
        // b.  Add each student object to classRosterArray
            //FUNCTIONS IN THE CLASS: 
                // public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)
                    //  sets the instance variables from part D1 and updates the roster
                // public void remove(string studentID)
                    // that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found
                // public void printAll()
                    // that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.
                // public void printAverageDaysInCourse(string studentID)
                    // that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter
                // public void printInvalidEmails()
                    //  that verifies student email addresses and displays all invalid email addresses to the user, Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
                // public void printByDegreeProgram(DegreeProgram degreeProgram)
                    // prints out student information for a degree program specified by an enumerated type



#endif