#include <iostream>
using namespace std;


int sumOfDigits(int n) {
  
    if (n == 0) {
        return 0;
    }
    
   
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;
    
  
    if (number < 0) {
        number = -number;
    }
    
    int result = sumOfDigits(number);
    
    cout << "Sum of digits: " << result << endl;
    
    return 0;
}
