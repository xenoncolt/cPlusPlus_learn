#include <iostream>

using std::cin;
using std::cout;

unsigned long factorial(int num) {
    unsigned long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Please enter a positive number.";
    } else {
        cout << "Factorial of " << num << " is: " << factorial(num) << "\n";
    }
}
