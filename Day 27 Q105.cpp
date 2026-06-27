#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Student {
private:
    int rollNumber;
    string name;
    float marks;

public:
    
    Student(int roll, string studentName, float studentMarks) {
        rollNumber = roll;
        name = studentName;
        marks = studentMarks;
    }

   
    int getRollNumber() const { return rollNumber; }
    string getName() const { return name; }
    float getMarks() const { return marks; }

 
    void display() const {
        cout << "Roll No: " << rollNumber 
             << " | Name: " << name 
             << " | Marks: " << marks << "%" << endl;
    }
};


class StudentManagementSystem {
private:
    vector<Student> students;

public:
   
    void addStudent() {
        int roll;
        string name;
        float marks;

        cout << "\nEnter Roll Number: ";
        cin >> roll;

      
        for (const auto& student : students) {
            if (student.getRollNumber() == roll) {
                cout << "Error: A student with this Roll Number already exists!\n";
                return;
            }
        }

        cout << "Enter Name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;

      
        students.push_back(Student(roll, name, marks));
        cout << "Student record added successfully!\n";
    }

 
    void displayAll() const {
        if (students.empty()) {
            cout << "\nNo records found in the system.\n";
            return;
        }

        cout << "\n--- Student Records List ---\n";
        for (const auto& student : students) {
            student.display();
        }
    }

  
    void searchStudent() const {
        if (students.empty()) {
            cout << "\nNo records to search.\n";
            return;
        }

        int roll;
        cout << "\nEnter Roll Number to search: ";
        cin >> roll;

        for (const auto& student : students) {
            if (student.getRollNumber() == roll) {
                cout << "\nStudent Found:\n";
                student.display();
                return;
            }
        }
        cout << "Student with Roll Number " << roll << " not found.\n";
    }

  
    void deleteStudent() {
        if (students.empty()) {
            cout << "\nNo records to delete.\n";
            return;
        }

        int roll;
        cout << "\nEnter Roll Number to delete: ";
        cin >> roll;

        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->getRollNumber() == roll) {
                students.erase(it);
                cout << "Student record deleted successfully!\n";
                return;
            }
        }
        cout << "Student with Roll Number " << roll << " not found.\n";
    }
};


int main() {
    StudentManagementSystem sms;
    int choice;

    do {
        cout << "\n======================================";
        cout << "\n  STUDENT RECORD MANAGEMENT SYSTEM";
        cout << "\n======================================";
        cout << "\n1. Add Student Record";
        cout << "\n2. Display All Records";
        cout << "\n3. Search Student Record";
        cout << "\n4. Delete Student Record";
        cout << "\n5. Exit";
        cout << "\nEnter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                sms.addStudent();
                break;
            case 2:
                sms.displayAll();
                break;
            case 3:
                sms.searchStudent();
                break;
            case 4:
                sms.deleteStudent();
                break;
            case 5:
                cout << "\nThank you for using the system. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please select an option between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}
