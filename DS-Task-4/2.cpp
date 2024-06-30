#include <iostream>

using namespace std;

int main()
{
    int soa = 4, sao = 4;

    int arr[4] = {9, 6, 5, 3};

    for (int i = 0; i < soa; i++) {
        for (int j = 0; j < sao; j++)
        {
            if (j<(sao-1)-i)
            {
                if (arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                }
                
            }
            
        }
    }
    for (int j = 0; j < 4; j++)
    {
        cout << arr[j] << endl;
    }
    return 0;
}