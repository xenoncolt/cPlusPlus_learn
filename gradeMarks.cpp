#include <iostream>

using namespace std;

int main() {
    const int sub = 5;
    double marks[sub];

    cout << "Enter your marks: " << endl;

    for (int i = 0; i < sub; i++)
    {
        cout << " Subject " << i+1 << " :";
        cin >> marks[i];
    }

    double totalMarks = 0;
    
    for (int j = 0; j < sub; j++)
    {
        totalMarks += marks[j];
    }

    cout << "Total Marks: " << totalMarks << endl;

    double avg = totalMarks / sub;

    // cout << "Average Marks: " << avg << endl;
    
    if (avg >= 90)
    {
        cout << "You got A+ and Your grade is 4.00\n";
    }else if (avg > 85)
    {
        cout << "You got A and Your Grade is 3.75\n";
    } else if (avg > 80)
    {
        cout << "You got B+ and Your Grade is 3.50\n";
    } else if (avg > 75)
    {
        cout << "You got B and Your Grade is 3.25\n";
    } else if (avg > 50)
    {
        cout << "You got D and Your Grade is 2.25\n";
    } else {
        cout << "You got F and Your Grade is 0.00\n";
    }
    
}