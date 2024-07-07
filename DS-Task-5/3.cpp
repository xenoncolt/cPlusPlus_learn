/*
Name: Md. Shahriar Haque
ID: 23-51730-2
Course Name: Data Structure Lab
Section: N
*/
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {45, 67, 89, 98};
    int item, i;

    cout << "Enter an integer to search in the array: ";
    cin >> item;


    for (i = 0; i < 4; i++) {
        if (arr[i] == item) {
            cout << "Item found at index: " << i << endl;
            return 0;
        }
    }

    cout << "Item not found in the array." << endl;
    return 0;
}
