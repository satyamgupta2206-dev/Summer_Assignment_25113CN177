#include <iostream>
#include <vector>
#include <algorithm> 

int main() {
   
    std::vector<int> numbers = {10, 20, 10, 30, 20, 10, 40, 10};
    
    int target;
    std::cout << "Enter the element to find its frequency: ";
    std::cin >> target;
    
   
    int frequency = std::count(numbers.begin(), numbers.end(), target);
    
    std::cout << "The element " << target << " appears " << frequency << " times." << std::endl;
    
    return 0;
}
