/*
Name: Md. Shahriar Haque
Student ID: 23-51730-2
Section: O
Introduction to programming language Lab
*/


#include <iostream>


using std::cout;
using std::cin;

int main() {

    int value;

    cout << "Please Enter a positive integer number: ";
    cin >> value;

    int main_value = value;
    int reverse_value = 0;


    for (int temp = value; temp > 0; temp = temp / 10)
    {
        int last_num = temp % 10;
        reverse_value = reverse_value * 10 + last_num;
        
    }
    if (reverse_value == main_value)
    {
        cout << "Your number " << main_value << " is a palindrome. \n"; 
    } else
    {
        cout << "Your number " << main_value << " is not a palindrome. \n";
    }
    
    
    system("pause");

    
}