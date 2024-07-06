/*
 Write a C++ program with appropriate data structure to keep records of 5 students. Each student will have the following information:
    - Unique ID (you can use an integer for this)
    - Number of Credits Completed
    - CGPA
    - Print all the student’s IDs whose CGPA is more than 3.60.
    - Print all the student’s IDs who have completed more than 60 credits.
*/ 
#include <iostream>

using namespace std;

struct Student {
    int id;
    int credits;
    float cgpa;
};

int main() {
    Student students[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter student " << i + 1 << " ID: ";
        cin >> students[i].id;
        cout << "Enter student " << i + 1 << " Credits: ";
        cin >> students[i].credits;
        cout << "Enter student " << i + 1 << " CGPA: ";
        cin >> students[i].cgpa;
        while (students[i].cgpa > 4.00)
        {
            cout << "CGPA can not over 4.00. Please enter under 4.00" << endl;
            cout << "Enter student " << i + 1 << " CGPA: " ;
            cin >> students[i].cgpa;
        }
    }
    
    cout << "Students with CGPA more the 3.60: " << endl;
    for (int i = 0; i < 5; i++)
    {
        if (students[i].cgpa > 3.60) {
            cout << students[i].id << ", ";
        }
    }
    /*
    Students with CGPA more the 3.60:
    23244, 23213, 2323, 22323
    [next line missing]
    */
    // after finished loop then go to missing next line
    cout << endl;   

    cout << "Student who have complete more than 60 Credits: " << endl;
    for (int i = 0; i < 5; i++)
    {
        if (students[i].credits > 60) {
            cout << students[i].id << ", ";
        }
    }
    /*
    Student who have complete more than 60 Credits:
    64, 67, 78, 134
    [next line missing]
    */
    // after finished loop then go to missing next line
    cout << endl;
    system("pause");
    return 0;
}