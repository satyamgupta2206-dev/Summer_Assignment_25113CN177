#include <iostream>
using namespace std;

int main() {
    int rows, cols;

   
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix1[100][100], matrix2[100][100], sum[100][100];

  
    cout << "\nEnter elements of the 1st matrix:\n";
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cin >> matrix1[i][j];
        }
    }

   
    cout << "\nEnter elements of the 2nd matrix:\n";
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cin >> matrix2[i][j];
        }
    }

    
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    
    cout << "\nSum of the two matrices is:\n";
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}
