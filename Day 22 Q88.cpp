#include <iostream>
#include <string>

using namespace std;

int main() {
    string original_str;
    string result_str = ""; 

    cout << "Enter a string with spaces: ";
  
    getline(cin, original_str); 

   
    for (int i = 0; i < original_str.length(); i++) {
      
        if (original_str[i] != ' ') {
            result_str += original_str[i];
        }
    }

    cout << "String after removing spaces: " << result_str << endl;

    return 0;
}
