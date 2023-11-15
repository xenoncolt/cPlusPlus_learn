#include <iostream>

using std::cout;
using std::cin;

int main() {
    int size;
    int grab[size];
    int sum = 0;

    cout << "The amount of number you want to Sum and Average: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter your number: ";
        cin >> grab[i];
    }

    for (int j = 0; j < size; j++)
    {
        sum = sum + grab[j];
    }

    cout << "The sum of your number is: " << sum <<std::endl;

    int avg = sum / size;

    cout << "The average of your number is: " << avg << std::endl;

    system("pause");
}