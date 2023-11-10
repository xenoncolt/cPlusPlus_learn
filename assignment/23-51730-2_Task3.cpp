/*
Name: Md. Shahriar Haque
Student ID: 23-51730-2
Section: O
Introduction to programming language Lab
*/


#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main() {
    string input;
    cout << "Write a word to check how many vowel their: ";
    cin >> input;

    int count = 0;

    for (int i = 0; i < input.length(); i++) {

        char word = tolower(input[i]);
        
        if ( word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u') {
            count++;
        }
        
    }

    cout << "Total vowel number in your text: " << count << "\n";

    system("pause");
    
}