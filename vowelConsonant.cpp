#include <iostream>

int main() {

    char alpha;

    std::cout << "Enter Alphabet character: ";
    std::cin >> alpha;
    if (alpha)
    {
        /* code */
    }
    
    switch (alpha)
    {
    case 'a':
        std::cout << alpha << " is a vowel.";
        break;
    case 'e':
        std::cout << alpha << " is a vowel.";
        break;
    case 'i':
        std::cout << alpha << " is a vowel.";
        break;
    case 'o':
        std::cout << alpha << " is a vowel.";
        break;
    case 'u':
        std::cout << alpha << " is a vowel.";
        break;
    default:
        std::cout << alpha << " is a consonant";
        break;
    }
}