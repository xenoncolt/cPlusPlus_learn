#include <iostream>


bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    if (isPrime(n)) {
        std::cout << n << " is a prime number \n";
    } else {
        std::cout << n << " is not a prime number \n";
    }
    
    system("pause");
}
