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
    double dominator = (b.real * b.real) + (b.imaginary * b.imaginary);
    store.real = ((a.real * b.real) + (a.imaginary * b.imaginary)) / dominator;
    store.imaginary = ((a.imaginary * b.real) - (a.real * b.imaginary)) / dominator;
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

    cout << "Sum: " << sum.real << " + " << sum.imaginary << "i" << endl;
    cout << "Subtraction: " << subs.real << " + " << subs.imaginary << "i" << endl;
    cout << "Multiplication: " << multi.real << " + " << multi.imaginary << "i" << endl;
    cout << "Division: " << div.real << " + " << div.imaginary << "i" << endl;
    system("pause");
    return 0;
}

