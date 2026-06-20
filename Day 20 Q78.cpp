#include <iostream>
using namespace std;

int main() {
    int n;
    bool isSymmetric = true;

  
    cout << "Enter the size of the square matrix (N x N): ";
    cin >> n;

    int matrix[100][100];

    
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break; 
        }
    }

   
    if (isSymmetric) {
        cout << "\nThe matrix is a Symmetric Matrix." << endl;
    } else {
        cout << "\nThe matrix is NOT a Symmetric Matrix." << endl;
    }

    return 0;
}
