#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    // Iterate from 1 to n and add each number to sum
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum from 1 to " << n << " = " << sum << endl;

    return 0;
}
