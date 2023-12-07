#include <iostream>

using std::cin;
using std::cout;

bool checkPrime(int num) {
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
        
    }
    return true;
}

int main() {
    cout << "Enter an positive integer number: ";
    int num;
    cin >> num;

    cout << "It is" << (checkPrime(num) ? "" : " not") << " a prime number\n"; 
}