#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
       
        for(int space = 1; space <= rows - i; ++space) {
            cout << "  ";
        }

        
        for(int j = 1; j <= i; ++j) {
            cout << j << " ";
        }

       
        for(int j = i - 1; j >= 1; --j) {
            cout << j << " ";
        }

        
        cout << endl;
    }

    return 0;
}
