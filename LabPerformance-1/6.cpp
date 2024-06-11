/*
Name: Md. Shahriar Haque
ID: 23-51730-2
Course:Data Structure Lab 
Section: N
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int sum(int value1, int value2) {
    return value1 + value2;
}

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "Sum: " <<  sum(num1, num2) << endl; 
    
}