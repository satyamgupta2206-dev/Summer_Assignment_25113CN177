#include <iostream>
using namespace std;

int main() {
    int num;
    int product = 1; // Must initialize to 1

    cout << "Enter a number: ";
    cin >> num;

    
    if (num < 0) {
        num = -num;
    }

    
    if (num == 0) {
        product = 0;
    }

    while (num > 0) {
        int digit = num % 10; 
        product = product * digit; 
        num = num / 10;     
    }

    cout << "Product of digits: " << product << endl;

    return 0;
}
