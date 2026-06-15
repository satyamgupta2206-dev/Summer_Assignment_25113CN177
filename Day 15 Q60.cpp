#include <iostream>
using namespace std;


void moveZerosToEnd(int arr[], int n) {
    int count = 0; 

    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

   
    while (count < n) {
        arr[count] = 0;
        count++;
    }
}

int main() {
    int arr[] = {1, 0, 3, 0, 12, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    moveZerosToEnd(arr, n);

    cout << "Modified Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
