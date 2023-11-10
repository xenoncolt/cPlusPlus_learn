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
    string text1;
    string text2;

    cout << "Write any two word: ";
    cin >> text1 >> text2;


    string result;


    for (int i = 0; i < text1.length(); i++) {

        result += text1[i];
    }

    for (int j = 0; j < text2.length(); j++) {
        
        result += text2[j];
    }
    
    

    cout << "You write: " << result << "\n";

    system("pause");
    
}