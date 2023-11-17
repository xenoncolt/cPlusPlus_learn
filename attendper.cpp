#include <iostream>

using namespace std;

int main() {

    int totalCls;
    cout << "Number of classes held: ";
    cin >> totalCls;

    int attendCls;
    cout << "Number of classes attended: ";
    cin >> attendCls;

    double percent = (attendCls * 100) / totalCls;

    cout << "Percentage of classes attended: " << percent << "%\n";
    
    if (percent > 80)
    {
        cout << "You are can attend to the exam.\n";
    } else {
        cout << "You are cant attend to the exam.\n";
    }
    
}