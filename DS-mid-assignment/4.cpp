/*
4.	Write a C++ program to perform matrix addition between 4 matrices [2×2 matrix].
*/

#include <iostream>

using namespace std;

void matrix_input(int matrix[2][2]){
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Enter the element at  " << i+1 << ", " << j+1 << ": ";
            cin >> matrix[i][j];
        }
    }
}

int main() {
    int matrix1[2][2], matrix2[2][2], matrix3[2][2], matrix4[2][2];
    
    cout << "Enter the elements of the first matrix: " << endl;
    matrix_input(matrix1);

    cout << "Enter the elements of the second matrix: " << endl;
    matrix_input(matrix2);

    cout << "Enter the elements of the third matrix: " << endl;
    matrix_input(matrix3);

    cout << "Enter the elements of the fourth matrix: " << endl;
    matrix_input(matrix4);

    int sum[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[2][2] + matrix3[2][2] + matrix4[2][2];
        }
        
    }

    cout << "The sum of the matrices is: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

}