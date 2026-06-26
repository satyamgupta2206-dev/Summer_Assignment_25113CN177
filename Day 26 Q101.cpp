#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

   
    int secretNumber = rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    cout << "=========================================\n";
    cout << "Welcome to the Simple Number Guessing Game!\n";
    cout << "I have chosen a number between 1 and 100.\n";
    cout << "Can you guess what it is?\n";
    cout << "=========================================\n\n";

   
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > secretNumber) {
            cout << "Too high! Try a lower number.\n\n";
        } else if (userGuess < secretNumber) {
            cout << "Too low! Try a higher number.\n\n";
        } else {
            cout << "\n🎉 Congratulations! You guessed the correct number!\n";
            cout << "It took you " << attempts << " attempts to win.\n";
        }
    } while (userGuess != secretNumber);

    return 0;
}
