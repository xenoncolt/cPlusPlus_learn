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
    int item, f_index = 0, l_index = 3, m_index, j = -1;

    cout << "Enter an integer to search in the array: ";
    cin >> item;

    while (f_index <= l_index) {
        m_index = f_index + (l_index - f_index) / 2;
        if (item < arr[m_index]) {
            l_index = m_index - 1;
        } else if (item > arr[m_index]) {
            f_index = m_index + 1;
        } else {
            j = m_index;
            break;
        }
    }

    if (j != -1) {
        cout << "Item found at index: " << j << endl;
    } else {
        cout << "Item not found in the array." << endl;
    }

    return 0;
}
