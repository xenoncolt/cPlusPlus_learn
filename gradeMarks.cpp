#include <iostream>

using std::cout;
using std::cin;
using std::endl;


void printMark(std::string tempLetterGrade, double CGpa){
    cout << "___________________________________________________________\n";
    cout << "You got " << tempLetterGrade << " and Your grade is " << CGpa;
}


int main() {

    const int sub = 5;
    double marks[sub];

    cout << "Enter your marks: " << endl;

    for (int i = 0; i < sub; i++)
    {
        cout << " Subject " << i + 1 << " : ";
        cin >> marks[i];
    }

    double totalMarks = 0;

    for (int j = 0; j < sub; j++)
    {
        totalMarks += marks[j];
    }

    cout << "Total Marks: " << totalMarks << endl;

    // double avg = totalMarks / sub;

    // cout << "Average Marks: " << avg << endl;
    double cg [sub];
    for (int k = 0; k < sub; k++)
    {

        if (marks[k] >= 90)
        {
            cg[k] = 4.00;
        }
        else if (marks[k] >= 85)
        {
            cg[k] = 3.75;
        }
        else if (marks[k] >= 80)
        {
            cg[k] = 3.50;
        }
        else if (marks[k] >= 75)
        {
            cg[k] = 3.25;
        }
        else if (marks[k] >= 70)
        {
            cg[k] = 3.00;
        } else if (marks[k] >= 65)
        {
            cg[k] = 2.75;
        } else if (marks[k] >=60)
        {
            cg[k] = 2.50;
        } else if (marks[k] >= 50)
        {
            cg[k] = 2.25;
        }
        else
        {
            cg[k] = 0.00;
        }
        
    }
    
    // cout << cg[3] << endl;

    double grade = 0;
    for (int t = 0; t < sub; t++)
    {
        grade += cg[t];
    }
    
    // cout << grade <<endl;

    double CGpa = grade / sub;
    // cout << CGpa << endl;

    std::string letterGrade[] = {"A+", "A", "B+", "B", "C", "D", "F"};

    if (CGpa >= 3.75)
    {
        printMark(letterGrade[0], CGpa);
    //    cout << "You got A+ and Your grade is " << CGpa << "\n";
    } else if (CGpa >= 3.50)
    {
        printMark(letterGrade[1], CGpa);
        // cout << "You got A and Your Grade is " << CGpa << "\n";
    } else if (CGpa >= 3.25)
    {
        printMark(letterGrade[2], CGpa);
        // cout << "You got B+ and Your Grade is " << CGpa << "\n";
    }
    else if (CGpa >= 3.00)
    {
        printMark(letterGrade[3], CGpa);
        // cout << "You got B and Your Grade is " << CGpa << "\n";
    } 
    else if (CGpa >= 2.75)
    {
        printMark(letterGrade[4], CGpa);
        //cout << "You got C and Your Grade is " << CGpa << "\n";
    }
    else if (CGpa >= 2.50)
    {
        printMark(letterGrade[5], CGpa);
        //cout << "You got D and Your Grade is " << CGpa << "\n";
    } else
    {
        printMark(letterGrade[6], CGpa);
        //cout << "You got F and Your Grade is " << CGpa << "\n";
    } 
}