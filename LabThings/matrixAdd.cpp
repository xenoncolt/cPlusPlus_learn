#include <iostream>

using namespace std;

int main() {
    int rows, column;

    cout << "Enter row size: ";
    cin >> rows;
    cout << "Enter column size: ";
    cin >> column;

    int matrix_A[rows][column];
    int matrix_B[rows][column];


    //Array user input for matrix A
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "Enter " << i + 1 << " & " << j + 1 << " number for Matrix A: ";
            cin >> matrix_A[i][j];
        }
    };

    //array user input for matrix B
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "Enter " << i + 1 << " & " << j + 1 << " number for Matrix B: ";
            cin >> matrix_B[i][j];
        }
        
    };

    int sum[rows][column];

    // Matrix Add
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sum[i][j] = matrix_A[i][j] + matrix_B[i][j];
        }
    };


    // First value minimum dore nisi
    int min_value = sum[0][0];
    
    // Find minimum value
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            // jodi dora value porer value theke soto hoy tahole oi soto value minimum value hisabe count hbe 
            if (min_value > sum[i][j])
            {
                min_value = sum[i][j];
            }
            
        }
        
    };


    // Printing Sum matrix
    cout << "Result Matrix: " << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << "|"; // aita design er jnow use korte paros na o korte paros pera nai
        for (int j = 0; j < column; j++)
        {
            cout << sum[i][j] << " ";  // " " aita use kora hoise shundor r value gulo er maje faka rakhar jnow
        }
        cout << "|"; // aita design er jnow use korte paros na o korte paros pera nai
        cout << endl;
    };
}