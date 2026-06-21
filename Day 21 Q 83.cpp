#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int vowels = 0;
    int consonants = 0;

    cout << "Enter a string: ";
  
    getline(cin, input); 

    
    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];

        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
       
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }

 
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
