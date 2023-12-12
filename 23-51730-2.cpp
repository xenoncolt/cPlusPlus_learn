/*
Name: Md. Shahriar Haque
Id: 23-51730-2
Section: O
Course: Introduction to Programming Lab
*/
#include <iostream>

using std::cin;
using std::cout;

class avgResult {
    public:
        int n;
        double result[];
        void countInput(){
            cout << "How many results you want to average? \n";
            cin >> n;
        

            for (int i = 0; i < n; i++)
            {
                cout << "Write your " << i+1 << " result: ";
                cin >> result[i];
            }
        }
        

        void calculateAvg(){
            double total = 0;
            for (int j = 0; j < n; j++)
            {
                total += result[j];
            }

            cout << "Your total number: " << total << "\n";

            double avg = total / n;

            cout << "Your average number: " << avg << "\n";
        }
};

int main(){
    avgResult result;
    result.countInput();
    result.calculateAvg();
}