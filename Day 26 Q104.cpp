#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;


struct QuizQuestion {
    string questionText;
    string options[4];
    char correctAnswer;
};

int main() {
   
    vector<QuizQuestion> quiz = {
        {
            "Which programming language is known as a subset/predecessor of C++?",
            {"A. Python", "B. C", "C. Java", "D. Pascal"},
            'B'
        },
        {
            "What is the correct extension of a user-defined C++ header file?",
            {"A. .h", "B. .cpp", "C. .cc", "D. .hg"},
            'A'
        },
        {
            "Which of the following is NOT a fundamental data type in C++?",
            {"A. int", "B. float", "C. string", "D. char"},
            'C'
        }
    };

    int totalScore = 0;
    char userGuess;

    cout << "=========================================" << endl;
    cout << "      WELCOME TO THE SIMPLE C++ QUIZ      " << endl;
    cout << "=========================================\n" << endl;

   
    for (size_t i = 0; i < quiz.size(); ++i) {
        cout << "Question " << (i + 1) << ": " << quiz[i].questionText << endl;
        
       
        for (int j = 0; j < 4; ++j) {
            cout << quiz[i].options[j] << endl;
        }

       
        cout << "Your Answer (A, B, C, or D): ";
        cin >> userGuess;
        
        
        userGuess = toupper(userGuess);

       
        if (userGuess == quiz[i].correctAnswer) {
            cout << "✨ Correct!\n" << endl;
            totalScore++;
        } else {
            cout << "❌ Wrong! The correct answer was " << quiz[i].correctAnswer << ".\n" << endl;
        }
    }

    
    cout << "=========================================" << endl;
    cout << "                QUIZ OVER                " << endl;
    cout << "=========================================" << endl;
    cout << "Your Total Score: " << totalScore << " out of " << quiz.size() << endl;
    
  
    double percentage = (static_cast<double>(totalScore) / quiz.size()) * 100;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "=========================================" << endl;

    return 0;
}
