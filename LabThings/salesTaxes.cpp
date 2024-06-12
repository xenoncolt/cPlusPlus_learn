#include <iostream>

using namespace std;

//function for tax
double tax(double value, double rate) {
    return value * rate / 100; // value = price || rate means taxRate || tui chaile akane onnow kisu o nite dorte paros value and rate er bodle
};

//function for total
double total(double value, double rate) {
    return value + tax(value, rate); // value means price || rate means taxRate || tui chaile akane onnow kisu o nite dorte paros value and rate er bodle
    // tax(value, rate) akta function j ta opore tax declare kore deya hoise... oita akane use korsi
};

int main() {
    double price, taxRate;
    cout << "Enter the price of the item: ";
    cin >> price;
    cout << "Enter the tax rate: ";
    cin >> taxRate;

    // pore last a akane total er jnow j function oita likhsi and or vitore price r taxRate pass korsi
    cout << "The total price of the item is: " << total(price, taxRate) << endl;
}