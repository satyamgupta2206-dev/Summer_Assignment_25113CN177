#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    string input = "programming";
    string result = "";
    unordered_set<char> seen;

  
    for (char c : input) {
       
        if (seen.find(c) == seen.end()) {
            result += c;    
            seen.insert(c);  
        }
    }

    cout << "Original String: " << input << endl;
    cout << "After Removing Duplicates: " << result << endl;

    return 0;
}
