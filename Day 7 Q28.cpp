#include <iostream>
using namespace std;


int reverseNumber(int n) {
    static int rev = 0;
    static int base = 1;

    // Base case
    if (n == 0) {
        return rev;
    }

    
    int remainder = n % 10;
    rev = rev * 10 + remainder;

   
    reverseNumber(n / 10);

    return rev;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int reversed = reverseNumber(num);
    cout << "Reversed Number: " << reversed << endl;

    return 0;
}
