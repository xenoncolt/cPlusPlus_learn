#include <iostream>

using namespace std;

int main() {
    int gameTime;
    cin >> gameTime;

    for(int i = 0; i < gameTime; ++i) {
        int alice, bob;
        cin >> alice >> bob;

        

        if (abs(alice - bob) % 2 == 0)
            cout << "Bob wins \n";
        else
            cout << "Alice wins \n";
    }
}