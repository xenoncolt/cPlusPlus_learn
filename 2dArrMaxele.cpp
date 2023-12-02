#include <iostream>

using std::cout;
using std::cin;

int main() {
    int rows, clm;
    cout << "Enter row size: ";
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

    int maxEle = store[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < clm; j++)
        {
            if (maxEle < store[i][j])
            {
                maxEle = store[i][j];
            }
            
        }
        
    }
    
    cout << " Table: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < clm; j++)
        {
            cout << store[i][j] << " ";
        }
        cout << "\n";
        
    }
    

    cout << "_________________________________\n";
    cout << "Max element in 2D array is: " << maxEle <<  "\n";
    
}