/*
Name: Md. Shahriar Haque
Id: 23-51730-2
Section: O
Course: Introduction to Programming Lab
*/
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

class inputBookDetails {
        public:
        string title;
        string author;
        int year;

        void inputTitle() {
            std::getline(cin, title);
        }

        void inputAuthor() {
            std::getline(cin, author);
        }

        void inputYear() {
            cin >> year;
        }
    
};


class displayBookDetails : public inputBookDetails {
    public:
        void askTitle() {
            cout << "Which book you are looking for?\n";
        }

        void askAuthor() {
            cout << "There are many book with that name.\nCan you please type the author name of that book?\n";
        }

        void askYear() {
            cout << "Sorry, still there are few book with that title and author name.\nCan you please type the publication year?\n";
        }

        void display() {
            cout << "The book you are looking for is: \n" << title << " (" << year << ")" << "\n            written by " << author << "\n";
        }

};

int main() {
    displayBookDetails bookDetails;

    bookDetails.askTitle();
    bookDetails.inputTitle();

    bookDetails.askAuthor();
    bookDetails.inputAuthor();

    bookDetails.askYear();
    bookDetails.inputYear();

    bookDetails.display();
};