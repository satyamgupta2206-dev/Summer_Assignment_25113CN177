#include <iostream>
using namespace std;

int main() {
    int size = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int primarySum = 0;
    int secondarySum = 0;

    
    for (int i = 0; i < size; i++) {
        primarySum += matrix[i][i];                
        secondarySum += matrix[i][size - 1 - i]; 
    }

    cout << "Primary Diagonal Sum: " << primarySum << endl;
    cout << "Secondary Diagonal Sum: " << secondarySum << endl;

    return 0;
}
