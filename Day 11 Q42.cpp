#include <iostream>
using namespace std;


int findMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a = 15;
    int b = 25;

    
    int maxVal = findMax(a, b);

   
    cout << "The maximum value between " << a << " and " << b << " is: " << maxVal << endl;

    return 0;
}
