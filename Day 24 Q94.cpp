#include <iostream>
#include <string>


std::string compressString(const std::string& str) {
    if (str.empty()) return "";

    std::string compressed = "";
    int count = 1;

   
    for (size_t i = 0; i < str.length(); i++) {
    
        if (i + 1 < str.length() && str[i] == str[i + 1]) {
            count++;
        } else {
           
            compressed += str[i];
            compressed += std::to_string(count);
            count = 1;
        }
    }

    return compressed;
}

int main() {
    std::string input;
    
    std::cout << "Enter a string to compress (e.g., aaabbbccc): ";
    std::cin >> input;

    std::string result = compressString(input);

    std::cout << "Original String: " << input << std::endl;
    std::cout << "Compressed String: " << result << std::endl;

    return 0;
}
