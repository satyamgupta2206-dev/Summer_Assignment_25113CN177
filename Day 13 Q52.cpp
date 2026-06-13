#include <iostream>

using namespace std;

int main() {
    int size;

    
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];

   
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

 
    cout << "\nEven elements: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) { 
            cout << arr[i] << " ";
        }
    }

  
    cout << "\nOdd elements: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
