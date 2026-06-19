#include <iostream>
using namespace std;

int main() {
   
    int rows = 3, cols = 3;
    
   
    int matrix1[3][3], matrix2[3][3], result[3][3];

  
    cout << "Enter elements for the first 3x3 matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }

   
    cout << "Enter elements for the second 3x3 matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }

  
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

  
    cout << "\nResultant Matrix after Subtraction:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
