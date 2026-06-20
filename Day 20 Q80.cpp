#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 3;
    
  
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "--- Matrix ---" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "--------------" << endl;

    
    for (int j = 0; j < cols; j++) {
        int colSum = 0; 
        
       
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j]; 
        }
        
        cout << "Sum of Column " << j + 1 << ": " << colSum << endl;
    }

    return 0;
}
