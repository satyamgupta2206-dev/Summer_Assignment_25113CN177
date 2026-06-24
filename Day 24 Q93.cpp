#include <iostream>
#include <string>

using namespace std;


bool isRotation(string str1, string str2) {
  
    if (str1.length() != str2.length()) {
        return false;
    }

   
    string concatenated = str1 + str1;

   
    if (concatenated.find(str2) != string::npos) {
        return true;
    }

    return false;
}

int main() {
    string str1 = "ABCD";
    string str2 = "CDAB";

    if (isRotation(str1, str2)) {
        cout << "\"" << str2 << "\" is a rotation of \"" << str1 << "\"" << endl;
    } else {
        cout << "\"" << str2 << "\" is NOT a rotation of \"" << str1 << "\"" << endl;
    }

    return 0;
}
