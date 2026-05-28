#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num == 0) {
        cout << 1;
        return 0;
    }

    if (num < 0) num = -num; // make positive

    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }

    cout << count;
    return 0;
}
