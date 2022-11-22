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
        tuple<int,int,int> GetDaysToComplete();

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
        ~Student();

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