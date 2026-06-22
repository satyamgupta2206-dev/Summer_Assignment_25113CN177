#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    
  
    cout << "Enter a string: ";
    getline(cin, str);
    
    
    int frequency[256] = {0};
    
   
    for (char c : str) {
      
        frequency[(unsigned char)c]++;
    }
    
   
    cout << "\nCharacter Frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            
            cout << "'" << (char)i << "' : " << frequency[i] << endl;
        }
    }
    
    return 0;
}
