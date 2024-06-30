#include <iostream>

using namespace std;
int main()
{
    int mi, soa = 4;

    int arr[4] = {98, 56, 65, 23};

    for (int i = 0; i < soa - 1; i++) {
        mi = i;
        for (int j = 0; j < soa; j++)
        {
            if (arr[j] < arr[mi])
            {
                mi = j;
            }
            
        }
        int temp = arr[mi];
        arr[mi] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}