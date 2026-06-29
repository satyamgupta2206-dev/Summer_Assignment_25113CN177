#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    do {
       
        cout << "\n===============================" << endl;
        cout << "       SIMPLE CALCULATOR       " << endl;
        cout << "===============================" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Exit" << endl;
        cout << "-------------------------------" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

       
        if (choice == 5) {
            cout << "Exiting calculator program. Goodbye!" << endl;
            break;
        }

     
        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

           
            switch (choice) {
                case 1:
                    result = num1 + num2;
                    cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                    break;
                case 2:
                    result = num1 - num2;
                    cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                    break;
                case 3:
                    result = num1 * num2;
                    cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                    break;
                case 4:
                    
                    if (num2 != 0) {
                        result = num1 / num2;
                        cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                    } else {
                        cout << "Error: Division by zero is not allowed!" << endl;
                    }
                    break;
            }
        } else {
            cout << "Invalid choice! Please choose a valid option between 1 and 5." << endl;
        }

    } while (choice != 5); 

    return 0;
}
