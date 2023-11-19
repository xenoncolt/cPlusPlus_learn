#include <iostream>
#include <string>

int main() {
    std::string myName;
    std::cout << "What is your name? " << std::endl;
    std::getline(std::cin, myName);
    std::cout << "Hello " << myName << std::endl;
    return 0;
}