#include <iostream>

using namespace std;

string reverseString(string str) {
    string reversed;
    for (int i = 0; i < str.length(); i++) {
        reversed = str[i] + reversed;
    }
    return reversed;
}

int main() {
    cout << "Enter a string: ";
    string inputString;
    cin >> inputString;

    string reversedString = reverseString(inputString);

    cout << "Reversed string: " << reversedString <<endl;

}