#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;


int findMaxFrequencyElement(const vector<int>& arr) {
   
    unordered_map<int, int> frequencyMap;
    
   
    for (int num : arr) {
        frequencyMap[num]++;
    }
    
    int maxElement = arr[0];
    int maxCount = 0;
    
   
    for (auto const& [element, count] : frequencyMap) {
        if (count > maxCount) {
            maxCount = count;
            maxElement = element;
        }
    }
    
    return maxElement;
}

int main() {
   
    vector<int> numbers = {1, 3, 2, 1, 4, 1, 3, 2, 1, 3};
    
    int result = findMaxFrequencyElement(numbers);
    
    cout << "The element with the maximum frequency is: " << result << endl;
    
    return 0;
}
