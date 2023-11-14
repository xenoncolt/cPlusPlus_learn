#include <iostream>

int main() {
    int num; // hold the input
    std::cout << "Enter the number of rows: "; // show to the user
    std::cin >> num;       // user input
    
    for (int i = 1; i <= num; i++) //loop start from 1 to num
    {
        for (int j = 1; j <= num - i; j++) //print spaces before stars
        {
            std::cout << " ";
        }

        //print stars in each row
        for (int k = 1; k <= i; k++)
        {
            std::cout << "* ";
        }

        std::cout << std::endl;
    }
    
}
