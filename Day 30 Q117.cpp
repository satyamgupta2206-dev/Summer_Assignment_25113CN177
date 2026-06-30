#include <iostream>
#include <string>

using namespace std;


const int MAX_STUDENTS = 100;


string names[MAX_STUDENTS];
int rollNumbers[MAX_STUDENTS];
float marks[MAX_STUDENTS];


int studentCount = 0;


void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "\n[Error] System storage is full!\n";
        return;
    }

    cout << "\n--- Add New Student ---\n";
    cout << "Enter Roll Number: ";
    cin >> rollNumbers[studentCount];

   
    for (int i = 0; i < studentCount; i++) {
        if (rollNumbers[i] == rollNumbers[studentCount]) {
            cout << "[Error] A student with this roll number already exists!\n";
            return;
        }
    }

    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, names[studentCount]);

    cout << "Enter Marks: ";
    cin >> marks[studentCount];

    studentCount++;
    cout << "Record added successfully!\n";
}


void displayAllStudents() {
    if (studentCount == 0) {
        cout << "\nNo records found in the system.\n";
        return;
    }

    cout << "\n-----------------------------------------\n";
    cout << "Roll No\t|\tName\t\t|\tMarks\n";
    cout << "-----------------------------------------\n";
    for (int i = 0; i < studentCount; i++) {
        cout << rollNumbers[i] << "\t|\t" << names[i] << "\t\t|\t" << marks[i] << "\n";
    }
    cout << "-----------------------------------------\n";
}


void searchStudent() {
    if (studentCount == 0) {
        cout << "\nNo records available to search.\n";
        return;
    }

    int targetRoll;
    cout << "\nEnter Roll Number to search: ";
    cin >> targetRoll;

    for (int i = 0; i < studentCount; i++) {
        if (rollNumbers[i] == targetRoll) {
            cout << "\n--- Record Found ---\n";
            cout << "Roll Number : " << rollNumbers[i] << "\n";
            cout << "Name        : " << names[i] << "\n";
            cout << "Marks       : " << marks[i] << "\n";
            return;
        }
    }
    cout << "[Result] Student with Roll Number " << targetRoll << " not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== STUDENT RECORD SYSTEM =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Record by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayAllStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                cout << "\nExiting program. Thank you!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
