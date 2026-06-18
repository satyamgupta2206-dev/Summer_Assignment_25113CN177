#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int arr[] = {15, 3, 89, 42, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

   
    sort(arr, arr + n, greater<int>());

   
    cout << "Array sorted in descending order: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
