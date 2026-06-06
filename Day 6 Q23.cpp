#include <iostream>


int countSetBits(int n) {
    int count = 0;
    
    while (n > 0) {
        
        count += (n & 1); 
        
        
        n = n >> 1; 
    }
    
    return count;
}

int main() {
    int number = 29;
    
    std::cout << "Number of set bits in " << number 
              << " is: " << countSetBits(number) << std::endl;
              
    return 0;
}
