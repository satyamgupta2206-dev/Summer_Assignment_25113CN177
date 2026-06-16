#include <iostream>
using namespace std;


void findPairWithSum(int arr[], int size, int targetSum) {
    bool found = false;

   
    for (int i = 0; i < size - 1; i++) {
       
        for (int j = i + 1; j < size; j++) {
          
            if (arr[i] + arr[j] == targetSum) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                found = true;
                return; 
            }
        }
    }

    if (!found) {
        cout << "No pair found with the given sum." << endl;
    }
}

int main() {
    int arr[] = {8, 7, 2, 5, 3, 1};
    int targetSum = 10;
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Target Sum: " << targetSum << endl;
    findPairWithSum(arr, size, targetSum);

    return 0;
}
