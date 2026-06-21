#include <iostream>
#include <cctype> 
int main() {
    char lowerChar;

    std::cout << "Enter a lowercase character: ";
    std::cin >> lowerChar;


    char upperChar = std::toupper(lowerChar);

    std::cout << "Uppercase character: " << upperChar << std::endl;

    return 0;
}
