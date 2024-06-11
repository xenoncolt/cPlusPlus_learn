/*
Name: Md. Shahriar Haque
ID: 23-51730-2
Course:Data Structure Lab 
Section: N
*/
#include <iostream>

using std::cout;
using std::endl;

int main() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < (i * 2) + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 4; i > 0; i--) {
        for (int j = 0; j < 5 - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < (i * 2) - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
}
