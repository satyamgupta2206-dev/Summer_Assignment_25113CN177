#include <iostream>


bool isPerfect(int num) {
  
    if (num <= 0) {
        return false;
    }

    int sum = 0;
    
    
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i; 
        }
    }

    
    return sum == num;
}

int main() {
    int inputNumber;

    std::cout << "Enter a positive integer: ";
    std::cin >> inputNumber;

   
    if (isPerfect(inputNumber)) {
        std::cout << inputNumber << " is a perfect number.\n";
    } else {
        std::cout << inputNumber << " is not a perfect number.\n";
    }

    return 0;
}
