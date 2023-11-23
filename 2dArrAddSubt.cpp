#include <iostream>

using std::cout;
using std::cin;

// int row, col;

// int arrTable ( int store[row][col], int max_rows, int max_clm) {
//     int add = 0;
//     int multi = 1;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             add += store[i][j];
//             multi *= store[i][j];
//         }
        
//     }
//     return add;
//     return multi;
// }


int main() {
    int rows, clm;

    cout << "Enter rows size: ";
    cin >> rows;
    cout << "Enter column size: ";
    cin >> clm;

    int store[rows][clm];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < clm; j++)
        {
            cout << "Enter " << i + 1 << " & " << j + 2 << " number: ";
            cin >> store[i][j];
        }
        
    }

    cout << "Your Table is: \n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < clm; j++)
        {
            cout << store[i][j] << " ";
        }
        cout << "\n";
    }


    int add = 0;
    int multi = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < clm; j++)
        {
            add += store[i][j];
            multi *= store[i][j];
        }
        
    }
    
    // int add = arrTable(store[rows][clm], rows, clm);
    // int multi = arrTable(store[rows][clm], rows, clm);

    cout << "________________________________________\n";
    cout << "Sum of all elements in 2D array is: " << add << "\n";
    cout << "___________________________________________________\n";
    cout << "Multiplication of all elements in 2D array is: " << multi << "\n";
    
}