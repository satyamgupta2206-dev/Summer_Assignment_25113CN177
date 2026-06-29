#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    int choice;
    string str1, str2;

    do {
       
        cout << "\n================================" << endl;
        cout << "   STRING OPERATION SYSTEM" << endl;
        cout << "================================" << endl;
        cout << "1. Find Length of String" << endl;
        cout << "2. Concatenate (Join) Two Strings" << endl;
        cout << "3. Reverse a String" << endl;
        cout << "4. Compare Two Strings" << endl;
        cout << "5. Convert to Uppercase" << endl;
        cout << "6. Exit" << endl;
        cout << "================================" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "\nEnter a string: ";
                getline(cin, str1);
                cout << "Length of the string is: " << str1.length() << " characters." << endl;
                break;

            case 2:
                cout << "\nEnter first string: ";
                getline(cin, str1);
                cout << "Enter second string: ";
                getline(cin, str2);
                cout << "Concatenated string: " << str1 + str2 << endl;
                break;

            case 3:
                cout << "\nEnter a string to reverse: ";
                getline(cin, str1);
                reverse(str1.begin(), str1.end());
                cout << "Reversed string: " << str1 << endl;
                break;

            case 4:
                cout << "\nEnter first string: ";
                getline(cin, str1);
                cout << "Enter second string: ";
                getline(cin, str2);
                if (str1 == str2) {
                    cout << "Both strings are completely equal." << endl;
                } else {
                    cout << "Strings are not equal." << endl;
                }
                break;

            case 5:
                cout << "\nEnter a string: ";
                getline(cin, str1);
                transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
                cout << "Uppercase version: " << str1 << endl;
                break;

            case 6:
                cout << "\nExiting the system. Thank you!" << endl;
                break;

            default:
                cout << "\nInvalid choice! Please select an option between 1 and 6." << endl;
        }

    } while (choice != 6); 

    return 0;
}
