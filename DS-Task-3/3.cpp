/*
Name: Md. Shahriar Haque
ID: 23-51730-2
Course Name: Data Structure Lab
Section: N
*/

#include <iostream>

using namespace std;

struct Student
{
    string name;
    string id;
    int semester;
    int age;
    float cgpa;
};

int main() {
    Student students[10];

    for (int i = 0; i < 10; ++i)
    {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "ID: ";
        cin >> students[i].id;
        cout << "Semester: ";
        cin >> students[i].semester;
        cout << "Age: ";
        cin >> students[i].age;
        cout << "CGPA: ";
        cin >> students[i].cgpa;
    }

    float totalCgpa = 0.0;
    for (int i = 0; i < 10; ++i)
    {
        totalCgpa += students[i].cgpa;
    }
    float avgCgpa = totalCgpa / 10.0;

    cout << "Average CGPA of the students: " << avgCgpa << endl;

    for (int  i = 0; i < 10; i++)
    {
        if (students[i].cgpa < 2.0) {
            cout << students[i].name << " is under probation.\n";
        }
        if (students[i].age > 21) {
            cout << students[i].name << " is aged over 21. \n";
        }
        if (students[i].semester == 10) {
            cout << students[i].name << " is in the last semester. \n";
        }
    }
    return 0;
}
