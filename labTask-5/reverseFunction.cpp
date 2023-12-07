
#include <iostream>

using std::cin;
using std::cout;
using std::string;

string reverseString(string value) {
    string reversed;
    for (int i = 0; i < value.length(); i++)
    {
        reversed = value[i] + reversed;
    }

    return reversed;
}

int main() {
    cout << "Enter your name: ";
    string name;
    cin >> name;

    string reversedName = reverseString(name);
    cout << "Your reverse name is: " << reversedName << "\n";
}
