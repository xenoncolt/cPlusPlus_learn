#include <iostream>
#include <limits>

int main() {
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    while (std::cin.fail() || std::cin.peek() != '\n')
    {
        std::cout << "Please input only year number no decimal or character" << std::endl;
        std::cin.clear(); // clear the error state
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any remaining characters in the input buffer
        std::cout << "Please enter a valid year: ";
        std::cin >> year;
    }
    
    // calculate
    int year_4 = year % 4;
    int year_400 = year % 400;
    int year_100 = year % 100;

    //Process
    if (year_4 == 0 && year_100 != 0 || year_400 == 0)
    {
        std::cout << year << " Year is a Leap Year." << std::endl;
    } else
    {
        std::cout << year << " Year is not a Leap Year." << std::endl;
    }

    system("pause");
}
