// Name: Nabeeha Taiyeba
// Id: 23-51590-2
// Section: O
// Course: Introduction to Programming Lab


#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    int publicationYear;

public:
    Book() {
        cout << "Enter the title of the book: ";
        getline(cin, title);

        cout << "Enter the author of the book: ";
        getline(cin, author);

        cout << "Enter the publication year of the book: ";
        cin >> publicationYear;
    }

    void displayBookDetails() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
    }
};

int main() {
    Book myBook;


    myBook.displayBookDetails();


    return 0;
}
