#include <iostream>
using namespace std;

int main() {
    int arr1[] = {4, 9, 5, 4};
    int arr2[] = {9, 4, 9, 8, 4};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Intersection elements: ";


    for (int i = 0; i < size1; i++) {
       
        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                alreadyPrinted = true;
                break;
            }
        }
        
       
        if (!alreadyPrinted) {
            for (int j = 0; j < size2; j++) {
                if (arr1[i] == arr2[j]) {
                    cout << arr1[i] << " ";
                    break;
                }
            }
        }
    }

    cout << endl;
    return 0;
}
