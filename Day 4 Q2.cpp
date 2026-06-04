#include <iostream>

int main() {
    int n;
    std::cout << "Enter the position (n): ";
    std::cin >> n;

   
    if (n <= 0) {
        std::cout << "The 0-th Fibonacci term is: 0" << std::endl;
        return 0;
    } else if (n == 1) {
        std::cout << "The 1-st Fibonacci term is: 1" << std::endl;
        return 0;
    }

   
    long long prev2 = 0; 
    long long prev1 = 1; 
    long long current = 0;

   
    for (int i = 2; i <= n; ++i) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    std::cout << "The " << n << "-th Fibonacci term is: " << current << std::endl;

    return 0;
}
