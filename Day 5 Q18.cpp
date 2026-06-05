#include <iostream>
using namespace std;

int main() {
    int num, originalNum, rem, sum = 0;

    
    cout << "Enter an integer: ";
    cin >> num;

   
    originalNum = num;

    
    while (num > 0) {
        rem = num % 10;

        
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact;    
        num /= 10;      
    }

    
    if (sum == originalNum) {
        cout << originalNum << " is a Strong Number." << endl;
    } else {
        cout << originalNum << " is not a Strong Number." << endl;
    }

    return 0;
}
