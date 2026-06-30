#include <iostream>
#include <string>

using namespace std;


const int MAX_STUDENTS = 100;


void displayMenu();
void addStudent(int ids[], string names[], string grades[], int &studentCount);
void displayAllStudents(const int ids[], const string names[], const string grades[], int studentCount);
void searchStudent(const int ids[], const string names[], const string grades[], int studentCount);

int main() {
   
    int studentIDs[MAX_STUDENTS];
    string studentNames[MAX_STUDENTS];
    string studentGrades[MAX_STUDENTS];
    
    
    int currentStudentCount = 0; 
    int userChoice;

    cout << "=== Welcome to the Mini Student Management System ===" << endl;

  
    do {
        displayMenu();
        cout << "Enter your choice (1-4): ";
        cin >> userChoice;

        
        if(cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid entry. Please enter a valid number." << endl;
            continue;
        }

        switch (userChoice) {
            case 1:
                addStudent(studentIDs, studentNames, studentGrades, currentStudentCount);
                break;
            case 2:
                displayAllStudents(studentIDs, studentNames, studentGrades, currentStudentCount);
                break;
            case 3:
                searchStudent(studentIDs, studentNames, studentGrades, currentStudentCount);
                break;
            case 4:
                cout << "\nThank you for using the system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please choose an option between 1 and 4." << endl;
        }
    } while (userChoice != 4);

    return 0;
}


void displayMenu() {
    cout << "\n-------------------------------------" << endl;
    cout << "1. Add New Student Record" << endl;
    cout << "2. Display All Student Records" << endl;
    cout << "3. Search Student by ID" << endl;
    cout << "4. Exit Program" << endl;
    cout << "-------------------------------------" << endl;
}


void addStudent(int ids[], string names[], string grades[], int &studentCount) {
    if (studentCount >= MAX_STUDENTS) {
        cout << "\nError: Database is full! Cannot add more records." << endl;
        return;
    }

    cout << "\n--- Add Student Record ---" << endl;
    cout << "Enter Student ID (Integer): ";
    cin >> ids[studentCount];
    
   
    cin.ignore(); 
    cout << "Enter Student Name: ";
    getline(cin, names[studentCount]);

    cout << "Enter Letter Grade (e.g., A+, B, F): ";
    cin >> grades[studentCount];

    
    studentCount++; 
    cout << "Record successfully saved!" << endl;
}


void displayAllStudents(const int ids[], const string names[], const string grades[], int studentCount) {
    if (studentCount == 0) {
        cout << "\nNo records found. The database is empty!" << endl;
        return;
    }

    cout << "\n--- Registered Student List ---" << endl;
   
    cout << "ID\t\tName\t\t\tGrade" << endl;
    cout << "------------------------------------------------" << endl;
    
    for (int i = 0; i < studentCount; i++) {
        cout << ids[i] << "\t\t" << names[i];
        
       
        if (names[i].length() < 8) cout << "\t\t\t";
        else if (names[i].length() < 16) cout << "\t\t";
        else cout << "\t";
        
        cout << grades[i] << endl;
    }
}


void searchStudent(const int ids[], const string names[], const string grades[], int studentCount) {
    if (studentCount == 0) {
        cout << "\nNo records available to perform a search." << endl;
        return;
    }

    int searchID;
    bool matchFound = false;

    cout << "\n--- Search Records ---" << endl;
    cout << "Enter the Student ID to search: ";
    cin >> searchID;

    
    for (int i = 0; i < studentCount; i++) {
        if (ids[i] == searchID) {
            cout << "\nMatch Found!" << endl;
            cout << "-------------------------" << endl;
            cout << "ID:    " << ids[i] << endl;
            cout << "Name:  " << names[i] << endl;
            cout << "Grade: " << grades[i] << endl;
            cout << "-------------------------" << endl;
            matchFound = true;
            break;
        }
    }

    if (!matchFound) {
        cout << "Record with ID " << searchID << " was not found." << endl;
    }
}
