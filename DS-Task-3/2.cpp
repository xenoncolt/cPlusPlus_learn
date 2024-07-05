/*
Name: Md. Shahriar Haque
ID: 23-51730-2
Course Name: Data Structure Lab
Section: N
*/

#include <iostream>

using namespace std;

struct Book {
    int Price;
    int NoOfPages;
};

int main() {
    Book b[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i].Price;
        cin >> b[i].NoOfPages;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << b[i].Price;
        cout << b[i].NoOfPages;
    }
    return 0;
}