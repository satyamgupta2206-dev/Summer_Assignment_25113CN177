#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int start, end;

   
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";

    
    for (int i = start; i <= end; i++) {
        int temp = i;
        int digits = 0;
        int sum = 0;

        
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = i; 

        
        while (temp > 0) {
            int remainder = temp % 10;
            sum += pow(remainder, digits); 
            temp /= 10;
        }

        
        if (sum == i) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
