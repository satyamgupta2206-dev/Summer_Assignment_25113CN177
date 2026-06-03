#include <iostream>
using namespace std;

int main() {
    int n1, n2, max_val;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    
    max_val = (n1 > n2) ? n1 : n2;

    while (true) {
        
        if (max_val % n1 == 0 && max_val % n2 == 0) {
            cout << "LCM of " << n1 << " and " << n2 << " is " << max_val << endl;
            break; 
        }
        max_val++; 
    }

    return 0;
}
