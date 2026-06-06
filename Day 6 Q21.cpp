#include <iostream>
using namespace std;

int main() {
    int decimalNum;
    int binaryNum[32]; 
    int i = 0;

   
    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    
    if (decimalNum == 0) {
        cout << "Binary equivalent: 0" << endl;
        return 0;
    }

    
    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2; 
        decimalNum = decimalNum / 2;   
        i++;                           
    }

    
    cout << "Binary equivalent: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
    cout << endl;

    return 0;
}
