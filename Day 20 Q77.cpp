#include <iostream>
using namespace std;

int main() {
    int A[10][10], B[10][10], C[10][10], r1, c1, r2, c2;

    cout << "Enter rows/cols for first matrix (max 10x10): ";
    cin >> r1 >> c1;
    cout << "Enter rows/cols for second matrix (max 10x10): ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Error! Columns of first must equal rows of second." << endl;
        return 0;
    }

   
    for(int i=0; i<r1; ++i) for(int j=0; j<c1; ++j) cin >> A[i][j];
    for(int i=0; i<r2; ++i) for(int j=0; j<c2; ++j) cin >> B[i][j];

    
    for(int i=0; i<r1; ++i) for(int j=0; j<c2; ++j) C[i][j] = 0;

    
    for(int i=0; i<r1; ++i)
        for(int j=0; j<c2; ++j)
            for(int k=0; k<c1; ++k)
                C[i][j] += A[i][k] * B[k][j];

   
    for(int i=0; i<r1; ++i) {
        for(int j=0; j<c2; ++j) cout << C[i][j] << " ";
        cout << endl;
    }
    return 0;
}
