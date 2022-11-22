// CLASS STUDENT:
    // studentID, firstName, lastName, emailAddress, age, arrOfNumOfDaysToComplete(each course ok?), degreeProgram
    // FUNCTIONS INSIDE STUDENT CLASS: 
        // 1.   an accessor (i.e., getter) for each instance variable from part D1
        // 2.   a mutator (i.e., setter) for each instance variable from part D1
        // 3.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.
        // 4.  constructor using all of the input parameters provided in the table
        // 5.  print() to print specific student data
#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student {
    public:
    // Class Constructors 
        Student(string kidId, string firstname, string lastname, string email, int studentAge, int day1, int day2, int day3, string program);
        
    // Getters
        string GetStudentId();
        string GetFirstName();
        string GetLastName();
        string GetEmail();
        int GetAge();
        string GetDegreeProgram();
        int GetDaysToComplete();

    // Setters
        void SetStudentId(string newStudentId);
        void SetFirstName(string newFirstName);
        void SetLastName(string newLastName);
        void SetEmail(string newEmail);
        void SetAge(int newAge);
        void SetDegreeProgram(string newProgram);
        void SetDaysToComplete(int day1, int day2, int day3);

    // Print All Student Info
        void Print();

    // Destructor
    // ~Student();

    private:
        string studentId;
        string firstName;
        string lastName;
        string emailAddress;
        int age;
        int daysInCourse[3];
        string degreeProgram;
};

#endif