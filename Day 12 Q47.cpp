#include <iostream>


void printFibonacci(int n) {
    if (n <= 0) {
        std::cout << "Please enter a positive integer greater than 0." << std::endl;
        return;
    }

    long long first = 0, second = 1, next;

    std::cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        
        if (i == 1) {
            std::cout << first;
            continue;
        }
        
        if (i == 2) {
            std::cout << ", " << second;
            continue;
        }
        
        
        next = first + second;
        first = second;
        second = next;
        
        std::cout << ", " << next;
    }
    std::cout << std::endl;
}

int main() {
    int terms;

    std::cout << "Enter the number of terms to print: ";
    std::cin >> terms;

    
    printFibonacci(terms);

    return 0;
}
