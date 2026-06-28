#include <iostream>
#include <string>
#include <vector>

using namespace std;


class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    
    BankAccount(int accNum, string name, double initialDeposit) {
        accountNumber = accNum;
        accountHolder = name;
        balance = initialDeposit;
    }

    
    int getAccountNumber() const {
        return accountNumber;
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited $" << amount << "\n";
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

  
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance! Your current balance is $" << balance << "\n";
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!\n";
        } else {
            balance -= amount;
            cout << "Successfully withdrew $" << amount << "\n";
        }
    }

    void displayAccount() const {
        cout << "\n--- Account Summary ---" << "\n";
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Account Holder: " << accountHolder << "\n";
        cout << "Current Balance: $" << balance << "\n";
        cout << "-----------------------\n";
    }
};

int main() {
    vector<BankAccount> bank; 
    int nextAccountNumber = 1001;
    int choice;

    do {
       
        cout << "\n===== BANK ACCOUNT MANAGEMENT SYSTEM =====\n";
        cout << "1. Open New Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance / Display Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                double initialDeposit;
                cout << "Enter account holder name: ";
                cin.ignore(); 
                getline(cin, name);
                cout << "Enter initial deposit amount: $";
                cin >> initialDeposit;

                if (initialDeposit < 0) {
                    cout << "Initial deposit cannot be negative!\n";
                } else {
                    
                    BankAccount newAccount(nextAccountNumber, name, initialDeposit);
                    bank.push_back(newAccount);
                    cout << "Account created successfully! Your Account Number is: " << nextAccountNumber << "\n";
                    nextAccountNumber++;
                }
                break;
            }
            case 2: {
                int accNum;
                double amount;
                bool found = false;
                cout << "Enter Account Number: ";
                cin >> accNum;

                for (size_t i = 0; i < bank.size(); i++) {
                    if (bank[i].getAccountNumber() == accNum) {
                        cout << "Enter amount to deposit: $";
                        cin >> amount;
                        bank[i].deposit(amount);
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Account not found!\n";
                break;
            }
            case 3: {
                int accNum;
                double amount;
                bool found = false;
                cout << "Enter Account Number: ";
                cin >> accNum;

                for (size_t i = 0; i < bank.size(); i++) {
                    if (bank[i].getAccountNumber() == accNum) {
                        cout << "Enter amount to withdraw: $";
                        cin >> amount;
                        bank[i].withdraw(amount);
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Account not found!\n";
                break;
            }
            case 4: {
                int accNum;
                bool found = false;
                cout << "Enter Account Number: ";
                cin >> accNum;

                for (size_t i = 0; i < bank.size(); i++) {
                    if (bank[i].getAccountNumber() == accNum) {
                        bank[i].displayAccount();
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Account not found!\n";
                break;
            }
            case 5:
                cout << "Thank you for using our simple bank management system!\n";
                break;
            default:
                cout << "Invalid choice! Please select an option between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}
