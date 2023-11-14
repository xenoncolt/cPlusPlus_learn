#include <iostream>

using std::cout;
using std::cin;

int main() {
  int rows, cols;
  cout << "Enter the number of rows: ";
  cin >> rows;
  cout << "Enter the number of columns: ";
  cin >> cols;


  int arr[rows][cols];


  for (int i = 0; i < rows; i++) 
  {
    for (int j = 0; j < cols; j++) 
    {
      cout << "Enter element at position [" << i << "][" << j << "]: ";
      cin >> arr[i][j];
    }
  }
  
  
  int ttl = 0;
  
  cout << "The 2D array is:\n";
  for (int x = 0; x < rows; x++) 
  {
    for (int y = 0; y < cols; y++) 
    {
      cout << arr[x][y] << " ";
      ttl += arr[a][b];
    }
    cout << std::endl;
  }

 

  for (int a = 0; a < rows; a++)
  {
    for (int b = 0; b < cols; b++)
    {
        
    }
    
  }
  

  cout << "_________________________"<<std::endl;
  cout << "Total             = " << ttl << std::endl;
}
