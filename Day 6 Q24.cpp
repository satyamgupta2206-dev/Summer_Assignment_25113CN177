#include <iostream>
using namespace std;

int main() {
    double base;
    int exponent;
    double result = 1.0;

   
    cout << "Enter base (x): ";
    cin >> base;
    cout << "Enter exponent (n): ";
    cin >> exponent;

   
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    
    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}
