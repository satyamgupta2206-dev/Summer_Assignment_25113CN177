#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;


class Employee {
private:
    int id;
    string name;
    double basicSalary;
    double hra; 
    double da;  
    double grossSalary;

public:
   
    Employee(int empId, string empName, double salary) {
        id = empId;
        name = empName;
        basicSalary = salary;
        calculateSalary();
    }

   
    void calculateSalary() {
        hra = 0.20 * basicSalary; 
        da = 0.10 * basicSalary; 
        grossSalary = basicSalary + hra + da;
    }

    
    int getId() const {
        return id;
    }

   
    void displayRecord() const {
        cout << setw(8) << id 
             << setw(15) << name 
             << setw(15) << fixed << setprecision(2) << basicSalary 
             << setw(10) << hra 
             << setw(10) << da 
             << setw(15) << grossSalary << endl;
    }
};

int main() {
    vector<Employee> recordSystem; 
    int choice;

    while (true) {
        cout << "\n=========================================" << endl;
        cout << "     SALARY RECORD MANAGEMENT SYSTEM     " << endl;
        cout << "=========================================" << endl;
        cout << "1. Add Employee Record" << endl;
        cout << "2. Display All Salary Records" << endl;
        cout << "3. Search Record by Employee ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string name;
            double salary;

            cout << "\nEnter Employee ID: ";
            cin >> id;
            cin.ignore(); 
            cout << "Enter Employee Name: ";
            getline(cin, name);
            cout << "Enter Basic Salary: ";
            cin >> salary;

            
            recordSystem.push_back(Employee(id, name, salary));
            cout << "\nRecord added successfully!" << endl;

        } else if (choice == 2) {
            if (recordSystem.empty()) {
                cout << "\nNo records found in the database." << endl;
                continue;
            }

            cout << "\n--------------------------------------------------------------------------------" << endl;
            cout << setw(8) << "ID" << setw(15) << "Name" << setw(15) << "Basic" << setw(10) << "HRA" << setw(10) << "DA" << setw(15) << "Gross Salary" << endl;
            cout << "--------------------------------------------------------------------------------" << endl;
            
            for (const auto& emp : recordSystem) {
                emp.displayRecord();
            }
            cout << "--------------------------------------------------------------------------------" << endl;

        } else if (choice == 3) {
            if (recordSystem.empty()) {
                cout << "\nNo records found in the database." << endl;
                continue;
            }

            int searchId;
            bool found = false;
            cout << "\nEnter Employee ID to Search: ";
            cin >> searchId;

            for (const auto& emp : recordSystem) {
                if (emp.getId() == searchId) {
                    cout << "\nRecord Found:" << endl;
                    cout << "--------------------------------------------------------------------------------" << endl;
                    cout << setw(8) << "ID" << setw(15) << "Name" << setw(15) << "Basic" << setw(10) << "HRA" << setw(10) << "DA" << setw(15) << "Gross Salary" << endl;
                    cout << "--------------------------------------------------------------------------------" << endl;
                    emp.displayRecord();
                    cout << "--------------------------------------------------------------------------------" << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "\nEmployee Record with ID " << searchId << " not found." << endl;
            }

        } else if (choice == 4) {
            cout << "\nExiting System. Thank you!" << endl;
            break;

        } else {
            cout << "\nInvalid choice! Please select an option between 1 and 4." << endl;
        }
    }

    return 0;
}
