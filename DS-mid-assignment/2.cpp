/*
    Declare a structure to represent a complex number (a number having a real part and an imaginary part).
    Write C++ functions to add, subtract, multiply, and divide two complex numbers.
*/
#include <iostream>

using namespace std;

struct Complex {
    double real;
    double imaginary;
};

Complex add(Complex a, Complex b) {
    Complex store;
    store.real = a.real + b.real;
    store.imaginary = a.imaginary + b.imaginary;
    return store;
}

Complex subtract(Complex a, Complex b) {
    Complex store;
    store.real = a.real - b.real;
    store.imaginary = a.imaginary - b.imaginary;
    return store;
}

Complex multiply(Complex a, Complex b) {
    Complex store;
    store.real = a.real * b.real;
    store.imaginary = a.imaginary * b.imaginary;
    return store;
}

Complex divide(Complex a, Complex b) {
    Complex store;
    store.real = a.real / b.real;
    store.imaginary = a.imaginary / b.imaginary;
    return store;
}

int main() {
    Complex a, b;
    cout << "Enter the real part of the first complex number: ";
    cin >> a.real;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> a.imaginary;

    cout << "Enter the real part of the second complex number: ";
    cin >> b.real;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> b.imaginary;

    Complex sum = add(a, b);
    Complex subs = subtract(a, b);
    Complex multi = multiply(a, b);
    Complex div = divide(a, b);

    cout << "Sum of the two real number: " << sum.real << endl;
    cout << "Sum of the two imaginary number: " << sum.imaginary << endl;
    cout << "Subtraction of the two real number: " << subs.real << endl;
    cout << "Subtraction of the two imaginary number: " << subs.imaginary << endl;
    cout << "Multiplication of the two real number: " << multi.real << endl;
    cout << "Multiplication of the two imaginary number: " << multi.imaginary << endl;
    cout << "Division of the two real number: " << div.real << endl;
    cout << "Division of the two imaginary number: " << div.imaginary << endl;
}

