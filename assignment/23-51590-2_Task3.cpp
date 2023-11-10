// Name: Nabeeha Taiyeba
// Student ID: 23-51590-2
// Section: O
// Introduction to programming language

#include <iostream>

using namespace std ;
int main ()
{
    int n;
    char name [n];
    cout << "How many letter you want to check: ";
    cin >> n;
    
    cout << "Write your word: ";
    for (int i = 0; i < n ; i++) {
        cin >> name[i];
    }

    int vul = 0 ;

    for (int j = 0; j < n; j++) {

        char vowel = tolower(name[j]);

        if(vowel == 'a'|| vowel == 'u'|| vowel == 'o'|| vowel == 'i'|| vowel == 'e'){
            vul ++ ;
        }

    }
cout << "Total vowel number in your text: " << vul;

return 0 ;

}