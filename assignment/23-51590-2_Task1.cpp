// Name: Nabeeha Taiyeba
// Student ID: 23-51590-2
// Section: O
// Introduction to programming language



#include <iostream>
using namespace std;

int main(){

int num;
cout << "Enter a number: ";
cin >> num;

int main_num = num;
int reverse_num = 0;

do {
    int lst_dgt = num % 10;

    reverse_num = reverse_num * 10 + lst_dgt;

    
    num = num / 10;

} while (num > 0); 


if (reverse_num == main_num) {

    cout << main_num << " is a palindrome number." << endl;
} else {
    cout << main_num << " is not a palindrome number." << endl;
}
}