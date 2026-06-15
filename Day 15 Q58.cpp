#include <iostream>
using namespace std;


void leftRotate(int arr[], int n, int d) {
   
    d = d % n; 

    
    int temp[n];

   
    int j = 0;
    for (int i = d; i < n; i++) {
        temp[j] = arr[i];
        j++;
    }

   
    for (int i = 0; i < d; i++) {
        temp[j] = arr[i];
        j++;
    }

    
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    leftRotate(arr, n, d);

    cout << "Left rotated array by " << d << " positions: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
