

#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Employee {
private:
    int id;
    string name;
    string designation;
    double salary;

public:
    
    Employee(int empId, string empName, string empDesig, double empSalary) {
        id = empId;
        name = empName;
        designation = empDesig;
        salary = empSalary;
    }

   
    int getId() const { 
        return id; 
    }

    
    void displayEmployee() const {
        cout << "ID: " << id 
             << " | Name: " << name 
             << " | Designation: " << designation 
             << " | Salary: $" << salary << endl;
    }
};


int main() {
    vector<Employee> empList; 
    int choice;

    do {
        
        cout << "\n=========================================" << endl;
        cout << "       Employee Management System        " << endl;
        cout << "=========================================" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display All Employees" << endl;
        cout << "3. Search Employee by ID" << endl;
        cout << "4. Delete Employee by ID" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

       
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid choice. Please enter a number." << endl;
            continue;
        }

        switch (choice) {
            case 1: { 
                int id;
                string name, designation;
                double salary;

                cout << "\nEnter Employee ID (Integer): ";
                cin >> id;
                
                
                bool idExists = false;
                for (const auto& emp : empList) {
                    if (emp.getId() == id) {
                        idExists = true;
                        break;
                    }
                }
                if (idExists) {
                    cout << "Error: An employee with ID " << id << " already exists!\n";
                    break;
                }

                cin.ignore(); 
                cout << "Enter Employee Name: ";
                getline(cin, name);
                cout << "Enter Designation: ";
                getline(cin, designation);
                cout << "Enter Salary: ";
                cin >> salary;

               
                empList.push_back(Employee(id, name, designation, salary));
                cout << "\nEmployee added successfully!" << endl;
                break;
            }
            case 2: { 
                if (empList.empty()) {
                    cout << "\nNo employee records found." << endl;
                } else {
                    cout << "\n--- Employee Directory ---" << endl;
                    for (const auto& emp : empList) {
                        emp.displayEmployee();
                    }
                }
                break;
            }
            case 3: { 
                if (empList.empty()) {
                    cout << "\nNo records available to search." << endl;
                    break;
                }

                int searchId;
                cout << "\nEnter Employee ID to search: ";
                cin >> searchId;

                bool found = false;
                for (const auto& emp : empList) {
                    if (emp.getId() == searchId) {
                        cout << "\nRecord Found:" << endl;
                        emp.displayEmployee();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "\nEmployee with ID " << searchId << " not found." << endl;
                }
                break;
            }
            case 4: {
                if (empList.empty()) {
                    cout << "\nNo records available to delete." << endl;
                    break;
                }

                int deleteId;
                cout << "\nEnter Employee ID to delete: ";
                cin >> deleteId;

                bool found = false;
                for (auto it = empList.begin(); it != empList.end(); ++it) {
                    if (it->getId() == deleteId) {
                        empList.erase(it); 
                        cout << "\nEmployee record deleted successfully!" << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "\nEmployee with ID " << deleteId << " not found." << endl;
                }
                break;
            }
            case 5:
                cout << "\nExiting system. Goodbye!" << endl;
                break;

            default:
                cout << "\nInvalid choice! Please select an option between 1 and 5." << endl;
        }

    } while (choice != 5);

    return 0;
}

