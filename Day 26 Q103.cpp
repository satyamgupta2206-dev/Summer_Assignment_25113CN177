#include <iostream>

using namespace std;


void showMenu();
void checkBalance(double balance);
double depositMoney(double balance);
double withdrawMoney(double balance);

int main() {
   
    const int DEFAULT_PIN = 1234;
    double accountBalance = 1000.0; 
    int enteredPin;
    int choice;
    int attempts = 0;

    cout << "=== WELCOME TO THE VIRTUAL ATM SYSTEM ===" << endl;

   
    while (attempts < 3) {
        cout << "Please enter your 4-digit PIN: ";
        cin >> enteredPin;

        if (enteredPin == DEFAULT_PIN) {
            break;
        } else {
            attempts++;
            cout << "Incorrect PIN. Attempts remaining: " << (3 - attempts) << endl;
        }
    }

   
    if (attempts == 3) {
        cout << "Too many incorrect attempts. Your card has been blocked!" << endl;
        return 0;
    }

   
    do {
        showMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance(accountBalance);
                break;
            case 2:
                accountBalance = depositMoney(accountBalance);
                break;
            case 3:
                accountBalance = withdrawMoney(accountBalance);
                break;
            case 4:
                cout << "\nThank you for using our ATM. Goodbye!" << endl;
                break;
            default:
                cout << "\nInvalid choice! Please select a valid option from the menu." << endl;
        }
    } while (choice != 4);

    return 0;
}


void showMenu() {
    cout << "\n-----------------------------" << endl;
    cout << "          ATM MENU           " << endl;
    cout << "-----------------------------" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------" << endl;
}


void checkBalance(double balance) {
    cout << "\nYour current balance is: $" << balance << endl;
}


double depositMoney(double balance) {
    double depositAmount;
    cout << "\nEnter amount to deposit: $";
    cin >> depositAmount;

    if (depositAmount > 0) {
        balance += depositAmount;
        cout << "$" << depositAmount << " successfully deposited." << endl;
    } else {
        cout << "Invalid deposit amount!" << endl;
    }
    return balance;
}


double withdrawMoney(double balance) {
    double withdrawalAmount;
    cout << "\nEnter amount to withdraw: $";
    cin >> withdrawalAmount;

    if (withdrawalAmount > balance) {
        cout << "Transaction Failed! Insufficient funds." << endl;
    } else if (withdrawalAmount <= 0) {
        cout << "Transaction Failed! Invalid withdrawal amount." << endl;
    } else {
        balance -= withdrawalAmount;
        cout << "$" << withdrawalAmount << " successfully withdrawn." << endl;
    }
    return balance;
}
