// Name: Nabeeha Taiyeba
// Student ID: 23-51590-2
// Section: O
// Introduction to programming language

#include <iostream>
using namespace std;

int main() {
  
  string word1;
  string word2;

  
  cout << "Type two words: ";
  cin >> word1 >> word2;

  
  
  string result = "";

  int i = 0;
  do {
    
    result += word1[i];
    i++;

  } while (i < word1.length());

  int j = 0;
  do {

    result += word2[j];
    j++;

  } while (j < word2.length());

  cout << result << endl;

  return 0;
}
