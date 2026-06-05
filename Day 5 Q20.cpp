#include <iostream>

using namespace std;


long long getLargestPrimeFactor(long long n) {
    long long maxPrime = -1;

    
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }

  
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }

    
    if (n > 2) {
        maxPrime = n;
    }

    return maxPrime;
}

int main() {
    long long number;
    
    cout << "Enter a positive integer: ";
    if (!(cin >> number) || number <= 1) {
        cout << "Please enter a valid integer greater than 1." << endl;
        return 1;
    }

    long long result = getLargestPrimeFactor(number);
    cout << "The largest prime factor of " << number << " is: " << result << endl;

    return 0;
}
