#include <iostream>
using namespace std;

int main() {
    int rows, cols;

   
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[100][100];

   
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nCalculating Row-wise Sum:\n";

   
    for (int i = 0; i < rows; i++) {
        int rowSum = 0; 

        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }

        cout << "Sum of Row " << i + 1 << " = " << rowSum << endl;
    }

    return 0;
}
