/*
Name: Md. Shahriar Haque
ID: 23-51730-2
Course Name: Data Structure Lab
Section: N
*/

#include <iostream>

using namespace std;

struct cricketer {
    int jersey_no;
    int jersey_nos(){
        jersey_no = 7;
        return jersey_no;
    }
    int display() {
        cout << jersey_nos();
    }
};

int main() {
    struct cricketer s1;
    s1.jersey_nos();
    s1.display();
    return 0;
}