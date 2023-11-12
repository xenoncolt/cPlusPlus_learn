//Take any integer input through the keyboard. Write a program to find out whether it is an odd number or an even number. For inputs that are not a number, the program will show “Error” as output. (Using If-else).
#include <iostream>


int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num % 2 == 0 && num != 0) //even number 
    {
        std::cout << num << " is a even number \n";
    } else if (num % 2 != 0 && num != 0) //odd number 
    {
        std::cout << num << " is a odd number \n";
    } else {
        std::cout << "Please input valid number. \n";
    }
}
