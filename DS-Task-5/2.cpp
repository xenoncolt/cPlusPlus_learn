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

    int item, position = 0;

    int f_index = 0, l_index = 4, m_index = 0;

    int arr[4] = {45, 67, 89, 98};

    int j;

    cin >> item;

    while (f_index <= l_index)
    {
        m_index = (f_index + l_index) / 2;
        if (item < arr[m_index])
        {
            l_index = m_index - 1;
            j = l_index;
        }
        else if (item > arr[m_index])
        {
            f_index = m_index + 1;
            j = f_index;
        }
        else
        {
            position = m_index;
            j = position;
            break;
        }
    }
    cout << j;
    return 0;
}