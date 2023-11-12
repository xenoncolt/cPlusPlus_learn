// Write a C++ program to find the maximum and minimum elements in an array.

// #include <iostream>

// using std::cout;

// int main() {
//     int arr[] = {10, 5, 8, 17, 3, 20, 1}; 


//     int n = sizeof(arr) / sizeof(arr[0]); 


//     int maxElement = arr[0]; 
//     int minElement = arr[0]; 


//     for (int i = 1; i < n; i++) { // i = 0 nei nai  
//         if (arr[i] > maxElement) { //coz 10 > 10 possible na
//             maxElement = arr[i]; // possible na hole kono value e asbe na
//         }
//         if (arr[i] < minElement) {
//             minElement = arr[i]; 
//         }
//     }


//     cout << "Maximum element: " << maxElement << std::endl;
//     cout << "Minimum element: " << minElement << std::endl;
    
// }

#include <iostream>

using std::cin;
using std::cout;

int main() {
    int size;
    int usrNum[size];

    cout << "Total number you want to take: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i+1 << " number: ";
        cin >> usrNum[i];
    }

    int maxElement = usrNum[0];
    int minElement = usrNum[0];

    for (int j = 0; j < size; j++)
    {
        if (maxElement < usrNum[j])
        {
            maxElement = usrNum[j];
        }

        if (minElement > usrNum[j]) {
            minElement = usrNum[j];
        }
        
    }

    cout << "---------------------------------------------\n";
    cout << "Maximum element: " << maxElement << std::endl;
    cout << "Minimum element: " << minElement << std::endl;
    
    system("pause");
    
}


