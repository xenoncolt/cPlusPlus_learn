/*
    Write a function called zero_small() that has two integer arguments being passed by reference and 
    sets the smaller of the two numbers to 0. Write the main program to access the function.
*/

#include <iostream>

using namespace std;

void zero_small(int &a, int &b) {
    if (a < b) {
        a = 0;
    } else {
        b = 0;
    }
}

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    zero_small(a, b);

    cout << "After zero_small() function: " << a << ", " << b << endl;
}