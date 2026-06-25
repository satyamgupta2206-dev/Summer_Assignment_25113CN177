#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
   
    std::vector<std::string> words = {"Elephant", "Cat", "Dog", "Crocodile", "Hippo"};

    std::cout << "Original words:\n";
    for (const std::string& word : words) {
        std::cout << word << " ";
    }
    std::cout << "\n\n";

  
    std::sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {
        return a.length() < b.length();
    });

  
    std::cout << "Words sorted by length:\n";
    for (const std::string& word : words) {
        std::cout << word << " ";
    }
    std::cout << "\n";

    return 0;
}
