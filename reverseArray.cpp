#include <iostream>

using std::cout;
using std::cin;

int main() {
    const int n = 5;
    int usrInput[n];
    
    cout << "Enter 5 random number: ";
    for (int i = 0; i < n; i++)
    {
        cin >> usrInput[i];
    }

    for (int i = 4; i >= 0; i--)
    {
        cout << "Your " << i+1 << " number is: " << usrInput[i] << std::endl;
    }
    
    
}