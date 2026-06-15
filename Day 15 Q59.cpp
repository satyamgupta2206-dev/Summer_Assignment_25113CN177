#include <iostream>

using namespace std;


void rotateRight(int arr[], int n, int k) {
   
    k = k % n;

   
    int temp[n];

    
    for (int i = 0; i < n; i++) {
        int newPosition = (i + k) % n;
        temp[newPosition] = arr[i];
    }

    
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; 

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

   
    rotateRight(arr, n, k);

    cout << "Rotated array right by " << k << " places: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
