/*
Name: Md. Shahriar Haque
ID: 23-51730-2
Course Name: Data Structure Lab
Section: N
*/
#include <iostream>

using namespace std;

int main() {
    int soa = 4;
    int arr[soa];
    

    cout << "Enter " << soa << " integers to be sorted:" << endl;
    for (int i = 0; i < soa; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }


    for (int i = 0; i < soa; i++) {
        for (int j = 0; j < soa - 1 - i; j++) { 
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted array:" << endl;
    for (int i = 0; i < soa; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
