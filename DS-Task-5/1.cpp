/*
Name: Md. Shahriar Haque
ID: 23-51730-2
Course Name: Data Structure Lab
Section: N
*/
#include <iostream>

using namespace std;
int main()
{

    int i, item, arr[4] = {45, 67, 89, 98};

    cin >> item;

    for (i = 0; i < 4; i++)
    {

        if (arr[i] == item)
        {

            break;
        }
    }
    cout << i << endl;

    return 0;
}