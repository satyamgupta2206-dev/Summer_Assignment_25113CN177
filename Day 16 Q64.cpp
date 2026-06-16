#include <iostream>
#include <algorithm>

using namespace std;


int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n;
    }

   
    sort(arr, arr + n);

  
    int uniqueIndex = 0; 

    for (int i = 1; i < n; i++) {
       
        if (arr[i] != arr[uniqueIndex]) {
            uniqueIndex++;            
            arr[uniqueIndex] = arr[i];
        }
    }

  
    return uniqueIndex + 1;
}

int main() {
    int arr[] = {4, 2, 9, 2, 4, 1, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

   
    int newSize = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
