/*
Name: Md. Shahriar Haque
ID: 23-51730-2
Course Name: Data Structure Lab
Section: N
*/
#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string books[], int size) {
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (books[j] > books[j + 1])
            {
                string temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
            
        }
        
    }
    
}

int main() {
    string books[] = { "Cinderella", "Mermaid", "Puss in Boots", "Rumpelstiltskin", "Little Red Riding Hood",
        "Sleeping Beauty", "Goldilocks and the Three Bears", "Aladdin", "Blue Fairy", "Tinkerbell",
        "Humpty Dumpty", "Wonderland", "Jungle King" 
    };

    int size = sizeof(books) / sizeof(books[0]);

    bubbleSort(books, size);

    cout << "Books in alphabetical order: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << books[i] << endl;
    }
}