#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

   
    int freq[256] = {0};

   
    for (char c : str) {
        
        freq[(unsigned char)c]++;
    }

    int maxCount = -1;
    char maxChar = ' ';

   
    for (char c : str) {
        if (maxCount < freq[(unsigned char)c]) {
            maxCount = freq[(unsigned char)c];
            maxChar = c;
        }
    }

 
    if (str.empty()) {
        cout << "The string is empty." << endl;
    } else {
        cout << "Maximum occurring character: '" << maxChar << "' (Occurs " << maxCount << " times)" << endl;
    }

    return 0;
}
