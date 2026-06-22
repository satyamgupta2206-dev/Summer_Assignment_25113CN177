#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string sentence;
    string word;
    int wordCount = 0;

   
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    
    stringstream ss(sentence);

  
    while (ss >> word) {
        wordCount++;
    }

  
    cout << "Total number of words: " << wordCount << endl;

    return 0;
}
