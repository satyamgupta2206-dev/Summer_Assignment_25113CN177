#include <iostream>
using namespace std;


long long findFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i; 
    }
    return fact;
}

int main() {
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

   
    if (number < 0) {
        cout << "Error! Factorial of a negative number does not exist." << endl;
    } else {
        long long result = findFactorial(number);
        cout << "Factorial of " << number << " = " << result << endl;
    }

    return 0;
}
