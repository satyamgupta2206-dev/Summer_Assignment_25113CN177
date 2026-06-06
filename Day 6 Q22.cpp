#include <iostream>
using namespace std;

int main() {
    long long binary;
    int decimal = 0;
    int base = 1; 
    cout << "Enter a binary number (e.g., 1101): ";
    cin >> binary;

    long long temp = binary;

    while (temp > 0) {
        int last_digit = temp % 10; 
        temp = temp / 10;          
        decimal += last_digit * base; 
        base = base * 2;             
    }

    cout << binary << " in binary = " << decimal << " in decimal" << endl;

    return 0;
}
