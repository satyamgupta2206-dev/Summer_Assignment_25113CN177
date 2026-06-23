#include <iostream>
#include <string>

using namespace std;


char findFirstUniqueChar(string str) {
    
    int frequency[256] = {0};

  
    for (int i = 0; i < str.length(); i++) {
        frequency[(unsigned char)str[i]]++;
    }

   
    for (int i = 0; i < str.length(); i++) {
        if (frequency[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

  
    return '\0'; 
}

int main() {
    string inputStr;
    cout << "Enter a string: ";
    cin >> inputStr;

    char result = findFirstUniqueChar(inputStr);

    if (result != '\0') {
        cout << "The first non-repeating character is: " << result << endl;
    } else {
        cout << "All characters are repeating or the string is empty." << endl;
    }

    return 0;
}
