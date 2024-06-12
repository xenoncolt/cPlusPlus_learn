#include <iostream>

using namespace std;

// same aita o akta function 
double tax(double money) {
    if (money < 200) 
    {
        return money * 0 / 100;
    } 
    else if (money >= 200 && money < 600) 
    {
        return money * 10 / 100;
    } 
    else if (money >= 600 && money < 1200) 
    {
        return money * 15 / 100;
    } 
    else if (money >= 1200 && money < 2000)
    {
        return money * 20 / 100;
    } 
    else if (money >= 2000 && money < 3500)
    {
        return money * 25 / 100;
    } 
    else if (money >= 3500)
    {
        return money * 30 / 100;
    }  

    return 0;
};


int main() {
    double salary;

    cout << "Enter the salary amount: ";
    cin >> salary;

    //same ager moto e
    cout << "The tax of the salary is: " << tax(salary) << endl;
}