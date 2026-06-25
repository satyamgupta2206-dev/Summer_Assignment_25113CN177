#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    cout << "Common characters: ";
    
   
    string printed = "";

    
    for (int i = 0; i < str1.length(); i++) {
        for (int j = 0; j < str2.length(); j++) {
            
           
            if (str1[i] == str2[j]) {
                
                
                if (printed.find(str1[i]) == string::npos) {
                    cout << str1[i] << " ";
                    printed += str1[i]; 
                }
                break;
            }
        }
    }

    cout << endl;
    return 0;
}
