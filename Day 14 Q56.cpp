#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 7, 2, 8, 4, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate elements in the array are: ";
    
   
    for (int i = 0; i < n; i++) {
        
        
        for (int j = i + 1; j < n; j++) {
            
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break; 
            }
        }
    }

    cout << endl;
    return 0;
}
