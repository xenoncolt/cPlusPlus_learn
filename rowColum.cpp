#include <iostream>

using std::cout;
using std::cin;

int main() {
    int x, y;

    cout << "Enter Row and Column [Separate with space]: ";
    cin >> x >> y;

    int store[x][y];

    cout << "Now enter value: ";

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++) 
        {
            cin >> store[i][j];
        }
    }

    cout << "____________________________\n";

    for (int a = 0; a < x; a++)
    {
        for (int b = 0; b < y; b++)
        {
            cout << store[a][b] << " ";
        }
        
        cout << "\n";
        
    }
    
}