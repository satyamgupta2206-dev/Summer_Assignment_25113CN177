#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    
    
    std::getline(std::cin, sentence);

   
    std::stringstream ss(sentence);
    std::string current_word;
    std::string longest_word = "";

  
    while (ss >> current_word) {
      
        if (current_word.length() > longest_word.length()) {
            longest_word = current_word;
        }
    }

    
    std::cout << "The longest word is: " << longest_word << std::endl;
    std::cout << "Its length is: " << longest_word.length() << " characters." << std::endl;

    return 0;
}
