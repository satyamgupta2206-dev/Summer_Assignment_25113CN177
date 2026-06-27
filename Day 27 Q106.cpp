#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;


struct Employee {
    int id;
    string name;
    string department;
    double salary;
};

class EmployeeManager {
private:
    vector<Employee> employees;

public:
  
    void addEmployee() {
        Employee emp;
        cout << "\n--- Add New Employee ---" << endl;
        cout << "Enter Employee ID: ";
        while (!(cin >> emp.id)) {
            cout << "Invalid input! Enter a numerical ID: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        
       
        for (const auto& e : employees) {
            if (e.id == emp.id) {
                cout << "Error: Employee with ID " << emp.id << " already exists!\n";
                return;
            }
        }

        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, emp.name);
        cout << "Enter Department: ";
        getline(cin, emp.department);
        cout << "Enter Salary: ";
        while (!(cin >> emp.salary)) {
            cout << "Invalid input! Enter a valid salary: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        employees.push_back(emp);
        cout << "Employee record added successfully!\n";
    }

    
    void displayAllEmployees() const {
        if (employees.empty()) {
            cout << "\nNo employee records found.\n";
            return;
        }

        cout << "\n-----------------------------------------------------------------\n";
        cout << left << setw(10) << "ID" 
             << setw(20) << "Name" 
             << setw(20) << "Department" 
             << setw(15) << "Salary ($)" << endl;
        cout << "-----------------------------------------------------------------\n";

        for (const auto& emp : employees) {
            cout << left << setw(10) << emp.id 
                 << setw(20) << emp.name 
                 << setw(20) << emp.department 
                 << fixed << setprecision(2) << setw(15) << emp.salary << endl;
        }
        cout << "-----------------------------------------------------------------\n";
    }

   
    void searchEmployee() const {
        if (employees.empty()) {
            cout << "\nNo records available to search.\n";
            return;
        }

        int searchId;
        cout << "\nEnter Employee ID to Search: ";
        cin >> searchId;

        for (const auto& emp : employees) {
            if (emp.id == searchId) {
                cout << "\nRecord Found!\n";
                cout << "ID: " << emp.id << "\nName: " << emp.name 
                     << "\nDepartment: " << emp.department 
                     << fixed << setprecision(2) << "\nSalary: $" << emp.salary << endl;
                return;
            }
        }
        cout << "Employee with ID " << searchId << " not found.\n";
    }

    void deleteEmployee() {
        if (employees.empty()) {
            cout << "\nNo records available to delete.\n";
            return;
        }

        int deleteId;
        cout << "\nEnter Employee ID to Delete: ";
        cin >> deleteId;

        for (auto it = employees.begin(); it != employees.end(); ++it) {
            if (it->id == deleteId) {
                employees.erase(it);
                cout << "Employee record deleted successfully!\n";
                return;
            }
        }
        cout << "Employee with ID " << deleteId << " not found.\n";
    }
};

int main() {
    EmployeeManager manager;
    int choice;

    while (true) {
        cout << "\n====================================\n";
        cout << "  EMPLOYEE RECORD MANAGEMENT SYSTEM \n";
        cout << "====================================\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        
        if (!(cin >> choice)) {
            cout << "Invalid selection. Please enter a number between 1 and 5.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                manager.addEmployee();
                break;
            case 2:
                manager.displayAllEmployees();
                break;
            case 3:
                manager.searchEmployee();
                break;
            case 4:
                manager.deleteEmployee();
                break;
            case 5:
                cout << "\nThank you for using the system. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice! Please select an option between 1 and 5.\n";
        }
    }
    return 0;
}
