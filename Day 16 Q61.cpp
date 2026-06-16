#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {1, 2, 6, 3, 5}; 
    
  
    int size = sizeof(arr) / sizeof(arr[0]); 
    
   
    int n = size + 1; 
    
  
    int expectedSum = (n * (n + 1)) / 2; 
    
   
    int actualSum = 0;
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }
    
   
    int missingNumber = expectedSum - actualSum; 
    
    cout << "The missing number is: " << missingNumber << endl;
    
    return 0;
}
