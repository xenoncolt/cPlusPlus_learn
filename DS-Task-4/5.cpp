/*
Name: Md. Shahriar Haque
ID: 23-51730-2
Course Name: Data Structure Lab
Section: N
*/
#include <iostream>
using namespace std;

int main() {
    int arr[4];

    for (int i = 0; i < 4; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >>arr[i];
    }

    for (int i = 1; i < 4; i++) {
        int key = arr[i];
        int j = i -1;
        while (j >=0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "Sorted array:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
