// GOAL: You must write a program containing two classes (i.e., Student and Roster). The program will maintain a current roster of students within a given course. Student data for the program include student ID, first name, last name, email address, age, an array of the number of days to complete each course, and degree program. This information can be found in the “studentData Table” below. The program will read a list of five students and use function calls to manipulate data (see part F4 in the requirements below). While parsing the list of data, the program should create student objects. The entire student list will be stored in one array of students called classRosterArray. Specific data-related output will be directed to the console.

// Make two classes (Student and Roster)
    // CLASS STUDENT
    // CLASS ROSTER

// student list stored in an array of students (classRosterArray)

// Read a list of 5 students
// function calls to manipulate data

// studentData Table
// const string studentData[] = 

// {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,[firstname],[lastname],[emailaddress],[age], [numberofdaystocomplete3courses],SOFTWARE"

//  ============== THINGS FOR MAIN.CPP ============ // 

// needs main() to make function calls as such: 
// 1.  Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
// 2.  Create an instance of the Roster class called classRoster.
// 3.  Add each student to classRoster.
// 4.  Convert the following pseudo code to complete the rest of the  main() function:
    // classRoster.printAll();
    // classRoster.printInvalidEmails();
    // //loop through classRosterArray and for each element:
    // classRoster.printAverageDaysInCourse(/*current_object's student id*/);
    // Note: For the current_object's student id, use an accessor (i.e., getter) for the classRosterArray to access the student id.
    // classRoster.printByDegreeProgram(SOFTWARE);
    // classRoster.remove("A3");
    // classRoster.printAll();
    // classRoster.remove("A3");
    // //expected: the above line should print a message saying such a student with this ID was not found.
// 5.  Implement the destructor to release the memory that was allocated dynamically in Roster.
