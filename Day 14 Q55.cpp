#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;

   
    cout << "Enter the number of elements: ";
    cin >> n;

   
    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
           
            secondLargest = largest;
            
            largest = arr[i];
        } 
        
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    
    if (secondLargest == INT_MIN) {
        cout << "There is no unique second largest element." << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}


