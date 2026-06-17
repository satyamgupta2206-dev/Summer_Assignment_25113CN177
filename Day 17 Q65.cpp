#include <iostream>
using namespace std;

int main() {
   
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6, 7};

  
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

   
    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];

    
    int k = 0;

    
    for (int i = 0; i < size1; i++) {
        mergedArr[k] = arr1[i];
        k++;
    }

  
    for (int i = 0; i < size2; i++) {
        mergedArr[k] = arr2[i];
        k++;
    }

  
    cout << "Merged Array: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
