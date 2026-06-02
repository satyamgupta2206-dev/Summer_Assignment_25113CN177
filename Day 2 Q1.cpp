#include <iostream>
using namespace std;

int main() {
    int num, remainder, sum = 0;

    
    cout << "Enter an integer: ";
    cin >> num;

    
    if (num < 0) {
        num = -num;
    }

    
    while (num > 0) {
        remainder = num % 10;  
        sum += remainder;      
        num = num / 10;      
    }

    
    cout << "Sum of digits: " << sum << endl;

    return 0;
}
