#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0.0, average;

 
    cout << "Enter the number of elements: ";
    cin >> n;

    
    float arr[n];

    
    cout << "Enter " << n << " numbers: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; 
    }

    
    average = sum / n;

   
    cout << "\nSum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
